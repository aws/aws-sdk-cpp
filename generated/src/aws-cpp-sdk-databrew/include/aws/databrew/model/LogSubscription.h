/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class LogSubscription
  {
    NOT_SET,
    ENABLE,
    DISABLE
  };

namespace LogSubscriptionMapper
{
AWS_GLUEDATABREW_API LogSubscription GetLogSubscriptionForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForLogSubscription(LogSubscription value);
} // namespace LogSubscriptionMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
