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
  enum class Status
  {
    NOT_SET,
    BUILDING,
    READY,
    READY_BASIC_TESTING,
    FAILED,
    NOT_BUILT
  };

namespace StatusMapper
{
AWS_LEXMODELBUILDINGSERVICE_API Status GetStatusForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
