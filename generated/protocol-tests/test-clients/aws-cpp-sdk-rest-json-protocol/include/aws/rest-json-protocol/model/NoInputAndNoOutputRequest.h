/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class NoInputAndNoOutputRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API NoInputAndNoOutputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NoInputAndNoOutput"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
