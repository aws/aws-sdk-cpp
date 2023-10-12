/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DELETION_FAILED_HASH = ConstExprHashingUtils::HashString("DELETION_FAILED");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return DomainStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DomainStatus::AVAILABLE;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return DomainStatus::CREATION_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DomainStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DomainStatus::DELETED;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return DomainStatus::DELETION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::NOT_SET:
            return {};
          case DomainStatus::CREATING:
            return "CREATING";
          case DomainStatus::AVAILABLE:
            return "AVAILABLE";
          case DomainStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case DomainStatus::DELETING:
            return "DELETING";
          case DomainStatus::DELETED:
            return "DELETED";
          case DomainStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
