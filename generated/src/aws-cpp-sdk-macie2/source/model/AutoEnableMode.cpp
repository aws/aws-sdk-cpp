/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AutoEnableMode.h>
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
      namespace AutoEnableModeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AutoEnableMode GetAutoEnableModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return AutoEnableMode::ALL;
          }
          else if (hashCode == NEW__HASH)
          {
            return AutoEnableMode::NEW_;
          }
          else if (hashCode == NONE_HASH)
          {
            return AutoEnableMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoEnableMode>(hashCode);
          }

          return AutoEnableMode::NOT_SET;
        }

        Aws::String GetNameForAutoEnableMode(AutoEnableMode enumValue)
        {
          switch(enumValue)
          {
          case AutoEnableMode::NOT_SET:
            return {};
          case AutoEnableMode::ALL:
            return "ALL";
          case AutoEnableMode::NEW_:
            return "NEW";
          case AutoEnableMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoEnableModeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
