/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class __AdTriggersElement
  {
    NOT_SET,
    SPLICE_INSERT,
    BREAK,
    PROVIDER_ADVERTISEMENT,
    DISTRIBUTOR_ADVERTISEMENT,
    PROVIDER_PLACEMENT_OPPORTUNITY,
    DISTRIBUTOR_PLACEMENT_OPPORTUNITY,
    PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY,
    DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY
  };

namespace __AdTriggersElementMapper
{
AWS_MEDIAPACKAGE_API __AdTriggersElement Get__AdTriggersElementForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameFor__AdTriggersElement(__AdTriggersElement value);
} // namespace __AdTriggersElementMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
