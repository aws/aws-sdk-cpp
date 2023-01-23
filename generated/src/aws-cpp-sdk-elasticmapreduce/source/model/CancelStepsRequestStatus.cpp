/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CancelStepsRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace CancelStepsRequestStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CancelStepsRequestStatus GetCancelStepsRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return CancelStepsRequestStatus::SUBMITTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CancelStepsRequestStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancelStepsRequestStatus>(hashCode);
          }

          return CancelStepsRequestStatus::NOT_SET;
        }

        Aws::String GetNameForCancelStepsRequestStatus(CancelStepsRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case CancelStepsRequestStatus::SUBMITTED:
            return "SUBMITTED";
          case CancelStepsRequestStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancelStepsRequestStatusMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
