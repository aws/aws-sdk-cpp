/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class BundleType
  {
    NOT_SET,
    tar,
    tgz,
    zip,
    YAML,
    JSON
  };

namespace BundleTypeMapper
{
AWS_CODEDEPLOY_API BundleType GetBundleTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForBundleType(BundleType value);
} // namespace BundleTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
