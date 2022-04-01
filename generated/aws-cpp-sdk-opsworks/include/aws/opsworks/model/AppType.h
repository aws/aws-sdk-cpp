/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class AppType
  {
    NOT_SET,
    aws_flow_ruby,
    java,
    rails,
    php,
    nodejs,
    static_,
    other
  };

namespace AppTypeMapper
{
AWS_OPSWORKS_API AppType GetAppTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForAppType(AppType value);
} // namespace AppTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
