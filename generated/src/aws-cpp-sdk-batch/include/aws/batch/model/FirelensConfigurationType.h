/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class FirelensConfigurationType
  {
    NOT_SET,
    fluentd,
    fluentbit
  };

namespace FirelensConfigurationTypeMapper
{
AWS_BATCH_API FirelensConfigurationType GetFirelensConfigurationTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForFirelensConfigurationType(FirelensConfigurationType value);
} // namespace FirelensConfigurationTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
