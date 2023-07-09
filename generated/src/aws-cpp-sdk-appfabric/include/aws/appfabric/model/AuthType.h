/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class AuthType
  {
    NOT_SET,
    oauth2,
    apiKey
  };

namespace AuthTypeMapper
{
AWS_APPFABRIC_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForAuthType(AuthType value);
} // namespace AuthTypeMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
