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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
