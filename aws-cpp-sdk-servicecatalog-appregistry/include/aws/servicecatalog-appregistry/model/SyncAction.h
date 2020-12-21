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
  enum class SyncAction
  {
    NOT_SET,
    START_SYNC,
    NO_ACTION
  };

namespace SyncActionMapper
{
AWS_APPREGISTRY_API SyncAction GetSyncActionForName(const Aws::String& name);

AWS_APPREGISTRY_API Aws::String GetNameForSyncAction(SyncAction value);
} // namespace SyncActionMapper
} // namespace Model
} // namespace AppRegistry
} // namespace Aws
