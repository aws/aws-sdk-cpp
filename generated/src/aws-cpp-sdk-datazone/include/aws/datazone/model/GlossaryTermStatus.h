/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class GlossaryTermStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace GlossaryTermStatusMapper
{
AWS_DATAZONE_API GlossaryTermStatus GetGlossaryTermStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGlossaryTermStatus(GlossaryTermStatus value);
} // namespace GlossaryTermStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
