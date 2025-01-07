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
  enum class ResourceOwner
  {
    NOT_SET,
    SERVICE,
    ACCOUNT
  };

namespace ResourceOwnerMapper
{
AWS_BEDROCKDATAAUTOMATION_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForResourceOwner(ResourceOwner value);
} // namespace ResourceOwnerMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
