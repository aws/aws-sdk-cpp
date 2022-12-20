/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/AutomaticTerminationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace AutomaticTerminationModeMapper
      {

        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");


        AutomaticTerminationMode GetAutomaticTerminationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEACTIVATED_HASH)
          {
            return AutomaticTerminationMode::DEACTIVATED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return AutomaticTerminationMode::ACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomaticTerminationMode>(hashCode);
          }

          return AutomaticTerminationMode::NOT_SET;
        }

        Aws::String GetNameForAutomaticTerminationMode(AutomaticTerminationMode enumValue)
        {
          switch(enumValue)
          {
          case AutomaticTerminationMode::DEACTIVATED:
            return "DEACTIVATED";
          case AutomaticTerminationMode::ACTIVATED:
            return "ACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomaticTerminationModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
