/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/AllQueryStringTypesRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using AllQueryStringTypes = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonAllQueryStringTypes) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryString(R"(Hello there)");
  request.SetQueryStringList({R"(a)", R"(b)", R"(c)"});
  request.SetQueryStringSet({R"(a)", R"(b)", R"(c)"});
  request.SetQueryByte(1);
  request.SetQueryShort(2);
  request.SetQueryInteger(3);
  request.SetQueryIntegerList({1, 2, 3});
  request.SetQueryIntegerSet({1, 2, 3});
  request.SetQueryLong(4);
  request.SetQueryFloat(1.1);
  request.SetQueryDouble(1.1);
  request.SetQueryDoubleList({1.1, 2.1, 3.1});
  request.SetQueryBoolean(true);
  request.SetQueryBooleanList({true, false, true});
  request.SetQueryTimestamp(Aws::Utils::DateTime(static_cast<int64_t>(1)));
  request.SetQueryTimestampList({Aws::Utils::DateTime(static_cast<int64_t>(1)), Aws::Utils::DateTime(static_cast<int64_t>(2)),
                                 Aws::Utils::DateTime(static_cast<int64_t>(3))});
  request.SetQueryEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetQueryEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(Baz)e"),
                            FooEnumMapper::GetFooEnumForName(R"e(Bar)e")});
  request.SetQueryIntegerEnum(1);
  request.SetQueryIntegerEnumList({1, 2, 3});
  request.SetQueryParamsMapOfStringList(
      {{"String", {R"(Hello there)"}},
       {"StringList", {R"(a)", R"(b)", R"(c)"}},
       {"StringSet", {R"(a)", R"(b)", R"(c)"}},
       {"Byte", {R"(1)"}},
       {"Short", {R"(2)"}},
       {"Integer", {R"(3)"}},
       {"IntegerList", {R"(1)", R"(2)", R"(3)"}},
       {"IntegerSet", {R"(1)", R"(2)", R"(3)"}},
       {"Long", {R"(4)"}},
       {"Float", {R"(1.1)"}},
       {"Double", {R"(1.1)"}},
       {"DoubleList", {R"(1.1)", R"(2.1)", R"(3.1)"}},
       {"Boolean", {R"(true)"}},
       {"BooleanList", {R"(true)", R"(false)", R"(true)"}},
       {"Timestamp", {R"(1970-01-01T00:00:01Z)"}},
       {"TimestampList", {R"(1970-01-01T00:00:01Z)", R"(1970-01-01T00:00:02Z)", R"(1970-01-01T00:00:03Z)"}},
       {"Enum", {R"(Foo)"}},
       {"EnumList", {R"(Foo)", R"(Baz)", R"(Bar)"}},
       {"IntegerEnum", {R"(1)"}},
       {"IntegerEnumList", {R"(1)", R"(2)", R"(3)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri =
      "/AllQueryStringTypesInput?String=Hello%20there&StringList=a&StringList=b&StringList=c&StringSet=a&StringSet=b&StringSet=c&Byte=1&"
      "Short=2&Integer=3&IntegerList=1&IntegerList=2&IntegerList=3&IntegerSet=1&IntegerSet=2&IntegerSet=3&Long=4&Float=1.1&Double=1.1&"
      "DoubleList=1.1&DoubleList=2.1&DoubleList=3.1&Boolean=true&BooleanList=true&BooleanList=false&BooleanList=true&Timestamp=1970-01-"
      "01T00%3A00%3A01Z&TimestampList=1970-01-01T00%3A00%3A01Z&TimestampList=1970-01-01T00%3A00%3A02Z&TimestampList=1970-01-01T00%3A00%"
      "3A03Z&Enum=Foo&EnumList=Foo&EnumList=Baz&EnumList=Bar&IntegerEnum=1&IntegerEnumList=1&IntegerEnumList=2&IntegerEnumList=3";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonQueryStringMap) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryParamsMapOfStringList({{"QueryParamsStringKeyA", {R"(Foo)"}}, {"QueryParamsStringKeyB", {R"(Bar)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?QueryParamsStringKeyA=Foo&QueryParamsStringKeyB=Bar";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonQueryStringEscaping) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryString(R"( %:/?#[]@!$&'()*+,;=😹)");
  request.SetQueryParamsMapOfStringList({{"String", {R"( %:/?#[]@!$&'()*+,;=😹)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?String=%20%25%3A%2F%3F%23%5B%5D%40%21%24%26%27%28%29%2A%2B%2C%3B%3D%F0%9F%98%B9";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsNaNFloatQueryValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetQueryDouble(std::numeric_limits<double>::quiet_NaN());
  request.SetQueryParamsMapOfStringList({{"Float", {R"(NaN)"}}, {"Double", {R"(NaN)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?Float=NaN&Double=NaN";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsInfinityFloatQueryValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::infinity());
  request.SetQueryDouble(std::numeric_limits<double>::infinity());
  request.SetQueryParamsMapOfStringList({{"Float", {R"(Infinity)"}}, {"Double", {R"(Infinity)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?Float=Infinity&Double=Infinity";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsNegativeInfinityFloatQueryValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryFloat(-std::numeric_limits<double>::infinity());
  request.SetQueryDouble(-std::numeric_limits<double>::infinity());
  request.SetQueryParamsMapOfStringList({{"Float", {R"(-Infinity)"}}, {"Double", {R"(-Infinity)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?Float=-Infinity&Double=-Infinity";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonZeroAndFalseQueryValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  AllQueryStringTypesRequest request;
  request.SetQueryInteger(0);
  request.SetQueryBoolean(false);
  request.SetQueryParamsMapOfStringList({{"Integer", {R"(0)"}}, {"Boolean", {R"(false)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "GET";
  expectedRq.uri = "/AllQueryStringTypesInput?Integer=0&Boolean=false";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
