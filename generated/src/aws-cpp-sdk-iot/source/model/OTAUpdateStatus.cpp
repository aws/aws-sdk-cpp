/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/OTAUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace OTAUpdateStatusMapper
      {

        static constexpr uint32_t CREATE_PENDING_HASH = ConstExprHashingUtils::HashString("CREATE_PENDING");
        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t CREATE_COMPLETE_HASH = ConstExprHashingUtils::HashString("CREATE_COMPLETE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        OTAUpdateStatus GetOTAUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_PENDING_HASH)
          {
            return OTAUpdateStatus::CREATE_PENDING;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return OTAUpdateStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return OTAUpdateStatus::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return OTAUpdateStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return OTAUpdateStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return OTAUpdateStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OTAUpdateStatus>(hashCode);
          }

          return OTAUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForOTAUpdateStatus(OTAUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case OTAUpdateStatus::NOT_SET:
            return {};
          case OTAUpdateStatus::CREATE_PENDING:
            return "CREATE_PENDING";
          case OTAUpdateStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case OTAUpdateStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case OTAUpdateStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case OTAUpdateStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case OTAUpdateStatus::DELETE_FAILED:
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

      } // namespace OTAUpdateStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
