/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataProductItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataProductItemTypeMapper
      {

        static const int ASSET_HASH = HashingUtils::HashString("ASSET");


        DataProductItemType GetDataProductItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_HASH)
          {
            return DataProductItemType::ASSET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProductItemType>(hashCode);
          }

          return DataProductItemType::NOT_SET;
        }

        Aws::String GetNameForDataProductItemType(DataProductItemType enumValue)
        {
          switch(enumValue)
          {
          case DataProductItemType::NOT_SET:
            return {};
          case DataProductItemType::ASSET:
            return "ASSET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataProductItemTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
