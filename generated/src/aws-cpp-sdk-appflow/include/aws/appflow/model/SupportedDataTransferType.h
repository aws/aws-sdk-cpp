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
  enum class SupportedDataTransferType
  {
    NOT_SET,
    RECORD,
    FILE
  };

namespace SupportedDataTransferTypeMapper
{
AWS_APPFLOW_API SupportedDataTransferType GetSupportedDataTransferTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForSupportedDataTransferType(SupportedDataTransferType value);
} // namespace SupportedDataTransferTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
