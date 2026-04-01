/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for listing Private Connections in the caller's account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListPrivateConnectionsInput">AWS
 * API Reference</a></p>
 */
class ListPrivateConnectionsRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListPrivateConnectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPrivateConnections"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
