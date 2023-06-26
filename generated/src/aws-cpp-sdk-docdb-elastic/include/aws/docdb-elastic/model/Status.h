/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    UPDATING,
    VPC_ENDPOINT_LIMIT_EXCEEDED,
    IP_ADDRESS_LIMIT_EXCEEDED,
    INVALID_SECURITY_GROUP_ID,
    INVALID_SUBNET_ID,
    INACCESSIBLE_ENCRYPTION_CREDS
  };

namespace StatusMapper
{
AWS_DOCDBELASTIC_API Status GetStatusForName(const Aws::String& name);

AWS_DOCDBELASTIC_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
