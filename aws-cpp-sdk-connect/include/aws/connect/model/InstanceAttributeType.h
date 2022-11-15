/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class InstanceAttributeType
  {
    NOT_SET,
    INBOUND_CALLS,
    OUTBOUND_CALLS,
    CONTACTFLOW_LOGS,
    CONTACT_LENS,
    AUTO_RESOLVE_BEST_VOICES,
    USE_CUSTOM_TTS_VOICES,
    EARLY_MEDIA,
    MULTI_PARTY_CONFERENCE,
    HIGH_VOLUME_OUTBOUND,
    ENHANCED_CONTACT_MONITORING
  };

namespace InstanceAttributeTypeMapper
{
AWS_CONNECT_API InstanceAttributeType GetInstanceAttributeTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInstanceAttributeType(InstanceAttributeType value);
} // namespace InstanceAttributeTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
