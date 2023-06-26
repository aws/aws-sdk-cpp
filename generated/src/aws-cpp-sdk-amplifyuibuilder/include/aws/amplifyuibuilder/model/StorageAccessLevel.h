/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{
  enum class StorageAccessLevel
  {
    NOT_SET,
    public_,
    protected_,
    private_
  };

namespace StorageAccessLevelMapper
{
AWS_AMPLIFYUIBUILDER_API StorageAccessLevel GetStorageAccessLevelForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForStorageAccessLevel(StorageAccessLevel value);
} // namespace StorageAccessLevelMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
