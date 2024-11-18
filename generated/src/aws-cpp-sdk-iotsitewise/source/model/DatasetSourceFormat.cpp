/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DatasetSourceFormat.h>
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
      namespace DatasetSourceFormatMapper
      {

        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");


        DatasetSourceFormat GetDatasetSourceFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return DatasetSourceFormat::KNOWLEDGE_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetSourceFormat>(hashCode);
          }

          return DatasetSourceFormat::NOT_SET;
        }

        Aws::String GetNameForDatasetSourceFormat(DatasetSourceFormat enumValue)
        {
          switch(enumValue)
          {
          case DatasetSourceFormat::NOT_SET:
            return {};
          case DatasetSourceFormat::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetSourceFormatMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
