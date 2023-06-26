/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
  enum class TransitEncryptionMode
  {
    NOT_SET,
    preferred,
    required
  };

namespace TransitEncryptionModeMapper
{
AWS_ELASTICACHE_API TransitEncryptionMode GetTransitEncryptionModeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForTransitEncryptionMode(TransitEncryptionMode value);
} // namespace TransitEncryptionModeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
