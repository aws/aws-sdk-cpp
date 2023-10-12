/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/RevealRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace RevealRequestStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        RevealRequestStatus GetRevealRequestStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return RevealRequestStatus::SUCCESS;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return RevealRequestStatus::PROCESSING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return RevealRequestStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevealRequestStatus>(hashCode);
          }

          return RevealRequestStatus::NOT_SET;
        }

        Aws::String GetNameForRevealRequestStatus(RevealRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case RevealRequestStatus::NOT_SET:
            return {};
          case RevealRequestStatus::SUCCESS:
            return "SUCCESS";
          case RevealRequestStatus::PROCESSING:
            return "PROCESSING";
          case RevealRequestStatus::ERROR_:
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

      } // namespace RevealRequestStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
