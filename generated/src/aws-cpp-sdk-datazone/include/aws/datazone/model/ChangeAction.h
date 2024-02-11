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
  enum class ChangeAction
  {
    NOT_SET,
    PUBLISH,
    UNPUBLISH
  };

namespace ChangeActionMapper
{
AWS_DATAZONE_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForChangeAction(ChangeAction value);
} // namespace ChangeActionMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
