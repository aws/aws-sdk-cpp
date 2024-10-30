/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ZipClassificationCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoPlaces
  {
    namespace Model
    {
      namespace ZipClassificationCodeMapper
      {

        static const int Military_HASH = HashingUtils::HashString("Military");
        static const int PostOfficeBoxes_HASH = HashingUtils::HashString("PostOfficeBoxes");
        static const int Unique_HASH = HashingUtils::HashString("Unique");


        ZipClassificationCode GetZipClassificationCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Military_HASH)
          {
            return ZipClassificationCode::Military;
          }
          else if (hashCode == PostOfficeBoxes_HASH)
          {
            return ZipClassificationCode::PostOfficeBoxes;
          }
          else if (hashCode == Unique_HASH)
          {
            return ZipClassificationCode::Unique;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZipClassificationCode>(hashCode);
          }

          return ZipClassificationCode::NOT_SET;
        }

        Aws::String GetNameForZipClassificationCode(ZipClassificationCode enumValue)
        {
          switch(enumValue)
          {
          case ZipClassificationCode::NOT_SET:
            return {};
          case ZipClassificationCode::Military:
            return "Military";
          case ZipClassificationCode::PostOfficeBoxes:
            return "PostOfficeBoxes";
          case ZipClassificationCode::Unique:
            return "Unique";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZipClassificationCodeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
