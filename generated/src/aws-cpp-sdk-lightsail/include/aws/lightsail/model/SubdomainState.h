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
enum class SubdomainState { NOT_SET, CREATING, CREATE_FAILED, UNATTACHED, ATTACHING, ATTACHED, DETACHING, TRANSFERRING, IMPLICIT };

namespace SubdomainStateMapper {
AWS_LIGHTSAIL_API SubdomainState GetSubdomainStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForSubdomainState(SubdomainState value);
}  // namespace SubdomainStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
