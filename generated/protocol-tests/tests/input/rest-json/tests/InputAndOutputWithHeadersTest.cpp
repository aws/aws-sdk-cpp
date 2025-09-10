/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/InputAndOutputWithHeadersRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using InputAndOutputWithHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithStringHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderString(R"(Hello)");
  request.SetHeaderStringList({R"(a)", R"(b)", R"(c)"});
  request.SetHeaderStringSet({R"(a)", R"(b)", R"(c)"});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-String", R"(Hello)"}, {"X-StringList", R"(a, b, c)"}, {"X-StringSet", R"(a, b, c)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithQuotedStringHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderStringList({R"(b,c)", R"("def")", R"(a)"});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-StringList", R"("b,c", "\"def\"", a)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithNumericHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderByte(1);
  request.SetHeaderShort(123);
  request.SetHeaderInteger(123);
  request.SetHeaderLong(123);
  request.SetHeaderFloat(1.1);
  request.SetHeaderDouble(1.1);
  request.SetHeaderIntegerList({1, 2, 3});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Byte", R"(1)"},      {"X-Double", R"(1.1)"},          {"X-Float", R"(1.1)"},
                        {"X-Integer", R"(123)"}, {"X-IntegerList", R"(1, 2, 3)"}, {"X-Long", R"(123)"},
                        {"X-Short", R"(123)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithBooleanHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderTrueBool(true);
  request.SetHeaderFalseBool(false);
  request.SetHeaderBooleanList({true, false, true});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Boolean1", R"(true)"}, {"X-Boolean2", R"(false)"}, {"X-BooleanList", R"(true, false, true)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithTimestampHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderTimestampList(
      {Aws::Utils::DateTime(static_cast<int64_t>(1576540098)), Aws::Utils::DateTime(static_cast<int64_t>(1576540098))});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-TimestampList", R"(Mon, 16 Dec 2019 23:48:18 GMT, Mon, 16 Dec 2019 23:48:18 GMT)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithEnumHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetHeaderEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(Bar)e"),
                             FooEnumMapper::GetFooEnumForName(R"e(Baz)e")});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Enum", R"(Foo)"}, {"X-EnumList", R"(Foo, Bar, Baz)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonInputAndOutputWithIntEnumHeaders) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderIntegerEnum(1);
  request.SetHeaderIntegerEnumList({1, 2, 3});

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-IntegerEnum", R"(1)"}, {"X-IntegerEnumList", R"(1, 2, 3)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNaNFloatHeaderInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetHeaderDouble(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Double", R"(NaN)"}, {"X-Float", R"(NaN)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsInfinityFloatHeaderInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(std::numeric_limits<double>::infinity());
  request.SetHeaderDouble(std::numeric_limits<double>::infinity());

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Double", R"(Infinity)"}, {"X-Float", R"(Infinity)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestJsonSupportsNegativeInfinityFloatHeaderInputs) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(-std::numeric_limits<double>::infinity());
  request.SetHeaderDouble(-std::numeric_limits<double>::infinity());

  auto outcome = client.InputAndOutputWithHeaders(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/InputAndOutputWithHeaders";
  expectedRq.headers = {{"X-Double", R"(-Infinity)"}, {"X-Float", R"(-Infinity)"}};
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
