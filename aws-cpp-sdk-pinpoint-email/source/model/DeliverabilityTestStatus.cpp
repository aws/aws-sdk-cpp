/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DeliverabilityTestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointEmail
  {
    namespace Model
    {
      namespace DeliverabilityTestStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        DeliverabilityTestStatus GetDeliverabilityTestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DeliverabilityTestStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DeliverabilityTestStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliverabilityTestStatus>(hashCode);
          }

          return DeliverabilityTestStatus::NOT_SET;
        }

        Aws::String GetNameForDeliverabilityTestStatus(DeliverabilityTestStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliverabilityTestStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DeliverabilityTestStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliverabilityTestStatusMapper
    } // namespace Model
  } // namespace PinpointEmail
} // namespace Aws
