/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class UserType
  {
    NOT_SET,
    SSO_USER,
    SSO_GROUP
  };

namespace UserTypeMapper
{
AWS_MANAGEDGRAFANA_API UserType GetUserTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForUserType(UserType value);
} // namespace UserTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
