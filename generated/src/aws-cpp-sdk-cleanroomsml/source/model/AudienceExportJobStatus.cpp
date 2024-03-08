/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceExportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace AudienceExportJobStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        AudienceExportJobStatus GetAudienceExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return AudienceExportJobStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return AudienceExportJobStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AudienceExportJobStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AudienceExportJobStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudienceExportJobStatus>(hashCode);
          }

          return AudienceExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForAudienceExportJobStatus(AudienceExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AudienceExportJobStatus::NOT_SET:
            return {};
          case AudienceExportJobStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case AudienceExportJobStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case AudienceExportJobStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AudienceExportJobStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudienceExportJobStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
