/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{
  enum class CustomPluginContentType
  {
    NOT_SET,
    JAR,
    ZIP
  };

namespace CustomPluginContentTypeMapper
{
AWS_KAFKACONNECT_API CustomPluginContentType GetCustomPluginContentTypeForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForCustomPluginContentType(CustomPluginContentType value);
} // namespace CustomPluginContentTypeMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
