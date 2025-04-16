/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class SlaType
  {
    NOT_SET,
    CaseField
  };

namespace SlaTypeMapper
{
AWS_CONNECTCASES_API SlaType GetSlaTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForSlaType(SlaType value);
} // namespace SlaTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
