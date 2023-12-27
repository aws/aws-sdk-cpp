/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/FuotaTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace FuotaTaskStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int FuotaSession_Waiting_HASH = HashingUtils::HashString("FuotaSession_Waiting");
        static const int In_FuotaSession_HASH = HashingUtils::HashString("In_FuotaSession");
        static const int FuotaDone_HASH = HashingUtils::HashString("FuotaDone");
        static const int Delete_Waiting_HASH = HashingUtils::HashString("Delete_Waiting");


        FuotaTaskStatus GetFuotaTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return FuotaTaskStatus::Pending;
          }
          else if (hashCode == FuotaSession_Waiting_HASH)
          {
            return FuotaTaskStatus::FuotaSession_Waiting;
          }
          else if (hashCode == In_FuotaSession_HASH)
          {
            return FuotaTaskStatus::In_FuotaSession;
          }
          else if (hashCode == FuotaDone_HASH)
          {
            return FuotaTaskStatus::FuotaDone;
          }
          else if (hashCode == Delete_Waiting_HASH)
          {
            return FuotaTaskStatus::Delete_Waiting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FuotaTaskStatus>(hashCode);
          }

          return FuotaTaskStatus::NOT_SET;
        }

        Aws::String GetNameForFuotaTaskStatus(FuotaTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case FuotaTaskStatus::NOT_SET:
            return {};
          case FuotaTaskStatus::Pending:
            return "Pending";
          case FuotaTaskStatus::FuotaSession_Waiting:
            return "FuotaSession_Waiting";
          case FuotaTaskStatus::In_FuotaSession:
            return "In_FuotaSession";
          case FuotaTaskStatus::FuotaDone:
            return "FuotaDone";
          case FuotaTaskStatus::Delete_Waiting:
            return "Delete_Waiting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FuotaTaskStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
