/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/S3InputFileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace S3InputFileTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        S3InputFileType GetS3InputFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return S3InputFileType::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return S3InputFileType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3InputFileType>(hashCode);
          }

          return S3InputFileType::NOT_SET;
        }

        Aws::String GetNameForS3InputFileType(S3InputFileType enumValue)
        {
          switch(enumValue)
          {
          case S3InputFileType::NOT_SET:
            return {};
          case S3InputFileType::CSV:
            return "CSV";
          case S3InputFileType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3InputFileTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
