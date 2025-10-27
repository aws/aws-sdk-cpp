/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/CloudWatchEvents_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvents {
namespace Model {
enum class ConnectionAuthorizationType { NOT_SET, BASIC, OAUTH_CLIENT_CREDENTIALS, API_KEY };

namespace ConnectionAuthorizationTypeMapper {
AWS_CLOUDWATCHEVENTS_API ConnectionAuthorizationType GetConnectionAuthorizationTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForConnectionAuthorizationType(ConnectionAuthorizationType value);
}  // namespace ConnectionAuthorizationTypeMapper
}  // namespace Model
}  // namespace CloudWatchEvents
}  // namespace Aws
