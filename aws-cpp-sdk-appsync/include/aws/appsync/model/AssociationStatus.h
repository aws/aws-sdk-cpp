/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class AssociationStatus
  {
    NOT_SET,
    PROCESSING,
    FAILED,
    SUCCESS
  };

namespace AssociationStatusMapper
{
AWS_APPSYNC_API AssociationStatus GetAssociationStatusForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForAssociationStatus(AssociationStatus value);
} // namespace AssociationStatusMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
