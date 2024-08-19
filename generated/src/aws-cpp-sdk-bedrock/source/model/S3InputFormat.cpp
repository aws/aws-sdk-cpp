/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/S3InputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace S3InputFormatMapper
      {

        static const int JSONL_HASH = HashingUtils::HashString("JSONL");


        S3InputFormat GetS3InputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSONL_HASH)
          {
            return S3InputFormat::JSONL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3InputFormat>(hashCode);
          }

          return S3InputFormat::NOT_SET;
        }

        Aws::String GetNameForS3InputFormat(S3InputFormat enumValue)
        {
          switch(enumValue)
          {
          case S3InputFormat::NOT_SET:
            return {};
          case S3InputFormat::JSONL:
            return "JSONL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3InputFormatMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
