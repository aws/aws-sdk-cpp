/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class EventDataSource
  {
    NOT_SET,
    AWS_CLOUD_TRAIL,
    AWS_CODE_DEPLOY
  };

namespace EventDataSourceMapper
{
AWS_DEVOPSGURU_API EventDataSource GetEventDataSourceForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForEventDataSource(EventDataSource value);
} // namespace EventDataSourceMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
