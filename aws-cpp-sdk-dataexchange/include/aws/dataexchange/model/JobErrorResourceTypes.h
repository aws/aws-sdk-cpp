/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class JobErrorResourceTypes
  {
    NOT_SET,
    REVISION,
    ASSET
  };

namespace JobErrorResourceTypesMapper
{
AWS_DATAEXCHANGE_API JobErrorResourceTypes GetJobErrorResourceTypesForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForJobErrorResourceTypes(JobErrorResourceTypes value);
} // namespace JobErrorResourceTypesMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
