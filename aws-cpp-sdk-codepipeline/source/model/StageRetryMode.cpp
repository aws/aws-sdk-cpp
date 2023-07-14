/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageRetryMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace StageRetryModeMapper
      {

        static const int FAILED_ACTIONS_HASH = HashingUtils::HashString("FAILED_ACTIONS");


        StageRetryMode GetStageRetryModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_ACTIONS_HASH)
          {
            return StageRetryMode::FAILED_ACTIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StageRetryMode>(hashCode);
          }

          return StageRetryMode::NOT_SET;
        }

        Aws::String GetNameForStageRetryMode(StageRetryMode enumValue)
        {
          switch(enumValue)
          {
          case StageRetryMode::FAILED_ACTIONS:
            return "FAILED_ACTIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageRetryModeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
