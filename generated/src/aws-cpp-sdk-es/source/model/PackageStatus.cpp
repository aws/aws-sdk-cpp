/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PackageStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace PackageStatusMapper
      {

        static const int COPYING_HASH = HashingUtils::HashString("COPYING");
        static const int COPY_FAILED_HASH = HashingUtils::HashString("COPY_FAILED");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        PackageStatus GetPackageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPYING_HASH)
          {
            return PackageStatus::COPYING;
          }
          else if (hashCode == COPY_FAILED_HASH)
          {
            return PackageStatus::COPY_FAILED;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return PackageStatus::VALIDATING;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return PackageStatus::VALIDATION_FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return PackageStatus::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PackageStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return PackageStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return PackageStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageStatus>(hashCode);
          }

          return PackageStatus::NOT_SET;
        }

        Aws::String GetNameForPackageStatus(PackageStatus enumValue)
        {
          switch(enumValue)
          {
          case PackageStatus::COPYING:
            return "COPYING";
          case PackageStatus::COPY_FAILED:
            return "COPY_FAILED";
          case PackageStatus::VALIDATING:
            return "VALIDATING";
          case PackageStatus::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case PackageStatus::AVAILABLE:
            return "AVAILABLE";
          case PackageStatus::DELETING:
            return "DELETING";
          case PackageStatus::DELETED:
            return "DELETED";
          case PackageStatus::DELETE_FAILED:
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

      } // namespace PackageStatusMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
