/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Unit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace UnitMapper
      {

        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int PERCENT_HASH = HashingUtils::HashString("PERCENT");


        Unit GetUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECONDS_HASH)
          {
            return Unit::SECONDS;
          }
          else if (hashCode == COUNT_HASH)
          {
            return Unit::COUNT;
          }
          else if (hashCode == PERCENT_HASH)
          {
            return Unit::PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Unit>(hashCode);
          }

          return Unit::NOT_SET;
        }

        Aws::String GetNameForUnit(Unit enumValue)
        {
          switch(enumValue)
          {
          case Unit::SECONDS:
            return "SECONDS";
          case Unit::COUNT:
            return "COUNT";
          case Unit::PERCENT:
            return "PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnitMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
