/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DatasetSourceType.h>
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
      namespace DatasetSourceTypeMapper
      {

        static const int KENDRA_HASH = HashingUtils::HashString("KENDRA");


        DatasetSourceType GetDatasetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KENDRA_HASH)
          {
            return DatasetSourceType::KENDRA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetSourceType>(hashCode);
          }

          return DatasetSourceType::NOT_SET;
        }

        Aws::String GetNameForDatasetSourceType(DatasetSourceType enumValue)
        {
          switch(enumValue)
          {
          case DatasetSourceType::NOT_SET:
            return {};
          case DatasetSourceType::KENDRA:
            return "KENDRA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetSourceTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
