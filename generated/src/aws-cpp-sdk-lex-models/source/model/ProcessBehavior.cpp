/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ProcessBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ProcessBehaviorMapper
      {

        static constexpr uint32_t SAVE_HASH = ConstExprHashingUtils::HashString("SAVE");
        static constexpr uint32_t BUILD_HASH = ConstExprHashingUtils::HashString("BUILD");


        ProcessBehavior GetProcessBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAVE_HASH)
          {
            return ProcessBehavior::SAVE;
          }
          else if (hashCode == BUILD_HASH)
          {
            return ProcessBehavior::BUILD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessBehavior>(hashCode);
          }

          return ProcessBehavior::NOT_SET;
        }

        Aws::String GetNameForProcessBehavior(ProcessBehavior enumValue)
        {
          switch(enumValue)
          {
          case ProcessBehavior::NOT_SET:
            return {};
          case ProcessBehavior::SAVE:
            return "SAVE";
          case ProcessBehavior::BUILD:
            return "BUILD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessBehaviorMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
