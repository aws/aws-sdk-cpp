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

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        RevealRequestStatus GetRevealRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
