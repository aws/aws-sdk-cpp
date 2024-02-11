/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    DIRECTORY_IDENTITY
  };

namespace AuthenticationTypeMapper
{
AWS_ATHENA_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
