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
  enum class IngestionState
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace IngestionStateMapper
{
AWS_APPFABRIC_API IngestionState GetIngestionStateForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForIngestionState(IngestionState value);
} // namespace IngestionStateMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
