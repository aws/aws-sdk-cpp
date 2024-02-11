/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DataStorageUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace DataStorageUnitMapper
      {

        static const int GB_HASH = HashingUtils::HashString("GB");


        DataStorageUnit GetDataStorageUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GB_HASH)
          {
            return DataStorageUnit::GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataStorageUnit>(hashCode);
          }

          return DataStorageUnit::NOT_SET;
        }

        Aws::String GetNameForDataStorageUnit(DataStorageUnit enumValue)
        {
          switch(enumValue)
          {
          case DataStorageUnit::NOT_SET:
            return {};
          case DataStorageUnit::GB:
            return "GB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataStorageUnitMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
