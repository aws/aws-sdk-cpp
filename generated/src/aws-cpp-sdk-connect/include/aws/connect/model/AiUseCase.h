/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class AiUseCase { NOT_SET, AgentAssistance, SelfService };

namespace AiUseCaseMapper {
AWS_CONNECT_API AiUseCase GetAiUseCaseForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAiUseCase(AiUseCase value);
}  // namespace AiUseCaseMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
