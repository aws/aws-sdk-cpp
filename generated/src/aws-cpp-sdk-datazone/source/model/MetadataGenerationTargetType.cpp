/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataGenerationTargetType.h>
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
      namespace MetadataGenerationTargetTypeMapper
      {

        static const int ASSET_HASH = HashingUtils::HashString("ASSET");


        MetadataGenerationTargetType GetMetadataGenerationTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_HASH)
          {
            return MetadataGenerationTargetType::ASSET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataGenerationTargetType>(hashCode);
          }

          return MetadataGenerationTargetType::NOT_SET;
        }

        Aws::String GetNameForMetadataGenerationTargetType(MetadataGenerationTargetType enumValue)
        {
          switch(enumValue)
          {
          case MetadataGenerationTargetType::NOT_SET:
            return {};
          case MetadataGenerationTargetType::ASSET:
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

      } // namespace MetadataGenerationTargetTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
