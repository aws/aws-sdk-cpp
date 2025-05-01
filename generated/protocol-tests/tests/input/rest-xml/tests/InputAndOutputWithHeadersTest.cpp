/**
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
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderString(R"(Hello)");
  request.SetHeaderStringList({R"(a)", R"(b)", R"(c)"});
  request.SetHeaderStringSet({R"(a)", R"(b)", R"(c)"});

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithNumericHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderByte(1);
  request.SetHeaderShort(123);
  request.SetHeaderInteger(123);
  request.SetHeaderLong(123);
  request.SetHeaderFloat(1.1);
  request.SetHeaderDouble(1.1);
  request.SetHeaderIntegerList({1, 2, 3});

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithBooleanHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderTrueBool(true);
  request.SetHeaderFalseBool(false);
  request.SetHeaderBooleanList({true, false, true});

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithTimestampHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderTimestampList({Aws::Utils::DateTime(1576540098L), Aws::Utils::DateTime(1576540098L)});

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, InputAndOutputWithEnumHeaders) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));
  request.SetHeaderEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(Bar)e"), FooEnumMapper::GetFooEnumForName(R"e(Baz)e")});

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNaNFloatHeaderInputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(std::numeric_limits<double>::quiet_NaN());
  request.SetHeaderDouble(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsInfinityFloatHeaderInputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(std::numeric_limits<double>::infinity());
  request.SetHeaderDouble(std::numeric_limits<double>::infinity());

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(InputAndOutputWithHeaders, RestXmlSupportsNegativeInfinityFloatHeaderInputs) {
  RestXmlProtocolClient client;
  InputAndOutputWithHeadersRequest request;
  request.SetHeaderFloat(-std::numeric_limits<double>::infinity());
  request.SetHeaderDouble(-std::numeric_limits<double>::infinity());

  auto outcome = client.InputAndOutputWithHeaders(request);
  AWS_ASSERT_SUCCESS(outcome);
}
