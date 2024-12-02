/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/MarketplaceResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace MarketplaceResourceTypeMapper
      {

        static const int COMPONENT_DATA_HASH = HashingUtils::HashString("COMPONENT_DATA");
        static const int COMPONENT_ARTIFACT_HASH = HashingUtils::HashString("COMPONENT_ARTIFACT");


        MarketplaceResourceType GetMarketplaceResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPONENT_DATA_HASH)
          {
            return MarketplaceResourceType::COMPONENT_DATA;
          }
          else if (hashCode == COMPONENT_ARTIFACT_HASH)
          {
            return MarketplaceResourceType::COMPONENT_ARTIFACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketplaceResourceType>(hashCode);
          }

          return MarketplaceResourceType::NOT_SET;
        }

        Aws::String GetNameForMarketplaceResourceType(MarketplaceResourceType enumValue)
        {
          switch(enumValue)
          {
          case MarketplaceResourceType::NOT_SET:
            return {};
          case MarketplaceResourceType::COMPONENT_DATA:
            return "COMPONENT_DATA";
          case MarketplaceResourceType::COMPONENT_ARTIFACT:
            return "COMPONENT_ARTIFACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MarketplaceResourceTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
