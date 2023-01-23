/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class QueryStateString
  {
    NOT_SET,
    PENDING,
    WORKUNITS_AVAILABLE,
    ERROR_,
    FINISHED,
    EXPIRED
  };

namespace QueryStateStringMapper
{
AWS_LAKEFORMATION_API QueryStateString GetQueryStateStringForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForQueryStateString(QueryStateString value);
} // namespace QueryStateStringMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
