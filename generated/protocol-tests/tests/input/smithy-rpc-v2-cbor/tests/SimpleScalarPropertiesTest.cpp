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

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body =
      "v2lieXRlVmFsdWUFa2RvdWJsZVZhbHVl+z/"
      "+OVgQYk3TcWZhbHNlQm9vbGVhblZhbHVl9GpmbG9hdFZhbHVl+"
      "kD0AABsaW50ZWdlclZhbHVlGQEAaWxvbmdWYWx1ZRkmkWpzaG9ydFZhbHVlGSaqa3N0cmluZ1ZhbHVlZnNpbXBsZXB0cnVlQm9vbGVhblZhbHVl9WlibG9iVmFsdWVDZm9v/"
      "w==";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;
  request.SetByteValue(5);
  request.SetDoubleValue(1.889);
  request.SetFalseBooleanValue(false);
  request.SetFloatValue(7.625);
  request.SetIntegerValue(256);
  request.SetLongValue(9873);
  request.SetShortValue(9898);
  request.SetStringValue(R"(simple)");
  request.SetTrueBooleanValue(true);
  request.SetBlobValue(Aws::String(R"(foo)"));

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "v2lieXRlVmFsdWUFa2RvdWJsZVZhbHVl+z/"
      "+OVgQYk3TcWZhbHNlQm9vbGVhblZhbHVl9GpmbG9hdFZhbHVl+"
      "kD0AABsaW50ZWdlclZhbHVlGQEAaWxvbmdWYWx1ZRkmkWpzaG9ydFZhbHVlGSaqa3N0cmluZ1ZhbHVlZnNpbXBsZXB0cnVlQm9vbGVhblZhbHVl9WlibG9iVmFsdWVDZm9v/"
      "w==";
  expectedRq.uri = "/service/RpcV2Protocol/operation/SimpleScalarProperties";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
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

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborClientDoesntSerializeNullStructureValues) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v/8=";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v/8=";
  expectedRq.uri = "/service/RpcV2Protocol/operation/SimpleScalarProperties";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringValue":null} )" */
    EXPECT_EQ("", result.GetStringValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsNaNFloatInputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v2tkb3VibGVWYWx1Zft/+AAAAAAAAGpmbG9hdFZhbHVl+n/AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;
  request.SetDoubleValue(std::numeric_limits<double>::quiet_NaN());
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v2tkb3VibGVWYWx1Zft/+AAAAAAAAGpmbG9hdFZhbHVl+n/AAAD/";
  expectedRq.uri = "/service/RpcV2Protocol/operation/SimpleScalarProperties";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"NaN","floatValue":"NaN"} )" */
    EXPECT_TRUE(std::isnan(result.GetDoubleValue()));
    EXPECT_TRUE(std::isnan(result.GetFloatValue()));
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsInfinityFloatInputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v2tkb3VibGVWYWx1Zft/8AAAAAAAAGpmbG9hdFZhbHVl+n+AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;
  request.SetDoubleValue(std::numeric_limits<double>::infinity());
  request.SetFloatValue(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v2tkb3VibGVWYWx1Zft/8AAAAAAAAGpmbG9hdFZhbHVl+n+AAAD/";
  expectedRq.uri = "/service/RpcV2Protocol/operation/SimpleScalarProperties";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"Infinity","floatValue":"Infinity"} )" */
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetDoubleValue());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetFloatValue());
  });
}

AWS_PROTOCOL_TEST(SimpleScalarProperties, RpcV2CborSupportsNegativeInfinityFloatInputs) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v2tkb3VibGVWYWx1Zfv/8AAAAAAAAGpmbG9hdFZhbHVl+v+AAAD/";
  SetMockResponse(mockRs);

  SimpleScalarPropertiesRequest request;
  request.SetDoubleValue(-std::numeric_limits<double>::infinity());
  request.SetFloatValue(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleScalarProperties(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v2tkb3VibGVWYWx1Zfv/8AAAAAAAAGpmbG9hdFZhbHVl+v+AAAD/";
  expectedRq.uri = "/service/RpcV2Protocol/operation/SimpleScalarProperties";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const SimpleScalarPropertiesResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"doubleValue":"-Infinity","floatValue":"-Infinity"} )" */
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetDoubleValue());
    EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetFloatValue());
  });
}
