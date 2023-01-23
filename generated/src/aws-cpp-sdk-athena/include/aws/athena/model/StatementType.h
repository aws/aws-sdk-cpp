/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class StatementType
  {
    NOT_SET,
    DDL,
    DML,
    UTILITY
  };

namespace StatementTypeMapper
{
AWS_ATHENA_API StatementType GetStatementTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForStatementType(StatementType value);
} // namespace StatementTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
