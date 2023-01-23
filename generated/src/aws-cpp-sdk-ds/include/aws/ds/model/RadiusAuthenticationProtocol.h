/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class RadiusAuthenticationProtocol
  {
    NOT_SET,
    PAP,
    CHAP,
    MS_CHAPv1,
    MS_CHAPv2
  };

namespace RadiusAuthenticationProtocolMapper
{
AWS_DIRECTORYSERVICE_API RadiusAuthenticationProtocol GetRadiusAuthenticationProtocolForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForRadiusAuthenticationProtocol(RadiusAuthenticationProtocol value);
} // namespace RadiusAuthenticationProtocolMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
