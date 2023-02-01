/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAssetModelPropertiesFilter.h>
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
      namespace ListAssetModelPropertiesFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int BASE_HASH = HashingUtils::HashString("BASE");


        ListAssetModelPropertiesFilter GetListAssetModelPropertiesFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ListAssetModelPropertiesFilter::ALL;
          }
          else if (hashCode == BASE_HASH)
          {
            return ListAssetModelPropertiesFilter::BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListAssetModelPropertiesFilter>(hashCode);
          }

          return ListAssetModelPropertiesFilter::NOT_SET;
        }

        Aws::String GetNameForListAssetModelPropertiesFilter(ListAssetModelPropertiesFilter enumValue)
        {
          switch(enumValue)
          {
          case ListAssetModelPropertiesFilter::ALL:
            return "ALL";
          case ListAssetModelPropertiesFilter::BASE:
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

      } // namespace ListAssetModelPropertiesFilterMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
