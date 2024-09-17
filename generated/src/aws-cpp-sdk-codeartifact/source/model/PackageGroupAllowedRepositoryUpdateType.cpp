/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupAllowedRepositoryUpdateType.h>
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
      namespace PackageGroupAllowedRepositoryUpdateTypeMapper
      {

        static const int ADDED_HASH = HashingUtils::HashString("ADDED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");


        PackageGroupAllowedRepositoryUpdateType GetPackageGroupAllowedRepositoryUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADDED_HASH)
          {
            return PackageGroupAllowedRepositoryUpdateType::ADDED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return PackageGroupAllowedRepositoryUpdateType::REMOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageGroupAllowedRepositoryUpdateType>(hashCode);
          }

          return PackageGroupAllowedRepositoryUpdateType::NOT_SET;
        }

        Aws::String GetNameForPackageGroupAllowedRepositoryUpdateType(PackageGroupAllowedRepositoryUpdateType enumValue)
        {
          switch(enumValue)
          {
          case PackageGroupAllowedRepositoryUpdateType::NOT_SET:
            return {};
          case PackageGroupAllowedRepositoryUpdateType::ADDED:
            return "ADDED";
          case PackageGroupAllowedRepositoryUpdateType::REMOVED:
            return "REMOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageGroupAllowedRepositoryUpdateTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
