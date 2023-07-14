/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class OrderedBy
  {
    NOT_SET,
    LAST_MODIFIED_DATE
  };

namespace OrderedByMapper
{
AWS_GLUEDATABREW_API OrderedBy GetOrderedByForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForOrderedBy(OrderedBy value);
} // namespace OrderedByMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
