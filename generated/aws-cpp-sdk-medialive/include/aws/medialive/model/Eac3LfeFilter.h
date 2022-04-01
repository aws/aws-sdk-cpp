/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class Eac3LfeFilter
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Eac3LfeFilterMapper
{
AWS_MEDIALIVE_API Eac3LfeFilter GetEac3LfeFilterForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3LfeFilter(Eac3LfeFilter value);
} // namespace Eac3LfeFilterMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
