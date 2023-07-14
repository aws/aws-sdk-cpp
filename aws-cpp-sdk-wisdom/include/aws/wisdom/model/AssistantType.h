/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{
  enum class AssistantType
  {
    NOT_SET,
    AGENT
  };

namespace AssistantTypeMapper
{
AWS_CONNECTWISDOMSERVICE_API AssistantType GetAssistantTypeForName(const Aws::String& name);

AWS_CONNECTWISDOMSERVICE_API Aws::String GetNameForAssistantType(AssistantType value);
} // namespace AssistantTypeMapper
} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
