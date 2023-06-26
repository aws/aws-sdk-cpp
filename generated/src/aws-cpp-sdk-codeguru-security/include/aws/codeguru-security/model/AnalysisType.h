/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{
  enum class AnalysisType
  {
    NOT_SET,
    Security,
    All
  };

namespace AnalysisTypeMapper
{
AWS_CODEGURUSECURITY_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForAnalysisType(AnalysisType value);
} // namespace AnalysisTypeMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
