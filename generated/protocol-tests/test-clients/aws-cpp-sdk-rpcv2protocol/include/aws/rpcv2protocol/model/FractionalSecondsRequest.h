/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rpcv2protocol/RpcV2ProtocolRequest.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
namespace Model {

/**
 */
class FractionalSecondsRequest : public RpcV2ProtocolRequest {
 public:
  AWS_RPCV2PROTOCOL_API FractionalSecondsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "FractionalSeconds"; }

  AWS_RPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
