/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class DataTransferApiType
  {
    NOT_SET,
    SYNC,
    ASYNC,
    AUTOMATIC
  };

namespace DataTransferApiTypeMapper
{
AWS_APPFLOW_API DataTransferApiType GetDataTransferApiTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForDataTransferApiType(DataTransferApiType value);
} // namespace DataTransferApiTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
