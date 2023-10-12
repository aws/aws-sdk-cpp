/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SchemaExtensionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace SchemaExtensionStatusMapper
      {

        static constexpr uint32_t Initializing_HASH = ConstExprHashingUtils::HashString("Initializing");
        static constexpr uint32_t CreatingSnapshot_HASH = ConstExprHashingUtils::HashString("CreatingSnapshot");
        static constexpr uint32_t UpdatingSchema_HASH = ConstExprHashingUtils::HashString("UpdatingSchema");
        static constexpr uint32_t Replicating_HASH = ConstExprHashingUtils::HashString("Replicating");
        static constexpr uint32_t CancelInProgress_HASH = ConstExprHashingUtils::HashString("CancelInProgress");
        static constexpr uint32_t RollbackInProgress_HASH = ConstExprHashingUtils::HashString("RollbackInProgress");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");


        SchemaExtensionStatus GetSchemaExtensionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initializing_HASH)
          {
            return SchemaExtensionStatus::Initializing;
          }
          else if (hashCode == CreatingSnapshot_HASH)
          {
            return SchemaExtensionStatus::CreatingSnapshot;
          }
          else if (hashCode == UpdatingSchema_HASH)
          {
            return SchemaExtensionStatus::UpdatingSchema;
          }
          else if (hashCode == Replicating_HASH)
          {
            return SchemaExtensionStatus::Replicating;
          }
          else if (hashCode == CancelInProgress_HASH)
          {
            return SchemaExtensionStatus::CancelInProgress;
          }
          else if (hashCode == RollbackInProgress_HASH)
          {
            return SchemaExtensionStatus::RollbackInProgress;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return SchemaExtensionStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return SchemaExtensionStatus::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return SchemaExtensionStatus::Completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaExtensionStatus>(hashCode);
          }

          return SchemaExtensionStatus::NOT_SET;
        }

        Aws::String GetNameForSchemaExtensionStatus(SchemaExtensionStatus enumValue)
        {
          switch(enumValue)
          {
          case SchemaExtensionStatus::NOT_SET:
            return {};
          case SchemaExtensionStatus::Initializing:
            return "Initializing";
          case SchemaExtensionStatus::CreatingSnapshot:
            return "CreatingSnapshot";
          case SchemaExtensionStatus::UpdatingSchema:
            return "UpdatingSchema";
          case SchemaExtensionStatus::Replicating:
            return "Replicating";
          case SchemaExtensionStatus::CancelInProgress:
            return "CancelInProgress";
          case SchemaExtensionStatus::RollbackInProgress:
            return "RollbackInProgress";
          case SchemaExtensionStatus::Cancelled:
            return "Cancelled";
          case SchemaExtensionStatus::Failed:
            return "Failed";
          case SchemaExtensionStatus::Completed:
            return "Completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaExtensionStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
