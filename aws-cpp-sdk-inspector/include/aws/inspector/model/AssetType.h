/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class AssetType
  {
    NOT_SET,
    ec2_instance
  };

namespace AssetTypeMapper
{
AWS_INSPECTOR_API AssetType GetAssetTypeForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForAssetType(AssetType value);
} // namespace AssetTypeMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
