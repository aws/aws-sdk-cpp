/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace KafkaConnect
{
namespace KafkaConnectEndpoint
{
AWS_KAFKACONNECT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KafkaConnectEndpoint
} // namespace KafkaConnect
} // namespace Aws
