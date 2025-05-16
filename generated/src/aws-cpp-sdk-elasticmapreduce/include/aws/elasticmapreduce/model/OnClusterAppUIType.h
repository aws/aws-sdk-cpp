/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class OnClusterAppUIType
  {
    NOT_SET,
    SparkHistoryServer,
    YarnTimelineService,
    TezUI,
    ApplicationMaster,
    JobHistoryServer,
    ResourceManager
  };

namespace OnClusterAppUITypeMapper
{
AWS_EMR_API OnClusterAppUIType GetOnClusterAppUITypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForOnClusterAppUIType(OnClusterAppUIType value);
} // namespace OnClusterAppUITypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
