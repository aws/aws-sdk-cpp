/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/LocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace LocationTypeMapper
      {

        static constexpr uint32_t INGESTION_HASH = ConstExprHashingUtils::HashString("INGESTION");
        static constexpr uint32_t SAGEMAKER_HASH = ConstExprHashingUtils::HashString("SAGEMAKER");


        LocationType GetLocationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INGESTION_HASH)
          {
            return LocationType::INGESTION;
          }
          else if (hashCode == SAGEMAKER_HASH)
          {
            return LocationType::SAGEMAKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocationType>(hashCode);
          }

          return LocationType::NOT_SET;
        }

        Aws::String GetNameForLocationType(LocationType enumValue)
        {
          switch(enumValue)
          {
          case LocationType::NOT_SET:
            return {};
          case LocationType::INGESTION:
            return "INGESTION";
          case LocationType::SAGEMAKER:
            return "SAGEMAKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocationTypeMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
