/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionSortType.h>
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
      namespace PackageVersionSortTypeMapper
      {

        static const int PUBLISHED_TIME_HASH = HashingUtils::HashString("PUBLISHED_TIME");


        PackageVersionSortType GetPackageVersionSortTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_TIME_HASH)
          {
            return PackageVersionSortType::PUBLISHED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageVersionSortType>(hashCode);
          }

          return PackageVersionSortType::NOT_SET;
        }

        Aws::String GetNameForPackageVersionSortType(PackageVersionSortType enumValue)
        {
          switch(enumValue)
          {
          case PackageVersionSortType::PUBLISHED_TIME:
            return "PUBLISHED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageVersionSortTypeMapper
    } // namespace Model
  } // namespace CodeArtifact
} // namespace Aws
