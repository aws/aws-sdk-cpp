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
  enum class ConnectionScope
  {
    NOT_SET,
    DOMAIN_,
    PROJECT
  };

namespace ConnectionScopeMapper
{
AWS_DATAZONE_API ConnectionScope GetConnectionScopeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForConnectionScope(ConnectionScope value);
} // namespace ConnectionScopeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
