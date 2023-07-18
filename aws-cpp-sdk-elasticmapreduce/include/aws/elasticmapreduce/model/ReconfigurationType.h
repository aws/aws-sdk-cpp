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
  enum class ReconfigurationType
  {
    NOT_SET,
    OVERWRITE,
    MERGE
  };

namespace ReconfigurationTypeMapper
{
AWS_EMR_API ReconfigurationType GetReconfigurationTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForReconfigurationType(ReconfigurationType value);
} // namespace ReconfigurationTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
