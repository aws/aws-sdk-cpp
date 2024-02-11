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
  enum class ScanType
  {
    NOT_SET,
    Standard,
    Express
  };

namespace ScanTypeMapper
{
AWS_CODEGURUSECURITY_API ScanType GetScanTypeForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForScanType(ScanType value);
} // namespace ScanTypeMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
