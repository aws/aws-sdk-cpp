/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/MetadataTransferJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace MetadataTransferJobStateMapper
      {

        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        MetadataTransferJobState GetMetadataTransferJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATING_HASH)
          {
            return MetadataTransferJobState::VALIDATING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return MetadataTransferJobState::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return MetadataTransferJobState::RUNNING;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return MetadataTransferJobState::CANCELLING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return MetadataTransferJobState::ERROR_;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MetadataTransferJobState::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return MetadataTransferJobState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataTransferJobState>(hashCode);
          }

          return MetadataTransferJobState::NOT_SET;
        }

        Aws::String GetNameForMetadataTransferJobState(MetadataTransferJobState enumValue)
        {
          switch(enumValue)
          {
          case MetadataTransferJobState::NOT_SET:
            return {};
          case MetadataTransferJobState::VALIDATING:
            return "VALIDATING";
          case MetadataTransferJobState::PENDING:
            return "PENDING";
          case MetadataTransferJobState::RUNNING:
            return "RUNNING";
          case MetadataTransferJobState::CANCELLING:
            return "CANCELLING";
          case MetadataTransferJobState::ERROR_:
            return "ERROR";
          case MetadataTransferJobState::COMPLETED:
            return "COMPLETED";
          case MetadataTransferJobState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataTransferJobStateMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
