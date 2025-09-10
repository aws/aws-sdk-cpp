/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10Request.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
namespace Model {

/**
 */
class NoInputAndOutputRequest : public JSONRPC10Request {
 public:
  AWS_JSONRPC10_API NoInputAndOutputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NoInputAndOutput"; }

  AWS_JSONRPC10_API Aws::String SerializePayload() const override;

  AWS_JSONRPC10_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
