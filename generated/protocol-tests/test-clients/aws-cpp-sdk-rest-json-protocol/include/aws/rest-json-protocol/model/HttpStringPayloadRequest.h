/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class HttpStringPayloadRequest : public StreamingRestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API HttpStringPayloadRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpStringPayload"; }
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
