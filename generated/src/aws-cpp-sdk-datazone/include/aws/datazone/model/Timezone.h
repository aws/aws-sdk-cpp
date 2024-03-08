/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class Timezone
  {
    NOT_SET,
    UTC,
    AFRICA_JOHANNESBURG,
    AMERICA_MONTREAL,
    AMERICA_SAO_PAULO,
    ASIA_BAHRAIN,
    ASIA_BANGKOK,
    ASIA_CALCUTTA,
    ASIA_DUBAI,
    ASIA_HONG_KONG,
    ASIA_JAKARTA,
    ASIA_KUALA_LUMPUR,
    ASIA_SEOUL,
    ASIA_SHANGHAI,
    ASIA_SINGAPORE,
    ASIA_TAIPEI,
    ASIA_TOKYO,
    AUSTRALIA_MELBOURNE,
    AUSTRALIA_SYDNEY,
    CANADA_CENTRAL,
    CET,
    CST6CDT,
    ETC_GMT,
    ETC_GMT0,
    ETC_GMT_ADD_0,
    ETC_GMT_ADD_1,
    ETC_GMT_ADD_10,
    ETC_GMT_ADD_11,
    ETC_GMT_ADD_12,
    ETC_GMT_ADD_2,
    ETC_GMT_ADD_3,
    ETC_GMT_ADD_4,
    ETC_GMT_ADD_5,
    ETC_GMT_ADD_6,
    ETC_GMT_ADD_7,
    ETC_GMT_ADD_8,
    ETC_GMT_ADD_9,
    ETC_GMT_NEG_0,
    ETC_GMT_NEG_1,
    ETC_GMT_NEG_10,
    ETC_GMT_NEG_11,
    ETC_GMT_NEG_12,
    ETC_GMT_NEG_13,
    ETC_GMT_NEG_14,
    ETC_GMT_NEG_2,
    ETC_GMT_NEG_3,
    ETC_GMT_NEG_4,
    ETC_GMT_NEG_5,
    ETC_GMT_NEG_6,
    ETC_GMT_NEG_7,
    ETC_GMT_NEG_8,
    ETC_GMT_NEG_9,
    EUROPE_DUBLIN,
    EUROPE_LONDON,
    EUROPE_PARIS,
    EUROPE_STOCKHOLM,
    EUROPE_ZURICH,
    ISRAEL,
    MEXICO_GENERAL,
    MST7MDT,
    PACIFIC_AUCKLAND,
    US_CENTRAL,
    US_EASTERN,
    US_MOUNTAIN,
    US_PACIFIC
  };

namespace TimezoneMapper
{
AWS_DATAZONE_API Timezone GetTimezoneForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTimezone(Timezone value);
} // namespace TimezoneMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
