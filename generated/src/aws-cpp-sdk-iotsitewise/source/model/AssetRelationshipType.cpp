/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetRelationshipType.h>
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
      namespace AssetRelationshipTypeMapper
      {

        static const int HIERARCHY_HASH = HashingUtils::HashString("HIERARCHY");


        AssetRelationshipType GetAssetRelationshipTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIERARCHY_HASH)
          {
            return AssetRelationshipType::HIERARCHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetRelationshipType>(hashCode);
          }

          return AssetRelationshipType::NOT_SET;
        }

        Aws::String GetNameForAssetRelationshipType(AssetRelationshipType enumValue)
        {
          switch(enumValue)
          {
          case AssetRelationshipType::NOT_SET:
            return {};
          case AssetRelationshipType::HIERARCHY:
            return "HIERARCHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetRelationshipTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
