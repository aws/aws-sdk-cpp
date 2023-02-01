/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class EventClass
  {
    NOT_SET,
    INFRASTRUCTURE,
    DEPLOYMENT,
    SECURITY_CHANGE,
    CONFIG_CHANGE,
    SCHEMA_CHANGE
  };

namespace EventClassMapper
{
AWS_DEVOPSGURU_API EventClass GetEventClassForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForEventClass(EventClass value);
} // namespace EventClassMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
