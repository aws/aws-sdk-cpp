﻿/**
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
  enum class SortFieldConnection
  {
    NOT_SET,
    NAME
  };

namespace SortFieldConnectionMapper
{
AWS_DATAZONE_API SortFieldConnection GetSortFieldConnectionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSortFieldConnection(SortFieldConnection value);
} // namespace SortFieldConnectionMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
