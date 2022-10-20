/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/auth/AWSCredentials.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>

#include <aws/s3/S3EndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSS3EndpointProviderTests";
using S3EndpointProvider = Aws::S3::Endpoint::S3EndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using S3ResolveEndpointOutcome = Aws::S3::Endpoint::S3EndpointProvider::S3ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<EpProp>>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class S3EndpointProviderTests :public ::testing::TestWithParam<size_t>
{
public:

protected:

};

struct S3EndpointProviderEndpointTestCase
{
    using OperationParamsFromTest = EndpointParameters;

    struct Expect
    {
        struct Endpoint
        {
            Aws::String url;
            ExpEpProps properties;
            ExpEpHeaders headers;
        } endpoint;
        Aws::String error;
    };
    struct OperationInput
    {
        Aws::String operationName;
        OperationParamsFromTest operationParams;
        OperationParamsFromTest builtinParams;
        OperationParamsFromTest clientParams;
    };

    std::string documentation;
    // Specification tells us it is Client Initialization parameters
    // At the same time, specification tells us to test EndpointProvider not the client itself
    // Hence params here will be set as a client params (just like a dedicated field above).
    Aws::Vector<Aws::Endpoint::EndpointParameter> params;
    Aws::Vector<Aws::String> tags;
    Expect expect;
    Aws::Vector<OperationInput> operationInput;
};

