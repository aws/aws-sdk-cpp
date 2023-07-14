/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class OriginManifestType
  {
    NOT_SET,
    SINGLE_PERIOD,
    MULTI_PERIOD
  };

namespace OriginManifestTypeMapper
{
AWS_MEDIATAILOR_API OriginManifestType GetOriginManifestTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForOriginManifestType(OriginManifestType value);
} // namespace OriginManifestTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
