/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class JobTemplateListBy
  {
    NOT_SET,
    NAME,
    CREATION_DATE,
    SYSTEM
  };

namespace JobTemplateListByMapper
{
AWS_MEDIACONVERT_API JobTemplateListBy GetJobTemplateListByForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForJobTemplateListBy(JobTemplateListBy value);
} // namespace JobTemplateListByMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
