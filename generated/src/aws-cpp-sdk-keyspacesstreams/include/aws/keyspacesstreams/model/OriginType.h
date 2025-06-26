/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{
  enum class OriginType
  {
    NOT_SET,
    USER,
    REPLICATION,
    TTL
  };

namespace OriginTypeMapper
{
AWS_KEYSPACESSTREAMS_API OriginType GetOriginTypeForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForOriginType(OriginType value);
} // namespace OriginTypeMapper
} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
