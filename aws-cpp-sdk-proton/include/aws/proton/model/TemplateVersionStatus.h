/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class TemplateVersionStatus
  {
    NOT_SET,
    REGISTRATION_IN_PROGRESS,
    REGISTRATION_FAILED,
    DRAFT,
    PUBLISHED
  };

namespace TemplateVersionStatusMapper
{
AWS_PROTON_API TemplateVersionStatus GetTemplateVersionStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForTemplateVersionStatus(TemplateVersionStatus value);
} // namespace TemplateVersionStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