static const Aws::Vector<S3EndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"region is not a valid DNS-suffix", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "a b"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."}, // expect
    {} // operationInput
  },
  /*TEST CASE 1*/
  {"Invalid access point ARN: Not S3", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:not-s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN was not for the S3 service, found: not-s3"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:not-s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 2*/
  {"Invalid access point ARN: invalid resource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint:more-data"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN may only contain a single resource component after `accesspoint`."}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint:more-data"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 3*/
  {"Invalid access point ARN: invalid no ap name", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a resource of the format `accesspoint:<accesspoint name>` but no name was provided"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 4*/
  {"Invalid access point ARN: AccountId is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456_789012:accesspoint:apname"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The account id may only contain a-z, A-Z, 0-9 and `-`. Found: `123456_789012`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456_789012:accesspoint:apname"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 5*/
  {"Invalid access point ARN: access point name is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:ap_name"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `ap_name`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:ap_name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 6*/
  {"Access points (disable access points explicitly false)", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 7*/
  {"Access points: partition does not support FIPS", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 8*/
  {"Bucket region is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west -2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region in ARN: `us-west -2` (invalid DNS name)"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west -2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 9*/
  {"Access points when Access points explicitly disabled (used for CreateBucket)", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access points are not supported for this operation"}, // expect
    {{/*operationName*/"CreateBucket",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 10*/
  {"missing arn type", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("DisableAccessPoints", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: `arn:aws:s3:us-west-2:123456789012:` was not a valid ARN"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 11*/
  {"SDK::Host + access point + Dualstack is an error", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"),
     EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"DualStack cannot be combined with a Host override (PrivateLink)"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 12*/
  {"Access point ARN with FIPS & Dualstack", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 13*/
  {"Access point ARN with Dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.dualstack.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 14*/
  {"vanilla MRAP", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("DisableMultiRegionAccessPoints", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("name", "sigv4a"), EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 15*/
  {"MRAP does not support FIPS", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("DisableMultiRegionAccessPoints", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 16*/
  {"MRAP does not support DualStack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("DisableMultiRegionAccessPoints", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support dual-stack"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 17*/
  {"MRAP does not support S3 Accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("DisableMultiRegionAccessPoints", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 18*/
  {"MRAP explicitly disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("DisableMultiRegionAccessPoints", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: Multi-Region Access Point ARNs are disabled."}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 19*/
  {"Dual-stack endpoint with path-style forced", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucketname"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/bucketname",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucketname"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 20*/
  {"Dual-stack endpoint + SDK::Host is error", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://abc.com"), EpParam("Bucket", "bucketname"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucketname"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 21*/
  {"path style + ARN bucket", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 22*/
  {"implicit path style bucket + dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "99_ab"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/99_ab",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99_ab"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 23*/
  {"implicit path style bucket + dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://abc.com"), EpParam("Bucket", "99_ab"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99_ab"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 24*/
  {"don't allow URL injections in the bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "example.com#"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/example.com%23",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "example.com#"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 25*/
  {"URI encode bucket names in the path", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket%20name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 26*/
  {"scheme is respected", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "99_ab"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/99_ab",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  },
  /*TEST CASE 27*/
  {"scheme is respected (virtual addressing)", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/foo"),
     EpParam("Bucket", "bucketname"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://bucketname.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/foo",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  },
  /*TEST CASE 28*/
  {"path style + implicit private link", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "99_ab"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/99_ab",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99_ab"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 29*/
  {"invalid Endpoint override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "abcde://nota#url"), EpParam("Bucket", "bucketname"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Custom endpoint `abcde://nota#url` was not a valid URI"}, // expect
    {} // operationInput
  },
  /*TEST CASE 30*/
  {"using an IPv4 address forces path style", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://123.123.0.1"), EpParam("Bucket", "bucketname"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.123.0.1/bucketname",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucketname"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 31*/
  {"vanilla access point arn with region mismatch and UseArnRegion=false", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint"), EpParam("UseArnRegion", false),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 32*/
  {"vanilla access point arn with region mismatch and UseArnRegion unset", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 33*/
  {"vanilla access point arn with region mismatch and UseArnRegion=true", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("UseArnRegion", true),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 34*/
  {"subdomains are not allowed in virtual buckets", // documentation
    {EpParam("Bucket", "bucket.name"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/bucket.name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket.name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 35*/
  {"bucket names with 3 characters are allowed in virtual buckets", // documentation
    {EpParam("Bucket", "aaa"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://aaa.s3.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "aaa"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 36*/
  {"bucket names with fewer than 3 characters are not allowed in virtual host", // documentation
    {EpParam("Bucket", "aa"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/aa",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "aa"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 37*/
  {"bucket names with uppercase characters are not allowed in virtual host", // documentation
    {EpParam("Bucket", "BucketName"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/BucketName",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "BucketName"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 38*/
  {"subdomains are allowed in virtual buckets on http endpoints", // documentation
    {EpParam("Endpoint", "http://example.com"), EpParam("Bucket", "bucket.name"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"http://bucket.name.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket.name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 39*/
  {"no region set", // documentation
    {EpParam("Bucket", "bucket-name")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A region must be set when sending requests to S3."}, // expect
    {} // operationInput
  },
  /*TEST CASE 40*/
  {"UseGlobalEndpoints=true, region=us-east-1 uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 41*/
  {"UseGlobalEndpoints=true, region=us-west-2 uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 42*/
  {"UseGlobalEndpoints=true, region=cn-north-1 uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 43*/
  {"UseGlobalEndpoints=true, region=us-east-1, fips=true uses the regional endpoint with fips", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 44*/
  {"UseGlobalEndpoints=true, region=us-east-1, dualstack=true uses the regional endpoint with dualstack", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 45*/
  {"UseGlobalEndpoints=true, region=us-east-1, dualstack and fips uses the regional endpoint with fips/dualstack", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 46*/
  {"UseGlobalEndpoints=true, region=us-east-1 with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 47*/
  {"UseGlobalEndpoints=true, region=us-west-2 with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 48*/
  {"UseGlobalEndpoints=true, region=us-east-1 with accelerate on non bucket case uses the global endpoint and ignores accelerate", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 49*/
  {"aws-global region uses the global endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 50*/
  {"aws-global region with fips uses the regional endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 51*/
  {"aws-global region with dualstack uses the regional endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 52*/
  {"aws-global region with fips and dualstack uses the regional endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 53*/
  {"aws-global region with accelerate on non-bucket case, uses global endpoint and ignores accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 54*/
  {"aws-global region with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"ListBuckets",
        /*clientParams*/{},
        /*operationParams*/{},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 55*/
  {"virtual addressing, aws-global region uses the global endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 56*/
  {"virtual addressing, aws-global region with fips uses the regional fips endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 57*/
  {"virtual addressing, aws-global region with dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 58*/
  {"virtual addressing, aws-global region with fips/dualstack uses the regional fips/dualstack endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 59*/
  {"virtual addressing, aws-global region with accelerate uses the global accelerate endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 60*/
  {"virtual addressing, aws-global region with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 61*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 62*/
  {"virtual addressing, UseGlobalEndpoint and us-west-2 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 63*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and fips uses the regional fips endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 64*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 65*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and accelerate uses the global accelerate endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 66*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region with custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 67*/
  {"ForcePathStyle, aws-global region uses the global endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 68*/
  {"ForcePathStyle, aws-global region with fips is invalid", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 69*/
  {"ForcePathStyle, aws-global region with dualstack uses regional dualstack endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 70*/
  {"ForcePathStyle, aws-global region custom endpoint uses the custom endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 71*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 72*/
  {"ForcePathStyle, UseGlobalEndpoint us-west-2 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 73*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region, dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 74*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region custom endpoint uses the custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 75*/
  {"ARN with aws-global region and  UseArnRegion uses the regional endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("UseArnRegion", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 76*/
  {"cross partition MRAP ARN is an error", // documentation
    {EpParam("Bucket", "arn:aws-cn:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Region", "us-west-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but bucket referred to partition `aws-cn`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 77*/
  {"Endpoint override, accesspoint with HTTP, port", // documentation
    {EpParam("Endpoint", "http://beta.example.com:1234"), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-west-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://myendpoint-123456789012.beta.example.com:1234",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 78*/
  {"vanilla virtual addressing@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 79*/
  {"virtual addressing + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 80*/
  {"accelerate + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.dualstack.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 81*/
  {"accelerate (dualstack=false)@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 82*/
  {"virtual addressing + fips@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 83*/
  {"virtual addressing + dualstack + fips@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 84*/
  {"accelerate + fips = error@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Accelerate cannot be used with FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 85*/
  {"vanilla virtual addressing@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.cn-north-1.amazonaws.com.cn",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 86*/
  {"virtual addressing + dualstack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.cn-north-1.amazonaws.com.cn",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 87*/
  {"accelerate (dualstack=false)@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Accelerate cannot be used in this region"}, // expect
    {} // operationInput
  },
  /*TEST CASE 88*/
  {"virtual addressing + fips@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 89*/
  {"vanilla virtual addressing@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 90*/
  {"virtual addressing + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 91*/
  {"accelerate + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", true), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.dualstack.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 92*/
  {"accelerate (dualstack=false)@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 93*/
  {"virtual addressing + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 94*/
  {"virtual addressing + dualstack + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 95*/
  {"accelerate + fips = error@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Accelerate cannot be used with FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 96*/
  {"vanilla path style@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 97*/
  {"path style + fips@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 98*/
  {"path style + accelerate = error@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 99*/
  {"path style + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 100*/
  {"path style + arn is error@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 101*/
  {"path style + invalid DNS name@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 102*/
  {"no path style + invalid DNS name@us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 103*/
  {"vanilla path style@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 104*/
  {"path style + fips@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 105*/
  {"path style + accelerate = error@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 106*/
  {"path style + dualstack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.cn-north-1.amazonaws.com.cn/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 107*/
  {"path style + arn is error@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 108*/
  {"path style + invalid DNS name@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 109*/
  {"no path style + invalid DNS name@cn-north-1", // documentation
    {EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 110*/
  {"vanilla path style@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 111*/
  {"path style + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with FIPS"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 112*/
  {"path style + accelerate = error@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 113*/
  {"path style + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.af-south-1.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 114*/
  {"path style + arn is error@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 115*/
  {"path style + invalid DNS name@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 116*/
  {"no path style + invalid DNS name@af-south-1", // documentation
    {EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Bucket", "99a_b"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/99a_b",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "99a_b"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 117*/
  {"virtual addressing + private link@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 118*/
  {"path style + private link@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 119*/
  {"SDK::Host + FIPS@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 120*/
  {"SDK::Host + DualStack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 121*/
  {"SDK::HOST + accelerate@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 122*/
  {"SDK::Host + access point ARN@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 123*/
  {"virtual addressing + private link@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 124*/
  {"path style + private link@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 125*/
  {"SDK::Host + FIPS@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 126*/
  {"SDK::Host + DualStack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 127*/
  {"SDK::HOST + accelerate@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Accelerate cannot be used in this region"}, // expect
    {} // operationInput
  },
  /*TEST CASE 128*/
  {"SDK::Host + access point ARN@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 129*/
  {"virtual addressing + private link@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 130*/
  {"path style + private link@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 131*/
  {"SDK::Host + FIPS@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 132*/
  {"SDK::Host + DualStack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 133*/
  {"SDK::HOST + accelerate@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Host override cannot be combined with Dualstack, FIPS, or S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "bucket-name"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 134*/
  {"SDK::Host + access point ARN@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 135*/
  {"vanilla access point arn@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 136*/
  {"access point arn + FIPS@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 137*/
  {"access point arn + accelerate = error@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 138*/
  {"access point arn + FIPS + DualStack@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 139*/
  {"vanilla access point arn@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.cn-north-1.amazonaws.com.cn",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "cn-north-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 140*/
  {"access point arn + FIPS@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 141*/
  {"access point arn + accelerate = error@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 142*/
  {"access point arn + FIPS + DualStack@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 143*/
  {"vanilla access point arn@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 144*/
  {"access point arn + FIPS@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 145*/
  {"access point arn + accelerate = error@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 146*/
  {"access point arn + FIPS + DualStack@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.af-south-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "af-south-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 147*/
  {"S3 outposts vanilla test", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 148*/
  {"S3 outposts custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.amazonaws.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.example.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 149*/
  {"outposts arn with region mismatch and UseArnRegion=false", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 150*/
  {"outposts arn with region mismatch, custom region and UseArnRegion=false", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 151*/
  {"outposts arn with region mismatch and UseArnRegion=true", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myaccesspoint-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 152*/
  {"outposts arn with region mismatch and UseArnRegion unset", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myaccesspoint-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 153*/
  {"outposts arn with partition mismatch and UseArnRegion=true", // documentation
    {EpParam("RequiresAccountId", true), EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("___key", "key"),
     EpParam("Bucket", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN (`arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint`) has `aws-cn`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 154*/
  {"ARN with UseGlobalEndpoint and use-east-1 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-outposts")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
         EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 155*/
  {"S3 outposts does not support dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support Dual-stack"}, // expect
    {} // operationInput
  },
  /*TEST CASE 156*/
  {"S3 outposts does not support fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 157*/
  {"S3 outposts does not support accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support S3 Accelerate"}, // expect
    {} // operationInput
  },
  /*TEST CASE 158*/
  {"validates against subresource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:mybucket:object:foo"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Arn: Outpost Access Point ARN contains sub resources"}, // expect
    {} // operationInput
  },
  /*TEST CASE 159*/
  {"object lambda @us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  },
  /*TEST CASE 160*/
  {"object lambda @us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 161*/
  {"object lambda, colon resource deliminator @us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 162*/
  {"object lambda @us-east-1, client region us-west-2, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 163*/
  {"object lambda @us-east-1, client region s3-external-1, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", true), EpParam("Region", "s3-external-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 164*/
  {"object lambda @us-east-1, client region s3-external-1, useArnRegion=false", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "s3-external-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `s3-external-1` and UseArnRegion is `false`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 165*/
  {"object lambda @us-east-1, client region aws-global, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 166*/
  {"object lambda @us-east-1, client region aws-global, useArnRegion=false", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `aws-global` and UseArnRegion is `false`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 167*/
  {"object lambda @cn-north-1, client region us-west-2 (cross partition), useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN (`arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner`) has `aws-cn`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 168*/
  {"object lambda with dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support Dual-stack"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 169*/
  {"object lambda @us-gov-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-us-gov:s3-object-lambda:us-gov-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-gov-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-gov-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-gov-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  },
  /*TEST CASE 170*/
  {"object lambda @us-gov-east-1, with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-us-gov:s3-object-lambda:us-gov-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-gov-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda-fips.us-gov-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-gov-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  },
  /*TEST CASE 171*/
  {"object lambda @cn-north-1, with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 172*/
  {"object lambda with accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support S3 Accelerate"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 173*/
  {"object lambda with invalid arn - bad service and someresource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:sqs:us-west-2:123456789012:someresource"), EpParam("UseArnRegion", false),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Unrecognized format: arn:aws:sqs:us-west-2:123456789012:someresource (type: someresource)"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:sqs:us-west-2:123456789012:someresource"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 174*/
  {"object lambda with invalid arn - invalid resource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:bucket_name:mybucket"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Object Lambda ARNs only support `accesspoint` arn types, but found: `bucket_name`"}, // expect
    {} // operationInput
  },
  /*TEST CASE 175*/
  {"object lambda with invalid arn - missing region", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda::123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: bucket ARN is missing a region"}, // expect
    {} // operationInput
  },
  /*TEST CASE 176*/
  {"object lambda with invalid arn - missing account-id", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2::accesspoint/mybanner"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Missing account id"}, // expect
    {} // operationInput
  },
  /*TEST CASE 177*/
  {"object lambda with invalid arn - account id contains invalid characters", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123.45678.9012:accesspoint:mybucket"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The account id may only contain a-z, A-Z, 0-9 and `-`. Found: `123.45678.9012`"}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123.45678.9012:accesspoint:mybucket"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 178*/
  {"object lambda with invalid arn - missing access point name", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a resource of the format `accesspoint:<accesspoint name>` but no name was provided"}, // expect
    {} // operationInput
  },
  /*TEST CASE 179*/
  {"object lambda with invalid arn - access point name contains invalid character: *", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:*"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `*`"}, // expect
    {} // operationInput
  },
  /*TEST CASE 180*/
  {"object lambda with invalid arn - access point name contains invalid character: .", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:my.bucket"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `my.bucket`"}, // expect
    {} // operationInput
  },
  /*TEST CASE 181*/
  {"object lambda with invalid arn - access point name contains sub resources", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:mybucket:object:foo"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN may only contain a single resource component after `accesspoint`."}, // expect
    {} // operationInput
  },
  /*TEST CASE 182*/
  {"object lambda with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://my-endpoint.com"), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.my-endpoint.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"GetObject",
        /*clientParams*/{},
        /*operationParams*/{EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("Key", "key")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 183*/
  {"WriteGetObjectResponse @ us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-west-2.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"WriteGetObjectResponse",
        /*clientParams*/{},
        /*operationParams*/{EpParam("RequestToken", "RequestToken"), EpParam("RequestRoute", "RequestRoute")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 184*/
  {"WriteGetObjectResponse with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://my-endpoint.com"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://my-endpoint.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-west-2"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"WriteGetObjectResponse",
        /*clientParams*/{},
        /*operationParams*/{EpParam("RequestToken", "RequestToken"), EpParam("RequestRoute", "RequestRoute")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 185*/
  {"WriteGetObjectResponse @ us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"WriteGetObjectResponse",
        /*clientParams*/{},
        /*operationParams*/{EpParam("RequestToken", "RequestToken"), EpParam("RequestRoute", "RequestRoute")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 186*/
  {"WriteGetObjectResponse with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda-fips.us-east-1.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east-1"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {{/*operationName*/"WriteGetObjectResponse",
        /*clientParams*/{},
        /*operationParams*/{EpParam("RequestToken", "RequestToken"), EpParam("RequestRoute", "RequestRoute")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 187*/
  {"WriteGetObjectResponse with dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support Dual-stack"}, // expect
    {{/*operationName*/"WriteGetObjectResponse",
        /*clientParams*/{},
        /*operationParams*/{EpParam("RequestToken", "RequestToken"), EpParam("RequestRoute", "RequestRoute")},
        /*builtinParams*/{}}} // operationInput
  },
  /*TEST CASE 188*/
  {"WriteGetObjectResponse with accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support S3 Accelerate"}, // expect
    {} // operationInput
  },
  /*TEST CASE 189*/
  {"WriteGetObjectResponse with fips in CN", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"}, // expect
    {} // operationInput
  },
  /*TEST CASE 190*/
  {"WriteGetObjectResponse with invalid partition", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "not a valid DNS name"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."}, // expect
    {} // operationInput
  },
  /*TEST CASE 191*/
  {"WriteGetObjectResponse with an unknown partition", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east.special"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-east.special.amazonaws.com",
       {/*properties*/{"authSchemes", {EpProp("disableDoubleEncoding", true), EpProp("signingRegion", "us-east.special"), EpProp("name", "sigv4"),
                                      EpProp("signingName", "s3-object-lambda")}}},
       {/*headers*/}}, {/*No error*/}}, // expect
    {} // operationInput
  }
};

void ValidateOutcome(const S3ResolveEndpointOutcome& outcome, const S3EndpointProviderEndpointTestCase::Expect& expect)
{
    if(!expect.error.empty())
    {
        ASSERT_FALSE(outcome.IsSuccess()) << "Expected failure with message:\n" << expect.error;
        ASSERT_EQ(outcome.GetError().GetMessage(), expect.error);
    }
    else
    {
        AWS_ASSERT_SUCCESS(outcome);
        ASSERT_EQ(outcome.GetResult().GetURL(), expect.endpoint.url);
        const auto expAuthSchemesIt = expect.endpoint.properties.find("authSchemes");
        if (expAuthSchemesIt != expect.endpoint.properties.end())
        {
            const auto& endpointResultAttrs = outcome.GetResult().GetAttributes();
            ASSERT_TRUE(endpointResultAttrs) << "Expected non-empty EndpointAttributes (authSchemes)";
            for (const auto& expProperty : expAuthSchemesIt->second)
            {
                if (expProperty.GetName() == "name") {
                    ASSERT_TRUE(!endpointResultAttrs->authScheme.GetName().empty());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetName());
                } else if (expProperty.GetName() == "signingName") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningName());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningName().value());
                } else if (expProperty.GetName() == "signingRegion") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegion());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegion().value());
                } else if (expProperty.GetName() == "signingRegionSet") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegionSet());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegionSet().value());
                } else if (expProperty.GetName() == "disableDoubleEncoding") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetDisableDoubleEncoding());
                    ASSERT_EQ(expProperty.GetBoolValueNoCheck(), endpointResultAttrs->authScheme.GetDisableDoubleEncoding().value());
                } else {
                    FAIL() << "Unsupported Auth type property " << expProperty.GetName() << ". Need to update test.";
                }
            }
        }

        EXPECT_EQ(expect.endpoint.headers.empty(), outcome.GetResult().GetHeaders().empty());
        for(const auto& expHeaderVec : expect.endpoint.headers)
        {
            const auto& retHeaderIt = outcome.GetResult().GetHeaders().find(expHeaderVec.first);
            ASSERT_TRUE(retHeaderIt != outcome.GetResult().GetHeaders().end());

            auto retHeaderVec = Aws::Utils::StringUtils::Split(retHeaderIt->second, ';');
            std::sort(retHeaderVec.begin(), retHeaderVec.end());

            auto expHeaderVecSorted = expHeaderVec.second;
            std::sort(expHeaderVecSorted.begin(), expHeaderVecSorted.end());

            ASSERT_EQ(expHeaderVecSorted, retHeaderVec);
        }
    }
}

TEST_P(S3EndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const S3EndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<S3EndpointProvider> endpointProvider = Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize S3EndpointProvider";

    EndpointParameters endpointParameters;
    for(const auto& param : TEST_CASE.params)
    {
        endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
    }
    auto resolvedEndpointOutcome = endpointProvider->ResolveEndpoint(endpointParameters);
    ValidateOutcome(resolvedEndpointOutcome, TEST_CASE.expect);

#if 0 // temporarily disabled
    for(const auto& operation : TEST_CASE.operationInput)
    {
        /*
         * Most specific to least specific value locations:
            staticContextParams
            contextParam
            clientContextParams
            Built-In Bindings
            Built-in binding default values
         */
        const Aws::Vector<std::reference_wrapper<const S3EndpointProviderEndpointTestCase::OperationParamsFromTest>>
                operationInputParams = {std::cref(operation.builtinParams), std::cref(operation.clientParams), std::cref(operation.operationParams)};

        for(const auto& paramSource : operationInputParams)
        {
            for(const auto& param : paramSource.get())
            {
                endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
            }
        }
        auto resolvedEndpointOutcomePerOperation = endpointProvider->ResolveEndpoint(endpointParameters);
        ValidateOutcome(resolvedEndpointOutcomePerOperation, TEST_CASE.expect);
    }
#endif
}

INSTANTIATE_TEST_SUITE_P(EndpointTestsFromModel,
                         S3EndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
