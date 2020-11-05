/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
  enum class ReplicaStatus
  {
    NOT_SET,
    CREATING,
    CREATION_FAILED,
    UPDATING,
    DELETING,
    ACTIVE,
    REGION_DISABLED,
    INACCESSIBLE_ENCRYPTION_CREDENTIALS
  };

namespace ReplicaStatusMapper
{
AWS_DYNAMODB_API ReplicaStatus GetReplicaStatusForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForReplicaStatus(ReplicaStatus value);
} // namespace ReplicaStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
