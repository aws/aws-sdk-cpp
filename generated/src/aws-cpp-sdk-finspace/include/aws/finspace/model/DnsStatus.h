/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class DnsStatus
  {
    NOT_SET,
    NONE,
    UPDATE_REQUESTED,
    UPDATING,
    FAILED_UPDATE,
    SUCCESSFULLY_UPDATED
  };

namespace DnsStatusMapper
{
AWS_FINSPACE_API DnsStatus GetDnsStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForDnsStatus(DnsStatus value);
} // namespace DnsStatusMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
