/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EirpUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace EirpUnitsMapper
      {

        static const int dBW_HASH = HashingUtils::HashString("dBW");


        EirpUnits GetEirpUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == dBW_HASH)
          {
            return EirpUnits::dBW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EirpUnits>(hashCode);
          }

          return EirpUnits::NOT_SET;
        }

        Aws::String GetNameForEirpUnits(EirpUnits enumValue)
        {
          switch(enumValue)
          {
          case EirpUnits::dBW:
            return "dBW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EirpUnitsMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
