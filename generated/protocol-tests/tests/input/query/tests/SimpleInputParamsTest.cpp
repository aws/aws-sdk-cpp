/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/SimpleInputParamsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using SimpleInputParams = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStrings) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFoo(R"(val1)");
  request.SetBar(R"(val2)");

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGb289dmFsMSZCYXI9dmFsMg==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStringAndBooleanTrue) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFoo(R"(val1)");
  request.SetBaz(true);

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGb289dmFsMSZCYXo9dHJ1ZQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStringsAndBooleanFalse) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetBaz(false);

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZCYXo9ZmFsc2U=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsInteger) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetBam(10);

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZCYW09MTA=";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsFloat) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetBoo(10.8);

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZCb289MTAuOA==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsBlob) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetQux(Aws::String(R"(value)"));

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZRdXg9ZG1Gc2RXVSUzRA==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QueryEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFooEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGb29FbnVtPUZvbw==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, QueryIntEnums) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetIntegerEnum(1);

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZJbnRlZ2VyRW51bT0x";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsNaNFloatInputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetBoo(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGbG9hdFZhbHVlPU5hTiZCb289TmFO";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsInfinityFloatInputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetBoo(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGbG9hdFZhbHVlPUluZmluaXR5JkJvbz1JbmZpbml0eQ==";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsNegativeInfinityFloatInputs) {
  QueryProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  SimpleInputParamsRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetBoo(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleInputParams(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "QWN0aW9uPVNpbXBsZUlucHV0UGFyYW1zJlZlcnNpb249MjAyMC0wMS0wOCZGbG9hdFZhbHVlPS1JbmZpbml0eSZCb289LUluZmluaXR5";
  expectedRq.uri = "/";
  expectedRq.headers = {{"Content-Type", R"(application/x-www-form-urlencoded)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
