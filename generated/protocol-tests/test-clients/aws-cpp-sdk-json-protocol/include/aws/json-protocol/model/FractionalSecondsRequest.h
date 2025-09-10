/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

namespace Aws {
namespace JsonProtocol {
namespace Model {

/**
 */
class FractionalSecondsRequest : public JsonProtocolRequest {
 public:
  AWS_JSONPROTOCOL_API FractionalSecondsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "FractionalSeconds"; }

  AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
