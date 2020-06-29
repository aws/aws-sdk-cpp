/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace PackageVersionStatusMapper
      {

        static const int Published_HASH = HashingUtils::HashString("Published");
        static const int Unfinished_HASH = HashingUtils::HashString("Unfinished");
        static const int Unlisted_HASH = HashingUtils::HashString("Unlisted");
        static const int Archived_HASH = HashingUtils::HashString("Archived");
        static const int Disposed_HASH = HashingUtils::HashString("Disposed");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Published_HASH)
          {
            return PackageVersionStatus::Published;
          }
          else if (hashCode == Unfinished_HASH)
          {
            return PackageVersionStatus::Unfinished;
          }
          else if (hashCode == Unlisted_HASH)
          {
            return PackageVersionStatus::Unlisted;
          }
          else if (hashCode == Archived_HASH)
          {
            return PackageVersionStatus::Archived;
          }
          else if (hashCode == Disposed_HASH)
          {
            return PackageVersionStatus::Disposed;
          }
          else if (hashCode == Deleted_HASH)
          {
            return PackageVersionStatus::Deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionStatus>(hashCode);
          }

          return PackageVersionStatus::NOT_SET;
        }

        Aws::String GetNameForPackageVersionStatus(PackageVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionStatus::Published:
            return "Published";
          case PackageVersionStatus::Unfinished:
            return "Unfinished";
          case PackageVersionStatus::Unlisted:
            return "Unlisted";
          case PackageVersionStatus::Archived:
            return "Archived";
          case PackageVersionStatus::Disposed:
            return "Disposed";
          case PackageVersionStatus::Deleted:
            return "Deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageVersionStatusMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
