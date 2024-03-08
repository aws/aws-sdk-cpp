/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/PackagingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace PackagingTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int APPSTREAM2_HASH = HashingUtils::HashString("APPSTREAM2");


        PackagingType GetPackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return PackagingType::CUSTOM;
          }
          else if (hashCode == APPSTREAM2_HASH)
          {
            return PackagingType::APPSTREAM2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PackagingType>(hashCode);
          }

          return PackagingType::NOT_SET;
        }

        Aws::String GetNameForPackagingType(PackagingType enumValue)
        {
          switch(enumValue)
          {
          case PackagingType::NOT_SET:
            return {};
          case PackagingType::CUSTOM:
            return "CUSTOM";
          case PackagingType::APPSTREAM2:
            return "APPSTREAM2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PackagingTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
