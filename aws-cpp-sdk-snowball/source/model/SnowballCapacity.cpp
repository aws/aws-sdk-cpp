/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballCapacityMapper
      {

        static const int T50_HASH = HashingUtils::HashString("T50");
        static const int T80_HASH = HashingUtils::HashString("T80");
        static const int T100_HASH = HashingUtils::HashString("T100");
        static const int T42_HASH = HashingUtils::HashString("T42");
        static const int T98_HASH = HashingUtils::HashString("T98");
        static const int T8_HASH = HashingUtils::HashString("T8");
        static const int T14_HASH = HashingUtils::HashString("T14");
        static const int NoPreference_HASH = HashingUtils::HashString("NoPreference");
        static const int T32_HASH = HashingUtils::HashString("T32");


        SnowballCapacity GetSnowballCapacityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == T50_HASH)
          {
            return SnowballCapacity::T50;
          }
          else if (hashCode == T80_HASH)
          {
            return SnowballCapacity::T80;
          }
          else if (hashCode == T100_HASH)
          {
            return SnowballCapacity::T100;
          }
          else if (hashCode == T42_HASH)
          {
            return SnowballCapacity::T42;
          }
          else if (hashCode == T98_HASH)
          {
            return SnowballCapacity::T98;
          }
          else if (hashCode == T8_HASH)
          {
            return SnowballCapacity::T8;
          }
          else if (hashCode == T14_HASH)
          {
            return SnowballCapacity::T14;
          }
          else if (hashCode == NoPreference_HASH)
          {
            return SnowballCapacity::NoPreference;
          }
          else if (hashCode == T32_HASH)
          {
            return SnowballCapacity::T32;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballCapacity>(hashCode);
          }

          return SnowballCapacity::NOT_SET;
        }

        Aws::String GetNameForSnowballCapacity(SnowballCapacity enumValue)
        {
          switch(enumValue)
          {
          case SnowballCapacity::T50:
            return "T50";
          case SnowballCapacity::T80:
            return "T80";
          case SnowballCapacity::T100:
            return "T100";
          case SnowballCapacity::T42:
            return "T42";
          case SnowballCapacity::T98:
            return "T98";
          case SnowballCapacity::T8:
            return "T8";
          case SnowballCapacity::T14:
            return "T14";
          case SnowballCapacity::NoPreference:
            return "NoPreference";
          case SnowballCapacity::T32:
            return "T32";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowballCapacityMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
