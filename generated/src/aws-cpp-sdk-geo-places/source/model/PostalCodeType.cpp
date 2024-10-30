/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PostalCodeType.h>
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
      namespace PostalCodeTypeMapper
      {

        static const int UspsZip_HASH = HashingUtils::HashString("UspsZip");
        static const int UspsZipPlus4_HASH = HashingUtils::HashString("UspsZipPlus4");


        PostalCodeType GetPostalCodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UspsZip_HASH)
          {
            return PostalCodeType::UspsZip;
          }
          else if (hashCode == UspsZipPlus4_HASH)
          {
            return PostalCodeType::UspsZipPlus4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostalCodeType>(hashCode);
          }

          return PostalCodeType::NOT_SET;
        }

        Aws::String GetNameForPostalCodeType(PostalCodeType enumValue)
        {
          switch(enumValue)
          {
          case PostalCodeType::NOT_SET:
            return {};
          case PostalCodeType::UspsZip:
            return "UspsZip";
          case PostalCodeType::UspsZipPlus4:
            return "UspsZipPlus4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PostalCodeTypeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
