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
  enum class ScanState
  {
    NOT_SET,
    InProgress,
    Successful,
    Failed
  };

namespace ScanStateMapper
{
AWS_CODEGURUSECURITY_API ScanState GetScanStateForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForScanState(ScanState value);
} // namespace ScanStateMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
