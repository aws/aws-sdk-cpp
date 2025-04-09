/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/AllQueryStringTypesRequest.h>

using AllQueryStringTypes = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonAllQueryStringTypes) {
  RestJsonProtocolClient client;
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
  request.SetQueryTimestamp(Aws::Utils::DateTime(1));
  request.SetQueryTimestampList({Aws::Utils::DateTime(1), Aws::Utils::DateTime(2), Aws::Utils::DateTime(3)});
  request.SetQueryEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetQueryEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(Baz)e"), FooEnumMapper::GetFooEnumForName(R"e(Bar)e")});
  request.SetQueryIntegerEnum(1);
  request.SetQueryIntegerEnumList({1, 2, 3});
  request.SetQueryParamsMapOfStringList({{"String",  {R"(Hello there)"}}, {"StringList",  {R"(a)", R"(b)", R"(c)"}}, {"StringSet",  {R"(a)", R"(b)", R"(c)"}}, {"Byte",  {R"(1)"}}, {"Short",  {R"(2)"}}, {"Integer",  {R"(3)"}}, {"IntegerList",  {R"(1)", R"(2)", R"(3)"}}, {"IntegerSet",  {R"(1)", R"(2)", R"(3)"}}, {"Long",  {R"(4)"}}, {"Float",  {R"(1.1)"}}, {"Double",  {R"(1.1)"}}, {"DoubleList",  {R"(1.1)", R"(2.1)", R"(3.1)"}}, {"Boolean",  {R"(true)"}}, {"BooleanList",  {R"(true)", R"(false)", R"(true)"}}, {"Timestamp",  {R"(1970-01-01T00:00:01Z)"}}, {"TimestampList",  {R"(1970-01-01T00:00:01Z)", R"(1970-01-01T00:00:02Z)", R"(1970-01-01T00:00:03Z)"}}, {"Enum",  {R"(Foo)"}}, {"EnumList",  {R"(Foo)", R"(Baz)", R"(Bar)"}}, {"IntegerEnum",  {R"(1)"}}, {"IntegerEnumList",  {R"(1)", R"(2)", R"(3)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonQueryStringMap) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryParamsMapOfStringList({{"QueryParamsStringKeyA",  {R"(Foo)"}}, {"QueryParamsStringKeyB",  {R"(Bar)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonQueryStringEscaping) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryString(R"( %:/?#[]@!$&'()*+,;=😹)");
  request.SetQueryParamsMapOfStringList({{"String",  {R"( %:/?#[]@!$&'()*+,;=😹)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsNaNFloatQueryValues) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetQueryDouble(std::numeric_limits<double>::quiet_NaN());
  request.SetQueryParamsMapOfStringList({{"Float",  {R"(NaN)"}}, {"Double",  {R"(NaN)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsInfinityFloatQueryValues) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::infinity());
  request.SetQueryDouble(std::numeric_limits<double>::infinity());
  request.SetQueryParamsMapOfStringList({{"Float",  {R"(Infinity)"}}, {"Double",  {R"(Infinity)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonSupportsNegativeInfinityFloatQueryValues) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(-std::numeric_limits<double>::infinity());
  request.SetQueryDouble(-std::numeric_limits<double>::infinity());
  request.SetQueryParamsMapOfStringList({{"Float",  {R"(-Infinity)"}}, {"Double",  {R"(-Infinity)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestJsonZeroAndFalseQueryValues) {
  RestJsonProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryInteger(0);
  request.SetQueryBoolean(false);
  request.SetQueryParamsMapOfStringList({{"Integer",  {R"(0)"}}, {"Boolean",  {R"(false)"}}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}
