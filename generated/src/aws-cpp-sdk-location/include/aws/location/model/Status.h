﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    Active,
    Expired
  };

namespace StatusMapper
{
AWS_LOCATIONSERVICE_API Status GetStatusForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
