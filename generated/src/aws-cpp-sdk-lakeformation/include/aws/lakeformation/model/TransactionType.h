/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class TransactionType
  {
    NOT_SET,
    READ_AND_WRITE,
    READ_ONLY
  };

namespace TransactionTypeMapper
{
AWS_LAKEFORMATION_API TransactionType GetTransactionTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForTransactionType(TransactionType value);
} // namespace TransactionTypeMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
