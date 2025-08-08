/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ContactMetricName
  {
    NOT_SET,
    POSITION_IN_QUEUE
  };

namespace ContactMetricNameMapper
{
AWS_CONNECT_API ContactMetricName GetContactMetricNameForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactMetricName(ContactMetricName value);
} // namespace ContactMetricNameMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
