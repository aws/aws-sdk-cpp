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
  enum class FulfillmentActivityType
  {
    NOT_SET,
    ReturnIntent,
    CodeHook
  };

namespace FulfillmentActivityTypeMapper
{
AWS_LEXMODELBUILDINGSERVICE_API FulfillmentActivityType GetFulfillmentActivityTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForFulfillmentActivityType(FulfillmentActivityType value);
} // namespace FulfillmentActivityTypeMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
