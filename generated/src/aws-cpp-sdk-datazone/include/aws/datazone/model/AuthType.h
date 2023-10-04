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
  enum class AuthType
  {
    NOT_SET,
    IAM_IDC,
    DISABLED
  };

namespace AuthTypeMapper
{
AWS_DATAZONE_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForAuthType(AuthType value);
} // namespace AuthTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
