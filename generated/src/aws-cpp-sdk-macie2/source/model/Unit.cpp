/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Unit.h>
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
      namespace UnitMapper
      {

        static const int TERABYTES_HASH = HashingUtils::HashString("TERABYTES");


        Unit GetUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERABYTES_HASH)
          {
            return Unit::TERABYTES;
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
          case Unit::TERABYTES:
            return "TERABYTES";
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
  } // namespace Macie2
} // namespace Aws
