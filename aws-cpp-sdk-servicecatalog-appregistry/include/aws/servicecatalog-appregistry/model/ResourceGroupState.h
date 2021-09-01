/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{
  enum class ResourceGroupState
  {
    NOT_SET,
    CREATING,
    CREATE_COMPLETE,
    CREATE_FAILED,
    UPDATING,
    UPDATE_COMPLETE,
    UPDATE_FAILED
  };

namespace ResourceGroupStateMapper
{
AWS_APPREGISTRY_API ResourceGroupState GetResourceGroupStateForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForResourceGroupState(ResourceGroupState value);
} // namespace ResourceGroupStateMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
