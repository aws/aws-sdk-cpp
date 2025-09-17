/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClient.h>
#include <aws/rpcv2protocol/model/RpcV2CborListsRequest.h>
#include <aws/testing/AwsProtocolTestHelpers.h>

using RpcV2CborLists = AWS_PROTOCOL_TEST_SUITE;
using RpcV2ProtocolClient = Aws::RpcV2Protocol::RpcV2ProtocolClient;
using namespace Aws::RpcV2Protocol::Model;

AWS_PROTOCOL_TEST(RpcV2CborLists, RpcV2CborLists) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body =
      "v2pzdHJpbmdMaXN0gmNmb29jYmFyaXN0cmluZ1NldIJjZm9vY2JhcmtpbnRlZ2VyTGlzdIIBAmtib29sZWFuTGlzdIL19G10aW1lc3RhbXBMaXN0gsH7QdTX+/"
      "OAAADB+0HU1/"
      "vzgAAAaGVudW1MaXN0gmNGb29hMGtpbnRFbnVtTGlzdIIBAnBuZXN0ZWRTdHJpbmdMaXN0goJjZm9vY2JhcoJjYmF6Y3F1eG1zdHJ1Y3R1cmVMaXN0gqJhYWExYWJhMqJhYW"
      "EzYWJhNGhibG9iTGlzdIJDZm9vQ2Jhcv8=";
  SetMockResponse(mockRs);

  RpcV2CborListsRequest request;
  request.SetStringList({R"(foo)", R"(bar)"});
  request.SetStringSet({R"(foo)", R"(bar)"});
  request.SetIntegerList({1, 2});
  request.SetBooleanList({true, false});
  request.SetTimestampList(
      {Aws::Utils::DateTime(static_cast<uint64_t>(1398796238)), Aws::Utils::DateTime(static_cast<uint64_t>(1398796238))});
  request.SetEnumList({FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), FooEnumMapper::GetFooEnumForName(R"e(0)e")});
  request.SetIntEnumList({1, 2});
  {
    Aws::Vector<Aws::String> requestNestedStringListItem;
    requestNestedStringListItem.emplace_back(R"(foo)");
    requestNestedStringListItem.emplace_back(R"(bar)");
    request.AddNestedStringList(requestNestedStringListItem);
  }
  {
    Aws::Vector<Aws::String> requestNestedStringListItem;
    requestNestedStringListItem.emplace_back(R"(baz)");
    requestNestedStringListItem.emplace_back(R"(qux)");
    request.AddNestedStringList(requestNestedStringListItem);
  }
  {
    StructureListMember requestStructureListItem;
    requestStructureListItem.SetA(R"(1)");
    requestStructureListItem.SetB(R"(2)");
    request.AddStructureList(requestStructureListItem);
  }
  {
    StructureListMember requestStructureListItem;
    requestStructureListItem.SetA(R"(3)");
    requestStructureListItem.SetB(R"(4)");
    request.AddStructureList(requestStructureListItem);
  }
  request.SetBlobList({Aws::String(R"(foo)"), Aws::String(R"(bar)")});

  auto outcome = client.RpcV2CborLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body =
      "v2pzdHJpbmdMaXN0gmNmb29jYmFyaXN0cmluZ1NldIJjZm9vY2JhcmtpbnRlZ2VyTGlzdIIBAmtib29sZWFuTGlzdIL19G10aW1lc3RhbXBMaXN0gsH7QdTX+/"
      "OAAADB+0HU1/"
      "vzgAAAaGVudW1MaXN0gmNGb29hMGtpbnRFbnVtTGlzdIIBAnBuZXN0ZWRTdHJpbmdMaXN0goJjZm9vY2JhcoJjYmF6Y3F1eG1zdHJ1Y3R1cmVMaXN0gqJhYWExYWJhMqJhYW"
      "EzYWJhNGhibG9iTGlzdIJDZm9vQ2Jhcv8=";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborLists";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborListsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"(
     * {"stringList":["foo","bar"],"stringSet":["foo","bar"],"integerList":[1,2],"booleanList":[true,false],"timestampList":[1398796238,1398796238],"enumList":["Foo","0"],"intEnumList":[1,2],"nestedStringList":[["foo","bar"],["baz","qux"]],"structureList":[{"a":"1","b":"2"},{"a":"3","b":"4"}],"blobList":["foo","bar"]}
     * )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(2U, resultStringListItem.size());
    EXPECT_EQ(R"(foo)", resultStringListItem.at(0));
    EXPECT_EQ(R"(bar)", resultStringListItem.at(1));
    const Aws::Vector<Aws::String>& resultStringSetItem = result.GetStringSet();
    EXPECT_EQ(2U, resultStringSetItem.size());
    EXPECT_EQ(R"(foo)", resultStringSetItem.at(0));
    EXPECT_EQ(R"(bar)", resultStringSetItem.at(1));
    const Aws::Vector<int64_t>& resultIntegerListItem = result.GetIntegerList();
    EXPECT_EQ(2U, resultIntegerListItem.size());
    EXPECT_EQ(1, resultIntegerListItem.at(0));
    EXPECT_EQ(2, resultIntegerListItem.at(1));
    const Aws::Vector<bool>& resultBooleanListItem = result.GetBooleanList();
    EXPECT_EQ(2U, resultBooleanListItem.size());
    EXPECT_EQ(true, resultBooleanListItem.at(0));
    EXPECT_EQ(false, resultBooleanListItem.at(1));
    const Aws::Vector<Aws::Utils::DateTime>& resultTimestampListItem = result.GetTimestampList();
    EXPECT_EQ(2U, resultTimestampListItem.size());
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<uint64_t>(1398796238)), resultTimestampListItem.at(0));
    EXPECT_EQ(Aws::Utils::DateTime(static_cast<uint64_t>(1398796238)), resultTimestampListItem.at(1));
    const Aws::Vector<FooEnum>& resultEnumListItem = result.GetEnumList();
    EXPECT_EQ(2U, resultEnumListItem.size());
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(Foo)e"), resultEnumListItem.at(0));
    EXPECT_EQ(FooEnumMapper::GetFooEnumForName(R"e(0)e"), resultEnumListItem.at(1));
    const Aws::Vector<int64_t>& resultIntEnumListItem = result.GetIntEnumList();
    EXPECT_EQ(2U, resultIntEnumListItem.size());
    EXPECT_EQ(1, resultIntEnumListItem.at(0));
    EXPECT_EQ(2, resultIntEnumListItem.at(1));
    EXPECT_EQ(2U, result.GetNestedStringList().size());
    {
      const Aws::Vector<Aws::String>& resultNestedStringListItem = result.GetNestedStringList().at(0);
      EXPECT_EQ(2U, resultNestedStringListItem.size());
      EXPECT_EQ(R"(foo)", resultNestedStringListItem.at(0));
      EXPECT_EQ(R"(bar)", resultNestedStringListItem.at(1));
    }
    {
      const Aws::Vector<Aws::String>& resultNestedStringListItem = result.GetNestedStringList().at(1);
      EXPECT_EQ(2U, resultNestedStringListItem.size());
      EXPECT_EQ(R"(baz)", resultNestedStringListItem.at(0));
      EXPECT_EQ(R"(qux)", resultNestedStringListItem.at(1));
    }
    EXPECT_EQ(2U, result.GetStructureList().size());
    {
      const StructureListMember& resultStructureListItem = result.GetStructureList().at(0);
      EXPECT_EQ(R"(1)", resultStructureListItem.GetA());
      EXPECT_EQ(R"(2)", resultStructureListItem.GetB());
    }
    {
      const StructureListMember& resultStructureListItem = result.GetStructureList().at(1);
      EXPECT_EQ(R"(3)", resultStructureListItem.GetA());
      EXPECT_EQ(R"(4)", resultStructureListItem.GetB());
    }
    const Aws::Vector<Aws::Utils::ByteBuffer>& resultBlobListItem = result.GetBlobList();
    EXPECT_EQ(2U, resultBlobListItem.size());
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(foo)"), resultBlobListItem.at(0));
    EXPECT_EQ(Aws::Utils::ByteBuffer(R"(bar)"), resultBlobListItem.at(1));
  });
}

