/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/SeverityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace SeverityLevelMapper
      {

        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        SeverityLevel GetSeverityLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Low_HASH)
          {
            return SeverityLevel::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return SeverityLevel::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return SeverityLevel::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SeverityLevel>(hashCode);
          }

          return SeverityLevel::NOT_SET;
        }

        Aws::String GetNameForSeverityLevel(SeverityLevel enumValue)
        {
          switch(enumValue)
          {
          case SeverityLevel::Low:
            return "Low";
          case SeverityLevel::Medium:
            return "Medium";
          case SeverityLevel::High:
            return "High";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeverityLevelMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
