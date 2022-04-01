/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class AuthMode
  {
    NOT_SET,
    IAM,
    SSO
  };

namespace AuthModeMapper
{
AWS_IOTSITEWISE_API AuthMode GetAuthModeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAuthMode(AuthMode value);
} // namespace AuthModeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
