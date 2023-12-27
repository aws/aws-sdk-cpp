/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DataCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DataCompressionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LZ4_HASH = HashingUtils::HashString("LZ4");


        DataCompressionType GetDataCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DataCompressionType::NONE;
          }
          else if (hashCode == LZ4_HASH)
          {
            return DataCompressionType::LZ4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataCompressionType>(hashCode);
          }

          return DataCompressionType::NOT_SET;
        }

        Aws::String GetNameForDataCompressionType(DataCompressionType enumValue)
        {
          switch(enumValue)
          {
          case DataCompressionType::NOT_SET:
            return {};
          case DataCompressionType::NONE:
            return "NONE";
          case DataCompressionType::LZ4:
            return "LZ4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataCompressionTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
