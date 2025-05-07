/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>

using InputAndOutputWithHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithStringHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-String", R"(Hello)"}, {"X-StringList", R"(a, b, c)"}, {"X-StringSet", R"(a, b, c)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithQuotedStringHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-StringList", R"("b,c", "\"def\"", a)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithNumericHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Byte", R"(1)"}, {"X-Double", R"(1.1)"}, {"X-Float", R"(1.1)"}, {"X-Integer", R"(123)"}, {"X-IntegerList", R"(1, 2, 3)"}, {"X-Long", R"(123)"}, {"X-Short", R"(123)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithBooleanHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Boolean1", R"(true)"}, {"X-Boolean2", R"(false)"}, {"X-BooleanList", R"(true, false, true)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithTimestampHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-TimestampList", R"(Mon, 16 Dec 2019 23:48:18 GMT, Mon, 16 Dec 2019 23:48:18 GMT)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithEnumHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Enum", R"(Foo)"}, {"X-EnumList", R"(Foo, Bar, Baz)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithIntEnumHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-IntegerEnum", R"(1)"}, {"X-IntegerEnumList", R"(1, 2, 3)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNaNFloatHeaderOutputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(NaN)"}, {"X-Float", R"(NaN)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsInfinityFloatHeaderOutputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(Infinity)"}, {"X-Float", R"(Infinity)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNegativeInfinityFloatHeaderOutputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(-Infinity)"}, {"X-Float", R"(-Infinity)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();

  ValidateRequestSent();
}
