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
  enum class GlueRecordType
  {
    NOT_SET,
    DATE,
    STRING,
    TIMESTAMP,
    INT,
    FLOAT,
    LONG,
    BIGDECIMAL,
    BYTE,
    SHORT,
    DOUBLE
  };

namespace GlueRecordTypeMapper
{
AWS_GLUE_API GlueRecordType GetGlueRecordTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForGlueRecordType(GlueRecordType value);
} // namespace GlueRecordTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
