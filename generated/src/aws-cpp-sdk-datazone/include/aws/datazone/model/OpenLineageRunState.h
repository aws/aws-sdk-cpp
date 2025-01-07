/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class OpenLineageRunState
  {
    NOT_SET,
    START,
    RUNNING,
    COMPLETE,
    ABORT,
    FAIL,
    OTHER
  };

namespace OpenLineageRunStateMapper
{
AWS_DATAZONE_API OpenLineageRunState GetOpenLineageRunStateForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForOpenLineageRunState(OpenLineageRunState value);
} // namespace OpenLineageRunStateMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
