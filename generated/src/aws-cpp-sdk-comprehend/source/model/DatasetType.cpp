/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DatasetTypeMapper
      {

        static const int TRAIN_HASH = HashingUtils::HashString("TRAIN");
        static const int TEST_HASH = HashingUtils::HashString("TEST");


        DatasetType GetDatasetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAIN_HASH)
          {
            return DatasetType::TRAIN;
          }
          else if (hashCode == TEST_HASH)
          {
            return DatasetType::TEST;
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
          case DatasetType::TRAIN:
            return "TRAIN";
          case DatasetType::TEST:
            return "TEST";
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
  } // namespace Comprehend
} // namespace Aws
