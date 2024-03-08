/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{
  enum class FrequencyOption
  {
    NOT_SET,
    SYNCHRONOUS
  };

namespace FrequencyOptionMapper
{
AWS_BCMDATAEXPORTS_API FrequencyOption GetFrequencyOptionForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForFrequencyOption(FrequencyOption value);
} // namespace FrequencyOptionMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
