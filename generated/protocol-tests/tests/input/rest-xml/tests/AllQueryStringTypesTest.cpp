/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/AllQueryStringTypesRequest.h>

using AllQueryStringTypes = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(AllQueryStringTypes, AllQueryStringTypes) {
  RestXmlProtocolClient client;
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
  request.SetQueryIntegerEnumList({1, 2});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlQueryStringMap) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryParamsMapOfStrings({{"QueryParamsStringKeyA",  R"(Foo)"}, {"QueryParamsStringKeyB",  R"(Bar)"}});

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlQueryStringEscaping) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryString(R"( %:/?#[]@!$&'()*+,;=😹)");

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlSupportsNaNFloatQueryValues) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetQueryDouble(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlSupportsInfinityFloatQueryValues) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(std::numeric_limits<double>::infinity());
  request.SetQueryDouble(std::numeric_limits<double>::infinity());

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlSupportsNegativeInfinityFloatQueryValues) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryFloat(-std::numeric_limits<double>::infinity());
  request.SetQueryDouble(-std::numeric_limits<double>::infinity());

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(AllQueryStringTypes, RestXmlZeroAndFalseQueryValues) {
  RestXmlProtocolClient client;
  AllQueryStringTypesRequest request;
  request.SetQueryInteger(0);
  request.SetQueryBoolean(false);

  auto outcome = client.AllQueryStringTypes(request);
  AWS_ASSERT_SUCCESS(outcome);
}
