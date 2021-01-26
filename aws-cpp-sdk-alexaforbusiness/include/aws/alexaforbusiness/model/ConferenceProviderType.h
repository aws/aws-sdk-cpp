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
  enum class ConferenceProviderType
  {
    NOT_SET,
    CHIME,
    BLUEJEANS,
    FUZE,
    GOOGLE_HANGOUTS,
    POLYCOM,
    RINGCENTRAL,
    SKYPE_FOR_BUSINESS,
    WEBEX,
    ZOOM,
    CUSTOM
  };

namespace ConferenceProviderTypeMapper
{
AWS_ALEXAFORBUSINESS_API ConferenceProviderType GetConferenceProviderTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForConferenceProviderType(ConferenceProviderType value);
} // namespace ConferenceProviderTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
