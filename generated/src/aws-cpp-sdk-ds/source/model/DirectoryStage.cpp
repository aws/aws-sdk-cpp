/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryStage.h>
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
      namespace DirectoryStageMapper
      {

        static constexpr uint32_t Requested_HASH = ConstExprHashingUtils::HashString("Requested");
        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inoperable_HASH = ConstExprHashingUtils::HashString("Inoperable");
        static constexpr uint32_t Impaired_HASH = ConstExprHashingUtils::HashString("Impaired");
        static constexpr uint32_t Restoring_HASH = ConstExprHashingUtils::HashString("Restoring");
        static constexpr uint32_t RestoreFailed_HASH = ConstExprHashingUtils::HashString("RestoreFailed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        DirectoryStage GetDirectoryStageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Requested_HASH)
          {
            return DirectoryStage::Requested;
          }
          else if (hashCode == Creating_HASH)
          {
            return DirectoryStage::Creating;
          }
          else if (hashCode == Created_HASH)
          {
            return DirectoryStage::Created;
          }
          else if (hashCode == Active_HASH)
          {
            return DirectoryStage::Active;
          }
          else if (hashCode == Inoperable_HASH)
          {
            return DirectoryStage::Inoperable;
          }
          else if (hashCode == Impaired_HASH)
          {
            return DirectoryStage::Impaired;
          }
          else if (hashCode == Restoring_HASH)
          {
            return DirectoryStage::Restoring;
          }
          else if (hashCode == RestoreFailed_HASH)
          {
            return DirectoryStage::RestoreFailed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return DirectoryStage::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return DirectoryStage::Deleted;
          }
          else if (hashCode == Failed_HASH)
          {
            return DirectoryStage::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryStage>(hashCode);
          }

          return DirectoryStage::NOT_SET;
        }

        Aws::String GetNameForDirectoryStage(DirectoryStage enumValue)
        {
          switch(enumValue)
          {
          case DirectoryStage::NOT_SET:
            return {};
          case DirectoryStage::Requested:
            return "Requested";
          case DirectoryStage::Creating:
            return "Creating";
          case DirectoryStage::Created:
            return "Created";
          case DirectoryStage::Active:
            return "Active";
          case DirectoryStage::Inoperable:
            return "Inoperable";
          case DirectoryStage::Impaired:
            return "Impaired";
          case DirectoryStage::Restoring:
            return "Restoring";
          case DirectoryStage::RestoreFailed:
            return "RestoreFailed";
          case DirectoryStage::Deleting:
            return "Deleting";
          case DirectoryStage::Deleted:
            return "Deleted";
          case DirectoryStage::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryStageMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
