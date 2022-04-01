/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class GoogleAnalyticsConnectorOperator
  {
    NOT_SET,
    PROJECTION,
    BETWEEN
  };

namespace GoogleAnalyticsConnectorOperatorMapper
{
AWS_APPFLOW_API GoogleAnalyticsConnectorOperator GetGoogleAnalyticsConnectorOperatorForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForGoogleAnalyticsConnectorOperator(GoogleAnalyticsConnectorOperator value);
} // namespace GoogleAnalyticsConnectorOperatorMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
