/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DomainControllerStatus.h>
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
      namespace DomainControllerStatusMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Impaired_HASH = ConstExprHashingUtils::HashString("Impaired");
        static constexpr uint32_t Restoring_HASH = ConstExprHashingUtils::HashString("Restoring");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        DomainControllerStatus GetDomainControllerStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return DomainControllerStatus::Creating;
          }
          else if (hashCode == Active_HASH)
          {
            return DomainControllerStatus::Active;
          }
          else if (hashCode == Impaired_HASH)
          {
            return DomainControllerStatus::Impaired;
          }
          else if (hashCode == Restoring_HASH)
          {
            return DomainControllerStatus::Restoring;
          }
          else if (hashCode == Deleting_HASH)
          {
            return DomainControllerStatus::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return DomainControllerStatus::Deleted;
          }
          else if (hashCode == Failed_HASH)
          {
            return DomainControllerStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainControllerStatus>(hashCode);
          }

          return DomainControllerStatus::NOT_SET;
        }

        Aws::String GetNameForDomainControllerStatus(DomainControllerStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainControllerStatus::NOT_SET:
            return {};
          case DomainControllerStatus::Creating:
            return "Creating";
          case DomainControllerStatus::Active:
            return "Active";
          case DomainControllerStatus::Impaired:
            return "Impaired";
          case DomainControllerStatus::Restoring:
            return "Restoring";
          case DomainControllerStatus::Deleting:
            return "Deleting";
          case DomainControllerStatus::Deleted:
            return "Deleted";
          case DomainControllerStatus::Failed:
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

      } // namespace DomainControllerStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
