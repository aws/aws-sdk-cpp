/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
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
AWS_CONNECT_API SlaType GetSlaTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSlaType(SlaType value);
} // namespace SlaTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
