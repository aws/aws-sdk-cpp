/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int CreatingSnapshot_HASH = HashingUtils::HashString("CreatingSnapshot");
        static const int UpdatingSchema_HASH = HashingUtils::HashString("UpdatingSchema");
        static const int Replicating_HASH = HashingUtils::HashString("Replicating");
        static const int CancelInProgress_HASH = HashingUtils::HashString("CancelInProgress");
        static const int RollbackInProgress_HASH = HashingUtils::HashString("RollbackInProgress");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Completed_HASH = HashingUtils::HashString("Completed");


        SchemaExtensionStatus GetSchemaExtensionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace SchemaExtensionStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
