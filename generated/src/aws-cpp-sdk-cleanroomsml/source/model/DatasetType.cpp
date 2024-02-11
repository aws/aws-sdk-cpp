/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DatasetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace DatasetTypeMapper
      {

        static const int INTERACTIONS_HASH = HashingUtils::HashString("INTERACTIONS");


        DatasetType GetDatasetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERACTIONS_HASH)
          {
            return DatasetType::INTERACTIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetType>(hashCode);
          }

          return DatasetType::NOT_SET;
        }

        Aws::String GetNameForDatasetType(DatasetType enumValue)
        {
          switch(enumValue)
          {
          case DatasetType::NOT_SET:
            return {};
          case DatasetType::INTERACTIONS:
            return "INTERACTIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
