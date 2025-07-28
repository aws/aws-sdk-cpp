/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ResolveToResourceType.h>
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
      namespace ResolveToResourceTypeMapper
      {

        static const int ASSET_HASH = HashingUtils::HashString("ASSET");


        ResolveToResourceType GetResolveToResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_HASH)
          {
            return ResolveToResourceType::ASSET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolveToResourceType>(hashCode);
          }

          return ResolveToResourceType::NOT_SET;
        }

        Aws::String GetNameForResolveToResourceType(ResolveToResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResolveToResourceType::NOT_SET:
            return {};
          case ResolveToResourceType::ASSET:
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

      } // namespace ResolveToResourceTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
