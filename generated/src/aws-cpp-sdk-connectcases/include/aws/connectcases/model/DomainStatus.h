/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class DomainStatus
  {
    NOT_SET,
    Active,
    CreationInProgress,
    CreationFailed
  };

namespace DomainStatusMapper
{
AWS_CONNECTCASES_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForDomainStatus(DomainStatus value);
} // namespace DomainStatusMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
