/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ElasticsearchIndexRotationPeriod.h>
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
      namespace ElasticsearchIndexRotationPeriodMapper
      {

        static constexpr uint32_t NoRotation_HASH = ConstExprHashingUtils::HashString("NoRotation");
        static constexpr uint32_t OneHour_HASH = ConstExprHashingUtils::HashString("OneHour");
        static constexpr uint32_t OneDay_HASH = ConstExprHashingUtils::HashString("OneDay");
        static constexpr uint32_t OneWeek_HASH = ConstExprHashingUtils::HashString("OneWeek");
        static constexpr uint32_t OneMonth_HASH = ConstExprHashingUtils::HashString("OneMonth");


        ElasticsearchIndexRotationPeriod GetElasticsearchIndexRotationPeriodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NoRotation_HASH)
          {
            return ElasticsearchIndexRotationPeriod::NoRotation;
          }
          else if (hashCode == OneHour_HASH)
          {
            return ElasticsearchIndexRotationPeriod::OneHour;
          }
          else if (hashCode == OneDay_HASH)
          {
            return ElasticsearchIndexRotationPeriod::OneDay;
          }
          else if (hashCode == OneWeek_HASH)
          {
            return ElasticsearchIndexRotationPeriod::OneWeek;
          }
          else if (hashCode == OneMonth_HASH)
          {
            return ElasticsearchIndexRotationPeriod::OneMonth;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElasticsearchIndexRotationPeriod>(hashCode);
          }

          return ElasticsearchIndexRotationPeriod::NOT_SET;
        }

        Aws::String GetNameForElasticsearchIndexRotationPeriod(ElasticsearchIndexRotationPeriod enumValue)
        {
          switch(enumValue)
          {
          case ElasticsearchIndexRotationPeriod::NOT_SET:
            return {};
          case ElasticsearchIndexRotationPeriod::NoRotation:
            return "NoRotation";
          case ElasticsearchIndexRotationPeriod::OneHour:
            return "OneHour";
          case ElasticsearchIndexRotationPeriod::OneDay:
            return "OneDay";
          case ElasticsearchIndexRotationPeriod::OneWeek:
            return "OneWeek";
          case ElasticsearchIndexRotationPeriod::OneMonth:
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

      } // namespace ElasticsearchIndexRotationPeriodMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
