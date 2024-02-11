/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ParameterType
  {
    NOT_SET,
    SMALLINT,
    INTEGER,
    BIGINT,
    DECIMAL,
    REAL,
    DOUBLE_PRECISION,
    BOOLEAN,
    CHAR_,
    VARCHAR,
    DATE,
    TIMESTAMP,
    TIMESTAMPTZ,
    TIME,
    TIMETZ,
    VARBYTE
  };

namespace ParameterTypeMapper
{
AWS_CLEANROOMS_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForParameterType(ParameterType value);
} // namespace ParameterTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
