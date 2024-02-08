/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ViewDialect
  {
    NOT_SET,
    REDSHIFT,
    ATHENA,
    SPARK
  };

namespace ViewDialectMapper
{
AWS_GLUE_API ViewDialect GetViewDialectForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForViewDialect(ViewDialect value);
} // namespace ViewDialectMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
