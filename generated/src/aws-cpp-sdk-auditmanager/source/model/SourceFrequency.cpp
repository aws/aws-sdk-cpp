/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/SourceFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace SourceFrequencyMapper
      {

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        SourceFrequency GetSourceFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return SourceFrequency::DAILY;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return SourceFrequency::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return SourceFrequency::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceFrequency>(hashCode);
          }

          return SourceFrequency::NOT_SET;
        }

        Aws::String GetNameForSourceFrequency(SourceFrequency enumValue)
        {
          switch(enumValue)
          {
          case SourceFrequency::NOT_SET:
            return {};
          case SourceFrequency::DAILY:
            return "DAILY";
          case SourceFrequency::WEEKLY:
            return "WEEKLY";
          case SourceFrequency::MONTHLY:
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

      } // namespace SourceFrequencyMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
