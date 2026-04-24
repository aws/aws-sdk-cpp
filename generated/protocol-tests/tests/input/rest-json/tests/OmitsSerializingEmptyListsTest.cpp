/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rest-json-protocol/RestJsonProtocolClient.h>
#include <aws/rest-json-protocol/model/OmitsSerializingEmptyListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using OmitsSerializingEmptyLists = AWS_PROTOCOL_TEST_SUITE;
using RestJsonProtocolClient = Aws::RestJsonProtocol::RestJsonProtocolClient;
using namespace Aws::RestJsonProtocol::Model;

AWS_PROTOCOL_TEST(OmitsSerializingEmptyLists, RestJsonOmitsEmptyListQueryValues) {
  RestJsonProtocolClient client(mockCredentials, mockConfig);

  SetMockResponse();

  OmitsSerializingEmptyListsRequest request;
  request.SetQueryStringList({});
  request.SetQueryIntegerList({});
  request.SetQueryDoubleList({});
  request.SetQueryBooleanList({});
  request.SetQueryTimestampList({});
  request.SetQueryEnumList({});
  request.SetQueryIntegerEnumList({});

  auto outcome = client.OmitsSerializingEmptyLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.uri = "/OmitsSerializingEmptyLists";
  ValidateRequestSent(expectedRq);
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
}
