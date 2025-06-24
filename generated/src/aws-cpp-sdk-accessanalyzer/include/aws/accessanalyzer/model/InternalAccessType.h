/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class InternalAccessType
  {
    NOT_SET,
    INTRA_ACCOUNT,
    INTRA_ORG
  };

namespace InternalAccessTypeMapper
{
AWS_ACCESSANALYZER_API InternalAccessType GetInternalAccessTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForInternalAccessType(InternalAccessType value);
} // namespace InternalAccessTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
