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
  enum class InstanceStorageResourceType
  {
    NOT_SET,
    CHAT_TRANSCRIPTS,
    CALL_RECORDINGS,
    SCHEDULED_REPORTS,
    MEDIA_STREAMS,
    CONTACT_TRACE_RECORDS,
    AGENT_EVENTS
  };

namespace InstanceStorageResourceTypeMapper
{
AWS_CONNECT_API InstanceStorageResourceType GetInstanceStorageResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForInstanceStorageResourceType(InstanceStorageResourceType value);
} // namespace InstanceStorageResourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
