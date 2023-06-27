/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class IngestionDestinationStatus
  {
    NOT_SET,
    Active,
    Failed
  };

namespace IngestionDestinationStatusMapper
{
AWS_APPFABRIC_API IngestionDestinationStatus GetIngestionDestinationStatusForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForIngestionDestinationStatus(IngestionDestinationStatus value);
} // namespace IngestionDestinationStatusMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
