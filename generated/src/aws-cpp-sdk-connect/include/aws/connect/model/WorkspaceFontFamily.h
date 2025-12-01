/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class WorkspaceFontFamily { NOT_SET, Arial, Courier_New, Georgia, Times_New_Roman, Trebuchet, Verdana };

namespace WorkspaceFontFamilyMapper {
AWS_CONNECT_API WorkspaceFontFamily GetWorkspaceFontFamilyForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForWorkspaceFontFamily(WorkspaceFontFamily value);
}  // namespace WorkspaceFontFamilyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
