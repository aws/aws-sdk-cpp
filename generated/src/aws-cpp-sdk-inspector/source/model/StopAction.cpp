/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/StopAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace StopActionMapper
      {

        static constexpr uint32_t START_EVALUATION_HASH = ConstExprHashingUtils::HashString("START_EVALUATION");
        static constexpr uint32_t SKIP_EVALUATION_HASH = ConstExprHashingUtils::HashString("SKIP_EVALUATION");


        StopAction GetStopActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_EVALUATION_HASH)
          {
            return StopAction::START_EVALUATION;
          }
          else if (hashCode == SKIP_EVALUATION_HASH)
          {
            return StopAction::SKIP_EVALUATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopAction>(hashCode);
          }

          return StopAction::NOT_SET;
        }

        Aws::String GetNameForStopAction(StopAction enumValue)
        {
          switch(enumValue)
          {
          case StopAction::NOT_SET:
            return {};
          case StopAction::START_EVALUATION:
            return "START_EVALUATION";
          case StopAction::SKIP_EVALUATION:
            return "SKIP_EVALUATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopActionMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
