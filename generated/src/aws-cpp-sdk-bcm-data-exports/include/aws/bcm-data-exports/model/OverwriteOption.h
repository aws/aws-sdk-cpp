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
  enum class OverwriteOption
  {
    NOT_SET,
    CREATE_NEW_REPORT,
    OVERWRITE_REPORT
  };

namespace OverwriteOptionMapper
{
AWS_BCMDATAEXPORTS_API OverwriteOption GetOverwriteOptionForName(const Aws::String& name);

AWS_BCMDATAEXPORTS_API Aws::String GetNameForOverwriteOption(OverwriteOption value);
} // namespace OverwriteOptionMapper
} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
