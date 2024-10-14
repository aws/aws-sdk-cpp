/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RetryTrigger.h>
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
      namespace RetryTriggerMapper
      {

        static const int AutomatedStageRetry_HASH = HashingUtils::HashString("AutomatedStageRetry");
        static const int ManualStageRetry_HASH = HashingUtils::HashString("ManualStageRetry");


        RetryTrigger GetRetryTriggerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AutomatedStageRetry_HASH)
          {
            return RetryTrigger::AutomatedStageRetry;
          }
          else if (hashCode == ManualStageRetry_HASH)
          {
            return RetryTrigger::ManualStageRetry;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetryTrigger>(hashCode);
          }

          return RetryTrigger::NOT_SET;
        }

        Aws::String GetNameForRetryTrigger(RetryTrigger enumValue)
        {
          switch(enumValue)
          {
          case RetryTrigger::NOT_SET:
            return {};
          case RetryTrigger::AutomatedStageRetry:
            return "AutomatedStageRetry";
          case RetryTrigger::ManualStageRetry:
            return "ManualStageRetry";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetryTriggerMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
