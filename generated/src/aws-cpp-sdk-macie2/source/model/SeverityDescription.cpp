/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SeverityDescription.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SeverityDescriptionMapper
      {

        static const int Low_HASH = HashingUtils::HashString("Low");
        static const int Medium_HASH = HashingUtils::HashString("Medium");
        static const int High_HASH = HashingUtils::HashString("High");


        SeverityDescription GetSeverityDescriptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Low_HASH)
          {
            return SeverityDescription::Low;
          }
          else if (hashCode == Medium_HASH)
          {
            return SeverityDescription::Medium;
          }
          else if (hashCode == High_HASH)
          {
            return SeverityDescription::High;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SeverityDescription>(hashCode);
          }

          return SeverityDescription::NOT_SET;
        }

        Aws::String GetNameForSeverityDescription(SeverityDescription enumValue)
        {
          switch(enumValue)
          {
          case SeverityDescription::Low:
            return "Low";
          case SeverityDescription::Medium:
            return "Medium";
          case SeverityDescription::High:
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

      } // namespace SeverityDescriptionMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
