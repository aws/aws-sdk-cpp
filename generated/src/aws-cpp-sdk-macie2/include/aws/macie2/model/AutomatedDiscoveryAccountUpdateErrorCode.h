/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class AutomatedDiscoveryAccountUpdateErrorCode
  {
    NOT_SET,
    ACCOUNT_PAUSED,
    ACCOUNT_NOT_FOUND
  };

namespace AutomatedDiscoveryAccountUpdateErrorCodeMapper
{
AWS_MACIE2_API AutomatedDiscoveryAccountUpdateErrorCode GetAutomatedDiscoveryAccountUpdateErrorCodeForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAutomatedDiscoveryAccountUpdateErrorCode(AutomatedDiscoveryAccountUpdateErrorCode value);
} // namespace AutomatedDiscoveryAccountUpdateErrorCodeMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
