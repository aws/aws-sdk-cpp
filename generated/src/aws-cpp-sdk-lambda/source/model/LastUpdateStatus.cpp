/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/LastUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace LastUpdateStatusMapper
      {

        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");


        LastUpdateStatus GetLastUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Successful_HASH)
          {
            return LastUpdateStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return LastUpdateStatus::Failed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return LastUpdateStatus::InProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatus>(hashCode);
          }

          return LastUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatus(LastUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatus::NOT_SET:
            return {};
          case LastUpdateStatus::Successful:
            return "Successful";
          case LastUpdateStatus::Failed:
            return "Failed";
          case LastUpdateStatus::InProgress:
            return "InProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastUpdateStatusMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
