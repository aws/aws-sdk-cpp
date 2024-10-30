/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PostalAuthority.h>
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
      namespace PostalAuthorityMapper
      {

        static const int Usps_HASH = HashingUtils::HashString("Usps");


        PostalAuthority GetPostalAuthorityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Usps_HASH)
          {
            return PostalAuthority::Usps;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostalAuthority>(hashCode);
          }

          return PostalAuthority::NOT_SET;
        }

        Aws::String GetNameForPostalAuthority(PostalAuthority enumValue)
        {
          switch(enumValue)
          {
          case PostalAuthority::NOT_SET:
            return {};
          case PostalAuthority::Usps:
            return "Usps";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PostalAuthorityMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
