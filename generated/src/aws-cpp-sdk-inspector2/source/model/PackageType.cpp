/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PackageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace PackageTypeMapper
      {

        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int ZIP_HASH = HashingUtils::HashString("ZIP");


        PackageType GetPackageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_HASH)
          {
            return PackageType::IMAGE;
          }
          else if (hashCode == ZIP_HASH)
          {
            return PackageType::ZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackageType>(hashCode);
          }

          return PackageType::NOT_SET;
        }

        Aws::String GetNameForPackageType(PackageType enumValue)
        {
          switch(enumValue)
          {
          case PackageType::IMAGE:
            return "IMAGE";
          case PackageType::ZIP:
            return "ZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackageTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
