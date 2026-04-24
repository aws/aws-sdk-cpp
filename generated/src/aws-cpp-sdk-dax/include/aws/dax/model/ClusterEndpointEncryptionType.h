/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/DAX_EXPORTS.h>

namespace Aws {
namespace DAX {
namespace Model {
enum class ClusterEndpointEncryptionType { NOT_SET, NONE, TLS };

namespace ClusterEndpointEncryptionTypeMapper {
AWS_DAX_API ClusterEndpointEncryptionType GetClusterEndpointEncryptionTypeForName(const Aws::String& name);

AWS_DAX_API Aws::String GetNameForClusterEndpointEncryptionType(ClusterEndpointEncryptionType value);
}  // namespace ClusterEndpointEncryptionTypeMapper
}  // namespace Model
}  // namespace DAX
}  // namespace Aws
