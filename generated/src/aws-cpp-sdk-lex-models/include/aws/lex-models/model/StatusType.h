/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class StatusType
  {
    NOT_SET,
    Detected,
    Missed
  };

namespace StatusTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
