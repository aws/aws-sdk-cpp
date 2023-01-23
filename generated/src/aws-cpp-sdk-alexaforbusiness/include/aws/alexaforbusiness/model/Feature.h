/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class Feature
  {
    NOT_SET,
    BLUETOOTH,
    VOLUME,
    NOTIFICATIONS,
    LISTS,
    SKILLS,
    NETWORK_PROFILE,
    SETTINGS,
    ALL
  };

namespace FeatureMapper
{
AWS_ALEXAFORBUSINESS_API Feature GetFeatureForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForFeature(Feature value);
} // namespace FeatureMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
