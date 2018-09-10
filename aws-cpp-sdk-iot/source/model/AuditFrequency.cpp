﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int DAILY_HASH = HashingUtils::HashString("DAILY");
        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int BIWEEKLY_HASH = HashingUtils::HashString("BIWEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        AuditFrequency GetAuditFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace AuditFrequencyMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
