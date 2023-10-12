/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditFrequencyMapper
      {

        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t WEEKLY_HASH = ConstExprHashingUtils::HashString("WEEKLY");
        static constexpr uint32_t BIWEEKLY_HASH = ConstExprHashingUtils::HashString("BIWEEKLY");
        static constexpr uint32_t MONTHLY_HASH = ConstExprHashingUtils::HashString("MONTHLY");


        AuditFrequency GetAuditFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return AuditFrequency::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return AuditFrequency::WEEKLY;
          }
          else if (hashCode == BIWEEKLY_HASH)
          {
            return AuditFrequency::BIWEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return AuditFrequency::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditFrequency>(hashCode);
          }

          return AuditFrequency::NOT_SET;
        }

        Aws::String GetNameForAuditFrequency(AuditFrequency enumValue)
        {
          switch(enumValue)
          {
          case AuditFrequency::NOT_SET:
            return {};
          case AuditFrequency::DAILY:
            return "DAILY";
          case AuditFrequency::WEEKLY:
            return "WEEKLY";
          case AuditFrequency::BIWEEKLY:
            return "BIWEEKLY";
          case AuditFrequency::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditFrequencyMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
