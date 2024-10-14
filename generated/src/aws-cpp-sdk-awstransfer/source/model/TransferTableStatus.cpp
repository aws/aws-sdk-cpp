/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/TransferTableStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace TransferTableStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        TransferTableStatus GetTransferTableStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return TransferTableStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TransferTableStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TransferTableStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TransferTableStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransferTableStatus>(hashCode);
          }

          return TransferTableStatus::NOT_SET;
        }

        Aws::String GetNameForTransferTableStatus(TransferTableStatus enumValue)
        {
          switch(enumValue)
          {
          case TransferTableStatus::NOT_SET:
            return {};
          case TransferTableStatus::QUEUED:
            return "QUEUED";
          case TransferTableStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TransferTableStatus::COMPLETED:
            return "COMPLETED";
          case TransferTableStatus::FAILED:
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

      } // namespace TransferTableStatusMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
