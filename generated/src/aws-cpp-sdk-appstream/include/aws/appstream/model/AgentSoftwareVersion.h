/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class AgentSoftwareVersion { NOT_SET, CURRENT_LATEST, ALWAYS_LATEST };

namespace AgentSoftwareVersionMapper {
AWS_APPSTREAM_API AgentSoftwareVersion GetAgentSoftwareVersionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAgentSoftwareVersion(AgentSoftwareVersion value);
}  // namespace AgentSoftwareVersionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
