/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/JsonFileCompression.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace JsonFileCompressionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");


        JsonFileCompression GetJsonFileCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return JsonFileCompression::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return JsonFileCompression::GZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JsonFileCompression>(hashCode);
          }

          return JsonFileCompression::NOT_SET;
        }

        Aws::String GetNameForJsonFileCompression(JsonFileCompression enumValue)
        {
          switch(enumValue)
          {
          case JsonFileCompression::NOT_SET:
            return {};
          case JsonFileCompression::NONE:
            return "NONE";
          case JsonFileCompression::GZIP:
            return "GZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JsonFileCompressionMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
