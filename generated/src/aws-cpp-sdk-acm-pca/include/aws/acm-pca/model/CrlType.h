/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class CrlType
  {
    NOT_SET,
    COMPLETE,
    PARTITIONED
  };

namespace CrlTypeMapper
{
AWS_ACMPCA_API CrlType GetCrlTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForCrlType(CrlType value);
} // namespace CrlTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
