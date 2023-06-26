/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ParquetWriterVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ParquetWriterVersionMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        ParquetWriterVersion GetParquetWriterVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return ParquetWriterVersion::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return ParquetWriterVersion::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParquetWriterVersion>(hashCode);
          }

          return ParquetWriterVersion::NOT_SET;
        }

        Aws::String GetNameForParquetWriterVersion(ParquetWriterVersion enumValue)
        {
          switch(enumValue)
          {
          case ParquetWriterVersion::V1:
            return "V1";
          case ParquetWriterVersion::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParquetWriterVersionMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
