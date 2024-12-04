/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{
  enum class DataAutomationProjectStatus
  {
    NOT_SET,
    COMPLETED,
    IN_PROGRESS,
    FAILED
  };

namespace DataAutomationProjectStatusMapper
{
AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectStatus GetDataAutomationProjectStatusForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForDataAutomationProjectStatus(DataAutomationProjectStatus value);
} // namespace DataAutomationProjectStatusMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
