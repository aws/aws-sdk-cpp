/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>A daily sync. The run time is system-chosen (off-peak) and not
 * configurable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DailySchedule">AWS
 * API Reference</a></p>
 */
class DailySchedule {
 public:
  AWS_BEDROCKAGENT_API DailySchedule() = default;
  AWS_BEDROCKAGENT_API DailySchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API DailySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
