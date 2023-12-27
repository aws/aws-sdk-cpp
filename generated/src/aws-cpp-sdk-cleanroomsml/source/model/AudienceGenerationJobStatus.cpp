/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceGenerationJobStatus.h>
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
      namespace AudienceGenerationJobStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        AudienceGenerationJobStatus GetAudienceGenerationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return AudienceGenerationJobStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return AudienceGenerationJobStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AudienceGenerationJobStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AudienceGenerationJobStatus::ACTIVE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return AudienceGenerationJobStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return AudienceGenerationJobStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AudienceGenerationJobStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudienceGenerationJobStatus>(hashCode);
          }

          return AudienceGenerationJobStatus::NOT_SET;
        }

        Aws::String GetNameForAudienceGenerationJobStatus(AudienceGenerationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case AudienceGenerationJobStatus::NOT_SET:
            return {};
          case AudienceGenerationJobStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case AudienceGenerationJobStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case AudienceGenerationJobStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AudienceGenerationJobStatus::ACTIVE:
            return "ACTIVE";
          case AudienceGenerationJobStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case AudienceGenerationJobStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case AudienceGenerationJobStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudienceGenerationJobStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
