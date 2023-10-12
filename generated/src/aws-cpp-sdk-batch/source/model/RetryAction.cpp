/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RetryAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace RetryActionMapper
      {

        static constexpr uint32_t RETRY_HASH = ConstExprHashingUtils::HashString("RETRY");
        static constexpr uint32_t EXIT_HASH = ConstExprHashingUtils::HashString("EXIT");


        RetryAction GetRetryActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETRY_HASH)
          {
            return RetryAction::RETRY;
          }
          else if (hashCode == EXIT_HASH)
          {
            return RetryAction::EXIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetryAction>(hashCode);
          }

          return RetryAction::NOT_SET;
        }

        Aws::String GetNameForRetryAction(RetryAction enumValue)
        {
          switch(enumValue)
          {
          case RetryAction::NOT_SET:
            return {};
          case RetryAction::RETRY:
            return "RETRY";
          case RetryAction::EXIT:
            return "EXIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetryActionMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
