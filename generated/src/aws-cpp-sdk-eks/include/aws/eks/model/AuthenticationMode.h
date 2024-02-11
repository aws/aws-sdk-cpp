/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class AuthenticationMode
  {
    NOT_SET,
    API,
    API_AND_CONFIG_MAP,
    CONFIG_MAP
  };

namespace AuthenticationModeMapper
{
AWS_EKS_API AuthenticationMode GetAuthenticationModeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForAuthenticationMode(AuthenticationMode value);
} // namespace AuthenticationModeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
