/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceModelStatus.h>
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
      namespace AudienceModelStatusMapper
      {

        static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        AudienceModelStatus GetAudienceModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return AudienceModelStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return AudienceModelStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AudienceModelStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AudienceModelStatus::ACTIVE;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return AudienceModelStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return AudienceModelStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AudienceModelStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudienceModelStatus>(hashCode);
          }

          return AudienceModelStatus::NOT_SET;
        }

        Aws::String GetNameForAudienceModelStatus(AudienceModelStatus enumValue)
        {
          switch(enumValue)
          {
          case AudienceModelStatus::NOT_SET:
            return {};
          case AudienceModelStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case AudienceModelStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case AudienceModelStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AudienceModelStatus::ACTIVE:
            return "ACTIVE";
          case AudienceModelStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case AudienceModelStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case AudienceModelStatus::DELETE_FAILED:
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

      } // namespace AudienceModelStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
