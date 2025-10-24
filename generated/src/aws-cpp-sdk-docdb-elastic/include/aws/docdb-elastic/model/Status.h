﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>

namespace Aws {
namespace DocDBElastic {
namespace Model {
enum class Status {
  NOT_SET,
  CREATING,
  ACTIVE,
  DELETING,
  UPDATING,
  VPC_ENDPOINT_LIMIT_EXCEEDED,
  IP_ADDRESS_LIMIT_EXCEEDED,
  INVALID_SECURITY_GROUP_ID,
  INVALID_SUBNET_ID,
  INACCESSIBLE_ENCRYPTION_CREDS,
  INACCESSIBLE_SECRET_ARN,
  INACCESSIBLE_VPC_ENDPOINT,
  INCOMPATIBLE_NETWORK,
  MERGING,
  MODIFYING,
  SPLITTING,
  COPYING,
  STARTING,
  STOPPING,
  STOPPED,
  MAINTENANCE,
  INACCESSIBLE_ENCRYPTION_CREDENTIALS_RECOVERABLE
};

namespace StatusMapper {
AWS_DOCDBELASTIC_API Status GetStatusForName(const Aws::String& name);

AWS_DOCDBELASTIC_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace DocDBElastic
}  // namespace Aws
