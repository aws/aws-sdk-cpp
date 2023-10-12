/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchEntryCompletionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace BatchEntryCompletionStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        BatchEntryCompletionStatus GetBatchEntryCompletionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return BatchEntryCompletionStatus::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return BatchEntryCompletionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchEntryCompletionStatus>(hashCode);
          }

          return BatchEntryCompletionStatus::NOT_SET;
        }

        Aws::String GetNameForBatchEntryCompletionStatus(BatchEntryCompletionStatus enumValue)
        {
          switch(enumValue)
          {
          case BatchEntryCompletionStatus::NOT_SET:
            return {};
          case BatchEntryCompletionStatus::SUCCESS:
            return "SUCCESS";
          case BatchEntryCompletionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchEntryCompletionStatusMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
