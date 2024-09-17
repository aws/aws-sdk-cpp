/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
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
      namespace PackageGroupOriginRestrictionTypeMapper
      {

        static const int EXTERNAL_UPSTREAM_HASH = HashingUtils::HashString("EXTERNAL_UPSTREAM");
        static const int INTERNAL_UPSTREAM_HASH = HashingUtils::HashString("INTERNAL_UPSTREAM");
        static const int PUBLISH_HASH = HashingUtils::HashString("PUBLISH");


        PackageGroupOriginRestrictionType GetPackageGroupOriginRestrictionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_UPSTREAM_HASH)
          {
            return PackageGroupOriginRestrictionType::EXTERNAL_UPSTREAM;
          }
          else if (hashCode == INTERNAL_UPSTREAM_HASH)
          {
            return PackageGroupOriginRestrictionType::INTERNAL_UPSTREAM;
          }
          else if (hashCode == PUBLISH_HASH)
          {
            return PackageGroupOriginRestrictionType::PUBLISH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageGroupOriginRestrictionType>(hashCode);
          }

          return PackageGroupOriginRestrictionType::NOT_SET;
        }

        Aws::String GetNameForPackageGroupOriginRestrictionType(PackageGroupOriginRestrictionType enumValue)
        {
          switch(enumValue)
          {
          case PackageGroupOriginRestrictionType::NOT_SET:
            return {};
          case PackageGroupOriginRestrictionType::EXTERNAL_UPSTREAM:
            return "EXTERNAL_UPSTREAM";
          case PackageGroupOriginRestrictionType::INTERNAL_UPSTREAM:
            return "INTERNAL_UPSTREAM";
          case PackageGroupOriginRestrictionType::PUBLISH:
            return "PUBLISH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageGroupOriginRestrictionTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
