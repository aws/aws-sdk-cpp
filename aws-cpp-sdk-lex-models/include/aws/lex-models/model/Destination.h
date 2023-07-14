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
  enum class Destination
  {
    NOT_SET,
    CLOUDWATCH_LOGS,
    S3
  };

namespace DestinationMapper
{
AWS_LEXMODELBUILDINGSERVICE_API Destination GetDestinationForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForDestination(Destination value);
} // namespace DestinationMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
