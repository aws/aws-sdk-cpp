/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PackageVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace PackageVersionStatusMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return PackageVersionStatus::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return PackageVersionStatus::PUBLISHED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return PackageVersionStatus::DEPRECATED;
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
          case PackageVersionStatus::NOT_SET:
            return {};
          case PackageVersionStatus::DRAFT:
            return "DRAFT";
          case PackageVersionStatus::PUBLISHED:
            return "PUBLISHED";
          case PackageVersionStatus::DEPRECATED:
            return "DEPRECATED";
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
  } // namespace IoT
} // namespace Aws
