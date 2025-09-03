/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class LogType
  {
    NOT_SET,
    ALL,
    ERROR_SUMMARY
  };

namespace LogTypeMapper
{
AWS_CLEANROOMSML_API LogType GetLogTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
