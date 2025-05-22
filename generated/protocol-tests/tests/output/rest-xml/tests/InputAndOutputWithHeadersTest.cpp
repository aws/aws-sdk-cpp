﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/InputAndOutputWithHeadersRequest.h>

using InputAndOutputWithHeaders = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithStringHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-String", R"(Hello)"}, {"X-StringList", R"(a, b, c)"}, {"X-StringSet", R"(a, b, c)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerString":"Hello","headerStringList":["a","b","c"],"headerStringSet":["a","b","c"]} )" */
  EXPECT_EQ(R"(Hello)", result.GetHeaderString());
  const Aws::Vector<Aws::String>& resultHeaderStringListItem = result.GetHeaderStringList();
  EXPECT_EQ(3U, resultHeaderStringListItem.size());
  EXPECT_EQ(R"(a)", resultHeaderStringListItem.at(0));
  EXPECT_EQ(R"(b)", resultHeaderStringListItem.at(1));
  EXPECT_EQ(R"(c)", resultHeaderStringListItem.at(2));
  const Aws::Vector<Aws::String>& resultHeaderStringSetItem = result.GetHeaderStringSet();
  EXPECT_EQ(3U, resultHeaderStringSetItem.size());
  EXPECT_EQ(R"(a)", resultHeaderStringSetItem.at(0));
  EXPECT_EQ(R"(b)", resultHeaderStringSetItem.at(1));
  EXPECT_EQ(R"(c)", resultHeaderStringSetItem.at(2));
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithNumericHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Byte", R"(1)"}, {"X-Double", R"(1.1)"}, {"X-Float", R"(1.1)"}, {"X-Integer", R"(123)"}, {"X-IntegerList", R"(1, 2, 3)"}, {"X-Long", R"(123)"}, {"X-Short", R"(123)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerByte":1,"headerShort":123,"headerInteger":123,"headerLong":123,"headerFloat":1.1,"headerDouble":1.1,"headerIntegerList":[1,2,3]} )" */
  EXPECT_EQ(1, result.GetHeaderByte());
  EXPECT_EQ(123, result.GetHeaderShort());
  EXPECT_EQ(123, result.GetHeaderInteger());
  EXPECT_EQ(123, result.GetHeaderLong());
  EXPECT_EQ(1.1, result.GetHeaderFloat());
  EXPECT_EQ(1.1, result.GetHeaderDouble());
  const Aws::Vector<int>& resultHeaderIntegerListItem = result.GetHeaderIntegerList();
  EXPECT_EQ(3U, resultHeaderIntegerListItem.size());
  EXPECT_EQ(1, resultHeaderIntegerListItem.at(0));
  EXPECT_EQ(2, resultHeaderIntegerListItem.at(1));
  EXPECT_EQ(3, resultHeaderIntegerListItem.at(2));
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithBooleanHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Boolean1", R"(true)"}, {"X-Boolean2", R"(false)"}, {"X-BooleanList", R"(true, false, true)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerTrueBool":true,"headerFalseBool":false,"headerBooleanList":[true,false,true]} )" */
  EXPECT_EQ(true, result.GetHeaderTrueBool());
  EXPECT_EQ(false, result.GetHeaderFalseBool());
  const Aws::Vector<bool>& resultHeaderBooleanListItem = result.GetHeaderBooleanList();
  EXPECT_EQ(3U, resultHeaderBooleanListItem.size());
  EXPECT_EQ(true, resultHeaderBooleanListItem.at(0));
  EXPECT_EQ(false, resultHeaderBooleanListItem.at(1));
  EXPECT_EQ(true, resultHeaderBooleanListItem.at(2));
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithTimestampHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-TimestampList", R"(Mon, 16 Dec 2019 23:48:18 GMT, Mon, 16 Dec 2019 23:48:18 GMT)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerTimestampList":[1576540098,1576540098]} )" */
  const Aws::Vector<Aws::Utils::DateTime>& resultHeaderTimestampListItem = result.GetHeaderTimestampList();
  EXPECT_EQ(2U, resultHeaderTimestampListItem.size());
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), resultHeaderTimestampListItem.at(0));
  EXPECT_EQ(Aws::Utils::DateTime(1576540098L), resultHeaderTimestampListItem.at(1));
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithEnumHeaders) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Enum", R"(Foo)"}, {"X-EnumList", R"(Foo, Bar, Baz)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerEnum":"Foo","headerEnumList":["Foo","Bar","Baz"]} )" */
  EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), result.GetHeaderEnum());
  const Aws::Vector<FooEnum>& resultHeaderEnumListItem = result.GetHeaderEnumList();
  EXPECT_EQ(3U, resultHeaderEnumListItem.size());
  EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultHeaderEnumListItem.at(0));
  EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Bar)e"), resultHeaderEnumListItem.at(1));
  EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Baz)e"), resultHeaderEnumListItem.at(2));
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNaNFloatHeaderOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(NaN)"}, {"X-Float", R"(NaN)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerFloat":"NaN","headerDouble":"NaN"} )" */
  EXPECT_EQ(std::numeric_limits<double>::quiet_NaN(), result.GetHeaderFloat());
  EXPECT_EQ(std::numeric_limits<double>::quiet_NaN(), result.GetHeaderDouble());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsInfinityFloatHeaderOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(Infinity)"}, {"X-Float", R"(Infinity)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerFloat":"Infinity","headerDouble":"Infinity"} )" */
  EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetHeaderFloat());
  EXPECT_EQ(std::numeric_limits<double>::infinity(), result.GetHeaderDouble());
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNegativeInfinityFloatHeaderOutputs) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"X-Double", R"(-Infinity)"}, {"X-Float", R"(-Infinity)"}};
  SetMockResponse(mockRs);

  InputAndOutputWithHeadersRequest request;

  auto outcome = client.InputAndOutputWithHeaders(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const InputAndOutputWithHeadersResult& result = outcome.GetResult();
  /* expectedResult = R"( {"headerFloat":"-Infinity","headerDouble":"-Infinity"} )" */
  EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetHeaderFloat());
  EXPECT_EQ(-std::numeric_limits<double>::infinity(), result.GetHeaderDouble());
}
