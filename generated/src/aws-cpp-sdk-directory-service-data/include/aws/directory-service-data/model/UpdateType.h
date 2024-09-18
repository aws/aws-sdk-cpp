/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{
  enum class UpdateType
  {
    NOT_SET,
    ADD,
    REPLACE,
    REMOVE
  };

namespace UpdateTypeMapper
{
AWS_DIRECTORYSERVICEDATA_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_DIRECTORYSERVICEDATA_API Aws::String GetNameForUpdateType(UpdateType value);
} // namespace UpdateTypeMapper
} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
