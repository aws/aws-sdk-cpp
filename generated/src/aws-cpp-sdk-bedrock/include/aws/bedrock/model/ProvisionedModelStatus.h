/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class ProvisionedModelStatus
  {
    NOT_SET,
    Creating,
    InService,
    Updating,
    Failed
  };

namespace ProvisionedModelStatusMapper
{
AWS_BEDROCK_API ProvisionedModelStatus GetProvisionedModelStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForProvisionedModelStatus(ProvisionedModelStatus value);
} // namespace ProvisionedModelStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
