/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/TerminationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace TerminationModeMapper
      {

        static const int TRIGGER_ON_PROCESS_TERMINATE_HASH = HashingUtils::HashString("TRIGGER_ON_PROCESS_TERMINATE");
        static const int FORCE_TERMINATE_HASH = HashingUtils::HashString("FORCE_TERMINATE");


        TerminationMode GetTerminationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIGGER_ON_PROCESS_TERMINATE_HASH)
          {
            return TerminationMode::TRIGGER_ON_PROCESS_TERMINATE;
          }
          else if (hashCode == FORCE_TERMINATE_HASH)
          {
            return TerminationMode::FORCE_TERMINATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TerminationMode>(hashCode);
          }

          return TerminationMode::NOT_SET;
        }

        Aws::String GetNameForTerminationMode(TerminationMode enumValue)
        {
          switch(enumValue)
          {
          case TerminationMode::NOT_SET:
            return {};
          case TerminationMode::TRIGGER_ON_PROCESS_TERMINATE:
            return "TRIGGER_ON_PROCESS_TERMINATE";
          case TerminationMode::FORCE_TERMINATE:
            return "FORCE_TERMINATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TerminationModeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
