/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataGenerationRunType.h>
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
      namespace MetadataGenerationRunTypeMapper
      {

        static const int BUSINESS_DESCRIPTIONS_HASH = HashingUtils::HashString("BUSINESS_DESCRIPTIONS");


        MetadataGenerationRunType GetMetadataGenerationRunTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUSINESS_DESCRIPTIONS_HASH)
          {
            return MetadataGenerationRunType::BUSINESS_DESCRIPTIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataGenerationRunType>(hashCode);
          }

          return MetadataGenerationRunType::NOT_SET;
        }

        Aws::String GetNameForMetadataGenerationRunType(MetadataGenerationRunType enumValue)
        {
          switch(enumValue)
          {
          case MetadataGenerationRunType::NOT_SET:
            return {};
          case MetadataGenerationRunType::BUSINESS_DESCRIPTIONS:
            return "BUSINESS_DESCRIPTIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataGenerationRunTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
