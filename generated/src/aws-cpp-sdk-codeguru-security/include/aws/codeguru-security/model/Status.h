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
  enum class Status
  {
    NOT_SET,
    Closed,
    Open,
    All
  };

namespace StatusMapper
{
AWS_CODEGURUSECURITY_API Status GetStatusForName(const Aws::String& name);

AWS_CODEGURUSECURITY_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
