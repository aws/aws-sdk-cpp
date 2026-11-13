/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class SubdomainAssociationAction { NOT_SET, ASSOCIATE, DISASSOCIATE, TRANSFER };

namespace SubdomainAssociationActionMapper {
AWS_LIGHTSAIL_API SubdomainAssociationAction GetSubdomainAssociationActionForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForSubdomainAssociationAction(SubdomainAssociationAction value);
}  // namespace SubdomainAssociationActionMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
