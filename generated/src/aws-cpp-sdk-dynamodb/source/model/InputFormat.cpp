/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/InputFormat.h>
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
      namespace InputFormatMapper
      {

        static constexpr uint32_t DYNAMODB_JSON_HASH = ConstExprHashingUtils::HashString("DYNAMODB_JSON");
        static constexpr uint32_t ION_HASH = ConstExprHashingUtils::HashString("ION");
        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");


        InputFormat GetInputFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DYNAMODB_JSON_HASH)
          {
            return InputFormat::DYNAMODB_JSON;
          }
          else if (hashCode == ION_HASH)
          {
            return InputFormat::ION;
          }
          else if (hashCode == CSV_HASH)
          {
            return InputFormat::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputFormat>(hashCode);
          }

          return InputFormat::NOT_SET;
        }

        Aws::String GetNameForInputFormat(InputFormat enumValue)
        {
          switch(enumValue)
          {
          case InputFormat::NOT_SET:
            return {};
          case InputFormat::DYNAMODB_JSON:
            return "DYNAMODB_JSON";
          case InputFormat::ION:
            return "ION";
          case InputFormat::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputFormatMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
