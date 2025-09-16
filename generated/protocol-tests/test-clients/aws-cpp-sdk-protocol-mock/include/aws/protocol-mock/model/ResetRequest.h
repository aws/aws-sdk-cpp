/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/protocol-mock/ProtocolMockRequest.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

namespace Aws {
namespace ProtocolMock {
namespace Model {

/**
 */
class ResetRequest : public ProtocolMockRequest {
 public:
  AWS_PROTOCOLMOCK_API ResetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "Reset"; }

  AWS_PROTOCOLMOCK_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws
