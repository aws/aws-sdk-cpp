/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleScalarProperties = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSimpleScalarProperties) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body =
      "v3B0cnVlQm9vbGVhblZhbHVl9XFmYWxzZUJvb2xlYW5WYWx1ZfRpYnl0ZVZhbHVlBWtkb3VibGVWYWx1Zfs//"
      "jlYEGJN02pmbG9hdFZhbHVl+kD0AABsaW50ZWdlclZhbHVlGQEAanNob3J0VmFsdWUZJqprc3RyaW5nVmFsdWVmc2ltcGxlaWJsb2JWYWx1ZUNmb2//";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"trueBooleanValue":true,"falseBooleanValue":false,"byteValue":5,"doubleValue":1.889,"floatValue":7.625,"integerValue":256,"shortValue":9898,"stringValue":"simple","blobValue":"foo"}
     * )" */
    EXPECT_EQ(true, result.GetTrueBooleanValue());
    EXPECT_EQ(false, result.GetFalseBooleanValue());
    EXPECT_EQ(5, result.GetByteValue());
    EXPECT_EQ(1.889, result.GetDoubleValue());
    EXPECT_EQ(7.625, result.GetFloatValue());
    EXPECT_EQ(256, result.GetIntegerValue());
    EXPECT_EQ(9898, result.GetShortValue());
    EXPECT_EQ(R"(simple)", result.GetStringValue());
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(foo)"), result.GetBlobValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSimpleScalarPropertiesUsingDefiniteLength) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body =
      "qXB0cnVlQm9vbGVhblZhbHVl9XFmYWxzZUJvb2xlYW5WYWx1ZfRpYnl0ZVZhbHVlBWtkb3VibGVWYWx1Zfs//"
      "jlYEGJN02pmbG9hdFZhbHVl+kD0AABsaW50ZWdlclZhbHVlGQEAanNob3J0VmFsdWUZJqprc3RyaW5nVmFsdWVmc2ltcGxlaWJsb2JWYWx1ZUNmb28=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"trueBooleanValue":true,"falseBooleanValue":false,"byteValue":5,"doubleValue":1.889,"floatValue":7.625,"integerValue":256,"shortValue":9898,"stringValue":"simple","blobValue":"foo"}
     * )" */
    EXPECT_EQ(true, result.GetTrueBooleanValue());
    EXPECT_EQ(false, result.GetFalseBooleanValue());
    EXPECT_EQ(5, result.GetByteValue());
    EXPECT_EQ(1.889, result.GetDoubleValue());
    EXPECT_EQ(7.625, result.GetFloatValue());
    EXPECT_EQ(256, result.GetIntegerValue());
    EXPECT_EQ(9898, result.GetShortValue());
    EXPECT_EQ(R"(simple)", result.GetStringValue());
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(foo)"), result.GetBlobValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborClientDoesntDeserializeNullStructureValues) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2tzdHJpbmdWYWx1Zfb/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  ValidateRequestSent([](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {} )" */
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsNaNFloatOutputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2tkb3VibGVWYWx1Zft/+AAAAAAAAGpmbG9hdFZhbHVl+n/AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"NaN","floatValue":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetDoubleValue()));
    EXPECT_TRUE(std::isnan(result.GetFloatValue()));
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsInfinityFloatOutputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2tkb3VibGVWYWx1Zft/8AAAAAAAAGpmbG9hdFZhbHVl+n+AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"Infinity","floatValue":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsNegativeInfinityFloatOutputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2tkb3VibGVWYWx1Zfv/8AAAAAAAAGpmbG9hdFZhbHVl+v+AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"-Infinity","floatValue":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsUpcastingDataOnDeserialize) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body = "v2tkb3VibGVWYWx1Zfk+AGpmbG9hdFZhbHVl+UegbGludGVnZXJWYWx1ZRg4aWxvbmdWYWx1ZRkBAGpzaG9ydFZhbHVlCv8=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":1.5,"floatValue":7.625,"integerValue":56,"longValue":256,"shortValue":10} )" */
    EXPECT_EQ(1.5, result.GetDoubleValue());
    EXPECT_EQ(7.625, result.GetFloatValue());
    EXPECT_EQ(56, result.GetIntegerValue());
    EXPECT_EQ(256, result.GetLongValue());
    EXPECT_EQ(10, result.GetShortValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborExtraFieldsInTheBodyShouldBeSkippedByClients) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  mockRs.body =
      "v2lieXRlVmFsdWUFa2RvdWJsZVZhbHVl+z/+OVgQYk3TcWZhbHNlQm9vbGVhblZhbHVl9GpmbG9hdFZhbHVl+kD0AABrZXh0cmFPYmplY3S/"
      "c2luZGVmaW5pdGVMZW5ndGhNYXC/a3dpdGhBbkFycmF5nwECA///"
      "cWRlZmluaXRlTGVuZ3RoTWFwo3J3aXRoQURlZmluaXRlQXJyYXmDAQIDeB1hbmRTb21lSW5kZWZpbml0ZUxlbmd0aFN0cmluZ3gfdGhhdCBoYXMsIGJlZW4gY2h1bmtlZCBv"
      "biBjb21tYWxub3JtYWxTdHJpbmdjZm9vanNob3J0VmFsdWUZJw9uc29tZU90aGVyRmllbGR2dGhpcyBzaG91bGQgYmUgc2tpcHBlZP9saW50ZWdlclZhbHVlGQEAaWxvbmdW"
      "YWx1ZRkmkWpzaG9ydFZhbHVlGSaqa3N0cmluZ1ZhbHVlZnNpbXBsZXB0cnVlQm9vbGVhblZhbHVl9WlibG9iVmFsdWVDZm9v/w==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent([&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"byteValue":5,"doubleValue":1.889,"falseBooleanValue":false,"floatValue":7.625,"integerValue":256,"longValue":9873,"shortValue":9898,"stringValue":"simple","trueBooleanValue":true,"blobValue":"foo"}
     * )" */
    EXPECT_EQ(5, result.GetByteValue());
    EXPECT_EQ(1.889, result.GetDoubleValue());
    EXPECT_EQ(false, result.GetFalseBooleanValue());
    EXPECT_EQ(7.625, result.GetFloatValue());
    EXPECT_EQ(256, result.GetIntegerValue());
    EXPECT_EQ(9873, result.GetLongValue());
    EXPECT_EQ(9898, result.GetShortValue());
    EXPECT_EQ(R"(simple)", result.GetStringValue());
    EXPECT_EQ(true, result.GetTrueBooleanValue());
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(foo)"), result.GetBlobValue());
  });
}
