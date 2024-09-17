/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DataSetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace DataSetTypeMapper
      {

        static const int PS_HASH = HashingUtils::HashString("PS");


        DataSetType GetDataSetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PS_HASH)
          {
            return DataSetType::PS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSetType>(hashCode);
          }

          return DataSetType::NOT_SET;
        }

        Aws::String GetNameForDataSetType(DataSetType enumValue)
        {
          switch(enumValue)
          {
          case DataSetType::NOT_SET:
            return {};
          case DataSetType::PS:
            return "PS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSetTypeMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