AWS_PROTOCOL_TEST(RpcV2CborLists, RpcV2CborListsEmpty) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "v2pzdHJpbmdMaXN0n///";
  SetMockResponse(mockRs);

  RpcV2CborListsRequest request;
  request.SetStringList({});

  auto outcome = client.RpcV2CborLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "v2pzdHJpbmdMaXN0n///";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborLists";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborListsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringList":[]} )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(0U, resultStringListItem.size());
  });
}

AWS_PROTOCOL_TEST(RpcV2CborLists, RpcV2CborListsEmptyUsingDefiniteLength) {
  RpcV2ProtocolClient client(mockCredentials, mockConfig);

  // Cbor specific
  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.body = "oWpzdHJpbmdMaXN0gA==";
  SetMockResponse(mockRs);

  RpcV2CborListsRequest request;
  request.SetStringList({});

  auto outcome = client.RpcV2CborLists(request);
  ExpectedRequest expectedRq;
  expectedRq.method = "POST";
  expectedRq.body = "oWpzdHJpbmdMaXN0gA==";
  expectedRq.uri = "/service/RpcV2Protocol/operation/RpcV2CborLists";
  expectedRq.headers = {{"Accept", R"(application/cbor)"}, {"Content-Type", R"(application/cbor)"}, {"smithy-protocol", R"(rpc-v2-cbor)"}};
  expectedRq.requireHeaders = {"Content-Length"};
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const RpcV2CborListsResult& result = outcome.GetResult();
  ValidateRequestSent(expectedRq, [&result](const ExpectedRequest&, const Aws::ProtocolMock::Model::Request&) -> void {
    /* expectedResult = R"( {"stringList":[]} )" */
    const Aws::Vector<Aws::String>& resultStringListItem = result.GetStringList();
    EXPECT_EQ(0U, resultStringListItem.size());
  });
}
