/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetPropertiesFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ListAssetPropertiesFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int BASE_HASH = HashingUtils::HashString("BASE");


        ListAssetPropertiesFilter GetListAssetPropertiesFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ListAssetPropertiesFilter::ALL;
          }
          else if (hashCode == BASE_HASH)
          {
            return ListAssetPropertiesFilter::BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListAssetPropertiesFilter>(hashCode);
          }

          return ListAssetPropertiesFilter::NOT_SET;
        }

        Aws::String GetNameForListAssetPropertiesFilter(ListAssetPropertiesFilter enumValue)
        {
          switch(enumValue)
          {
          case ListAssetPropertiesFilter::ALL:
            return "ALL";
          case ListAssetPropertiesFilter::BASE:
            return "BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListAssetPropertiesFilterMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
