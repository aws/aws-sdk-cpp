/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolRequest.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
namespace Model {

/**
 */
class NonQueryCompatibleOperationRequest : public NonQueryCompatibleRpcV2ProtocolRequest {
 public:
  AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API NonQueryCompatibleOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NonQueryCompatibleOperation"; }

  AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
