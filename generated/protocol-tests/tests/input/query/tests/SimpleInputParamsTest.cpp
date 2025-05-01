/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/query-protocol/QueryProtocolClient.h>
#include <aws/query-protocol/model/SimpleInputParamsRequest.h>

using SimpleInputParams = AWS_PROTOCOL_TEST_SUITE;
using QueryProtocolClient = Aws::QueryProtocol::QueryProtocolClient;
using namespace Aws::QueryProtocol::Model;

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStrings) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFoo(R"(val1)");
  request.SetBar(R"(val2)");

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStringAndBooleanTrue) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFoo(R"(val1)");
  request.SetBaz(true);

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsStringsAndBooleanFalse) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetBaz(false);

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsInteger) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetBam(10);

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsFloat) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetBoo(10.8);

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QuerySimpleInputParamsBlob) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetQux(Aws::String(R"(value)"));

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QueryEnums) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFooEnum(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"));

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, QueryIntEnums) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetIntegerEnum(1);

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsNaNFloatInputs) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFloatValue(std::numeric_limits<double>::quiet_NaN());
  request.SetBoo(std::numeric_limits<double>::quiet_NaN());

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsInfinityFloatInputs) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFloatValue(std::numeric_limits<double>::infinity());
  request.SetBoo(std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}

AWS_PROTOCOL_TEST(SimpleInputParams, AwsQuerySupportsNegativeInfinityFloatInputs) {
  QueryProtocolClient client;
  SimpleInputParamsRequest request;
  request.SetFloatValue(-std::numeric_limits<double>::infinity());
  request.SetBoo(-std::numeric_limits<double>::infinity());

  auto outcome = client.SimpleInputParams(request);
  AWS_ASSERT_SUCCESS(outcome);
}
