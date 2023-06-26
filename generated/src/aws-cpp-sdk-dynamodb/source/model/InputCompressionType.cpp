/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/InputCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace InputCompressionTypeMapper
      {

        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        InputCompressionType GetInputCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return InputCompressionType::GZIP;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return InputCompressionType::ZSTD;
          }
          else if (hashCode == NONE_HASH)
          {
            return InputCompressionType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputCompressionType>(hashCode);
          }

          return InputCompressionType::NOT_SET;
        }

        Aws::String GetNameForInputCompressionType(InputCompressionType enumValue)
        {
          switch(enumValue)
          {
          case InputCompressionType::GZIP:
            return "GZIP";
          case InputCompressionType::ZSTD:
            return "ZSTD";
          case InputCompressionType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputCompressionTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
