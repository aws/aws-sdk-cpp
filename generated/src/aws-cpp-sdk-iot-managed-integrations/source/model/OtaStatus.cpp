/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace OtaStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");


        OtaStatus GetOtaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return OtaStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return OtaStatus::CANCELED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return OtaStatus::COMPLETED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return OtaStatus::DELETION_IN_PROGRESS;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return OtaStatus::SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OtaStatus>(hashCode);
          }

          return OtaStatus::NOT_SET;
        }

        Aws::String GetNameForOtaStatus(OtaStatus enumValue)
        {
          switch(enumValue)
          {
          case OtaStatus::NOT_SET:
            return {};
          case OtaStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case OtaStatus::CANCELED:
            return "CANCELED";
          case OtaStatus::COMPLETED:
            return "COMPLETED";
          case OtaStatus::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case OtaStatus::SCHEDULED:
            return "SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OtaStatusMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
