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
  enum class DashManifestStyle
  {
    NOT_SET,
    BASIC,
    COMPACT,
    DISTINCT
  };

namespace DashManifestStyleMapper
{
AWS_MEDIACONVERT_API DashManifestStyle GetDashManifestStyleForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashManifestStyle(DashManifestStyle value);
} // namespace DashManifestStyleMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
