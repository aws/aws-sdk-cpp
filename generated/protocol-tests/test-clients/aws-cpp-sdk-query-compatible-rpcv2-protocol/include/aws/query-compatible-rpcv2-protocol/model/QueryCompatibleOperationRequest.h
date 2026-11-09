/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolRequest.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
namespace Model {

/**
 */
class QueryCompatibleOperationRequest : public QueryCompatibleRpcV2ProtocolRequest {
 public:
  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryCompatibleOperation"; }

  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
