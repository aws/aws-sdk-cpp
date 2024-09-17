/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupOriginRestrictionMode.h>
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
      namespace PackageGroupOriginRestrictionModeMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int ALLOW_SPECIFIC_REPOSITORIES_HASH = HashingUtils::HashString("ALLOW_SPECIFIC_REPOSITORIES");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int INHERIT_HASH = HashingUtils::HashString("INHERIT");


        PackageGroupOriginRestrictionMode GetPackageGroupOriginRestrictionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return PackageGroupOriginRestrictionMode::ALLOW;
          }
          else if (hashCode == ALLOW_SPECIFIC_REPOSITORIES_HASH)
          {
            return PackageGroupOriginRestrictionMode::ALLOW_SPECIFIC_REPOSITORIES;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return PackageGroupOriginRestrictionMode::BLOCK;
          }
          else if (hashCode == INHERIT_HASH)
          {
            return PackageGroupOriginRestrictionMode::INHERIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageGroupOriginRestrictionMode>(hashCode);
          }

          return PackageGroupOriginRestrictionMode::NOT_SET;
        }

        Aws::String GetNameForPackageGroupOriginRestrictionMode(PackageGroupOriginRestrictionMode enumValue)
        {
          switch(enumValue)
          {
          case PackageGroupOriginRestrictionMode::NOT_SET:
            return {};
          case PackageGroupOriginRestrictionMode::ALLOW:
            return "ALLOW";
          case PackageGroupOriginRestrictionMode::ALLOW_SPECIFIC_REPOSITORIES:
            return "ALLOW_SPECIFIC_REPOSITORIES";
          case PackageGroupOriginRestrictionMode::BLOCK:
            return "BLOCK";
          case PackageGroupOriginRestrictionMode::INHERIT:
            return "INHERIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageGroupOriginRestrictionModeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
