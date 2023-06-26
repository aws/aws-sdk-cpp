/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class OfferingClass
  {
    NOT_SET,
    STANDARD,
    CONVERTIBLE
  };

namespace OfferingClassMapper
{
AWS_COSTEXPLORER_API OfferingClass GetOfferingClassForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForOfferingClass(OfferingClass value);
} // namespace OfferingClassMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
