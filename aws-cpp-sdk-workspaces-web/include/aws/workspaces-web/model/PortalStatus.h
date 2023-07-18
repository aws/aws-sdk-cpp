/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class PortalStatus
  {
    NOT_SET,
    Incomplete,
    Pending,
    Active
  };

namespace PortalStatusMapper
{
AWS_WORKSPACESWEB_API PortalStatus GetPortalStatusForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForPortalStatus(PortalStatus value);
} // namespace PortalStatusMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
