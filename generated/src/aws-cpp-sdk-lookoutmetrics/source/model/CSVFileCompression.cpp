/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CSVFileCompression.h>
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
      namespace CSVFileCompressionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");


        CSVFileCompression GetCSVFileCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return CSVFileCompression::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return CSVFileCompression::GZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CSVFileCompression>(hashCode);
          }

          return CSVFileCompression::NOT_SET;
        }

        Aws::String GetNameForCSVFileCompression(CSVFileCompression enumValue)
        {
          switch(enumValue)
          {
          case CSVFileCompression::NOT_SET:
            return {};
          case CSVFileCompression::NONE:
            return "NONE";
          case CSVFileCompression::GZIP:
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

      } // namespace CSVFileCompressionMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
