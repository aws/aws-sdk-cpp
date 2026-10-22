/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace DynamoDB {
namespace Model {
enum class DisassociationMode { NOT_SET, WAIT_FOR_REPLICATION };

namespace DisassociationModeMapper {
AWS_DYNAMODB_API DisassociationMode GetDisassociationModeForName(const Aws::String& name);

AWS_DYNAMODB_API Aws::String GetNameForDisassociationMode(DisassociationMode value);
}  // namespace DisassociationModeMapper
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
