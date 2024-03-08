/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetModelType.h>
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
      namespace AssetModelTypeMapper
      {

        static const int ASSET_MODEL_HASH = HashingUtils::HashString("ASSET_MODEL");
        static const int COMPONENT_MODEL_HASH = HashingUtils::HashString("COMPONENT_MODEL");


        AssetModelType GetAssetModelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_MODEL_HASH)
          {
            return AssetModelType::ASSET_MODEL;
          }
          else if (hashCode == COMPONENT_MODEL_HASH)
          {
            return AssetModelType::COMPONENT_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetModelType>(hashCode);
          }

          return AssetModelType::NOT_SET;
        }

        Aws::String GetNameForAssetModelType(AssetModelType enumValue)
        {
          switch(enumValue)
          {
          case AssetModelType::NOT_SET:
            return {};
          case AssetModelType::ASSET_MODEL:
            return "ASSET_MODEL";
          case AssetModelType::COMPONENT_MODEL:
            return "COMPONENT_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetModelTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
