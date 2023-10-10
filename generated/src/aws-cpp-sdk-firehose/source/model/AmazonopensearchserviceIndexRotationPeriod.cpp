/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonopensearchserviceIndexRotationPeriod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace AmazonopensearchserviceIndexRotationPeriodMapper
      {

        static const int NoRotation_HASH = HashingUtils::HashString("NoRotation");
        static const int OneHour_HASH = HashingUtils::HashString("OneHour");
        static const int OneDay_HASH = HashingUtils::HashString("OneDay");
        static const int OneWeek_HASH = HashingUtils::HashString("OneWeek");
        static const int OneMonth_HASH = HashingUtils::HashString("OneMonth");


        AmazonopensearchserviceIndexRotationPeriod GetAmazonopensearchserviceIndexRotationPeriodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoRotation_HASH)
          {
            return AmazonopensearchserviceIndexRotationPeriod::NoRotation;
          }
          else if (hashCode == OneHour_HASH)
          {
            return AmazonopensearchserviceIndexRotationPeriod::OneHour;
          }
          else if (hashCode == OneDay_HASH)
          {
            return AmazonopensearchserviceIndexRotationPeriod::OneDay;
          }
          else if (hashCode == OneWeek_HASH)
          {
            return AmazonopensearchserviceIndexRotationPeriod::OneWeek;
          }
          else if (hashCode == OneMonth_HASH)
          {
            return AmazonopensearchserviceIndexRotationPeriod::OneMonth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmazonopensearchserviceIndexRotationPeriod>(hashCode);
          }

          return AmazonopensearchserviceIndexRotationPeriod::NOT_SET;
        }

        Aws::String GetNameForAmazonopensearchserviceIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod enumValue)
        {
          switch(enumValue)
          {
          case AmazonopensearchserviceIndexRotationPeriod::NOT_SET:
            return {};
          case AmazonopensearchserviceIndexRotationPeriod::NoRotation:
            return "NoRotation";
          case AmazonopensearchserviceIndexRotationPeriod::OneHour:
            return "OneHour";
          case AmazonopensearchserviceIndexRotationPeriod::OneDay:
            return "OneDay";
          case AmazonopensearchserviceIndexRotationPeriod::OneWeek:
            return "OneWeek";
          case AmazonopensearchserviceIndexRotationPeriod::OneMonth:
            return "OneMonth";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmazonopensearchserviceIndexRotationPeriodMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
