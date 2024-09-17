/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelVersionType.h>
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
      namespace AssetModelVersionTypeMapper
      {

        static const int LATEST_HASH = HashingUtils::HashString("LATEST");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        AssetModelVersionType GetAssetModelVersionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LATEST_HASH)
          {
            return AssetModelVersionType::LATEST;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AssetModelVersionType::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetModelVersionType>(hashCode);
          }

          return AssetModelVersionType::NOT_SET;
        }

        Aws::String GetNameForAssetModelVersionType(AssetModelVersionType enumValue)
        {
          switch(enumValue)
          {
          case AssetModelVersionType::NOT_SET:
            return {};
          case AssetModelVersionType::LATEST:
            return "LATEST";
          case AssetModelVersionType::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetModelVersionTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
