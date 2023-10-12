/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/IntendedUse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace IntendedUseMapper
      {

        static constexpr uint32_t SingleUse_HASH = ConstExprHashingUtils::HashString("SingleUse");
        static constexpr uint32_t Storage_HASH = ConstExprHashingUtils::HashString("Storage");


        IntendedUse GetIntendedUseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return IntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return IntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntendedUse>(hashCode);
          }

          return IntendedUse::NOT_SET;
        }

        Aws::String GetNameForIntendedUse(IntendedUse enumValue)
        {
          switch(enumValue)
          {
          case IntendedUse::NOT_SET:
            return {};
          case IntendedUse::SingleUse:
            return "SingleUse";
          case IntendedUse::Storage:
            return "Storage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntendedUseMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
