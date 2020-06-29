/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CompressionTypeValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace CompressionTypeValueMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int gzip_HASH = HashingUtils::HashString("gzip");


        CompressionTypeValue GetCompressionTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return CompressionTypeValue::none;
          }
          else if (hashCode == gzip_HASH)
          {
            return CompressionTypeValue::gzip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionTypeValue>(hashCode);
          }

          return CompressionTypeValue::NOT_SET;
        }

        Aws::String GetNameForCompressionTypeValue(CompressionTypeValue enumValue)
        {
          switch(enumValue)
          {
          case CompressionTypeValue::none:
            return "none";
          case CompressionTypeValue::gzip:
            return "gzip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
