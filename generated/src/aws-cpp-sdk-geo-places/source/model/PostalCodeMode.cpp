/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PostalCodeMode.h>
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
      namespace PostalCodeModeMapper
      {

        static const int MergeAllSpannedLocalities_HASH = HashingUtils::HashString("MergeAllSpannedLocalities");
        static const int EnumerateSpannedLocalities_HASH = HashingUtils::HashString("EnumerateSpannedLocalities");


        PostalCodeMode GetPostalCodeModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MergeAllSpannedLocalities_HASH)
          {
            return PostalCodeMode::MergeAllSpannedLocalities;
          }
          else if (hashCode == EnumerateSpannedLocalities_HASH)
          {
            return PostalCodeMode::EnumerateSpannedLocalities;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PostalCodeMode>(hashCode);
          }

          return PostalCodeMode::NOT_SET;
        }

        Aws::String GetNameForPostalCodeMode(PostalCodeMode enumValue)
        {
          switch(enumValue)
          {
          case PostalCodeMode::NOT_SET:
            return {};
          case PostalCodeMode::MergeAllSpannedLocalities:
            return "MergeAllSpannedLocalities";
          case PostalCodeMode::EnumerateSpannedLocalities:
            return "EnumerateSpannedLocalities";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PostalCodeModeMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
