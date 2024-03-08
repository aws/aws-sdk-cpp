/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/EbsSnapshotPreservation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace EbsSnapshotPreservationMapper
      {

        static const int NO_RETENTION_HASH = HashingUtils::HashString("NO_RETENTION");
        static const int RETENTION_WITH_FINDING_HASH = HashingUtils::HashString("RETENTION_WITH_FINDING");


        EbsSnapshotPreservation GetEbsSnapshotPreservationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_RETENTION_HASH)
          {
            return EbsSnapshotPreservation::NO_RETENTION;
          }
          else if (hashCode == RETENTION_WITH_FINDING_HASH)
          {
            return EbsSnapshotPreservation::RETENTION_WITH_FINDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsSnapshotPreservation>(hashCode);
          }

          return EbsSnapshotPreservation::NOT_SET;
        }

        Aws::String GetNameForEbsSnapshotPreservation(EbsSnapshotPreservation enumValue)
        {
          switch(enumValue)
          {
          case EbsSnapshotPreservation::NOT_SET:
            return {};
          case EbsSnapshotPreservation::NO_RETENTION:
            return "NO_RETENTION";
          case EbsSnapshotPreservation::RETENTION_WITH_FINDING:
            return "RETENTION_WITH_FINDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsSnapshotPreservationMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
