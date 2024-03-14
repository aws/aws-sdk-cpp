/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ActionsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace ActionsModeMapper
      {

        static const int skip_all_HASH = HashingUtils::HashString("skip-all");
        static const int run_all_HASH = HashingUtils::HashString("run-all");


        ActionsMode GetActionsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == skip_all_HASH)
          {
            return ActionsMode::skip_all;
          }
          else if (hashCode == run_all_HASH)
          {
            return ActionsMode::run_all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionsMode>(hashCode);
          }

          return ActionsMode::NOT_SET;
        }

        Aws::String GetNameForActionsMode(ActionsMode enumValue)
        {
          switch(enumValue)
          {
          case ActionsMode::NOT_SET:
            return {};
          case ActionsMode::skip_all:
            return "skip-all";
          case ActionsMode::run_all:
            return "run-all";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionsModeMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
