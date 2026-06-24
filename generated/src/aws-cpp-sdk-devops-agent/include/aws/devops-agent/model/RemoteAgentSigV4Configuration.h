/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for SigV4-authenticated remote A2A agent
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RemoteAgentSigV4Configuration">AWS
 * API Reference</a></p>
 */
class RemoteAgentSigV4Configuration {
 public:
  AWS_DEVOPSAGENT_API RemoteAgentSigV4Configuration() = default;
  AWS_DEVOPSAGENT_API RemoteAgentSigV4Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RemoteAgentSigV4Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
