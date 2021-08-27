/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrefixFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace PrefixFormatMapper
      {

        static const int YEAR_HASH = HashingUtils::HashString("YEAR");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int MINUTE_HASH = HashingUtils::HashString("MINUTE");


        PrefixFormat GetPrefixFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YEAR_HASH)
          {
            return PrefixFormat::YEAR;
          }
          else if (hashCode == MONTH_HASH)
          {
            return PrefixFormat::MONTH;
          }
          else if (hashCode == DAY_HASH)
          {
            return PrefixFormat::DAY;
          }
          else if (hashCode == HOUR_HASH)
          {
            return PrefixFormat::HOUR;
          }
          else if (hashCode == MINUTE_HASH)
          {
            return PrefixFormat::MINUTE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrefixFormat>(hashCode);
          }

          return PrefixFormat::NOT_SET;
        }

        Aws::String GetNameForPrefixFormat(PrefixFormat enumValue)
        {
          switch(enumValue)
          {
          case PrefixFormat::YEAR:
            return "YEAR";
          case PrefixFormat::MONTH:
            return "MONTH";
          case PrefixFormat::DAY:
            return "DAY";
          case PrefixFormat::HOUR:
            return "HOUR";
          case PrefixFormat::MINUTE:
            return "MINUTE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrefixFormatMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
