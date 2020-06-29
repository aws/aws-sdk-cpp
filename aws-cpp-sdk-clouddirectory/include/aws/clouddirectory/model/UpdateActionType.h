/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class UpdateActionType
  {
    NOT_SET,
    CREATE_OR_UPDATE,
    DELETE_
  };

namespace UpdateActionTypeMapper
{
AWS_CLOUDDIRECTORY_API UpdateActionType GetUpdateActionTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForUpdateActionType(UpdateActionType value);
} // namespace UpdateActionTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
