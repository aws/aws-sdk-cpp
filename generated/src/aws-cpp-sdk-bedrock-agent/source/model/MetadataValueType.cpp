/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MetadataValueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace MetadataValueTypeMapper
      {

        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");


        MetadataValueType GetMetadataValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOLEAN_HASH)
          {
            return MetadataValueType::BOOLEAN;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return MetadataValueType::NUMBER;
          }
          else if (hashCode == STRING_HASH)
          {
            return MetadataValueType::STRING;
          }
          else if (hashCode == STRING_LIST_HASH)
          {
            return MetadataValueType::STRING_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataValueType>(hashCode);
          }

          return MetadataValueType::NOT_SET;
        }

        Aws::String GetNameForMetadataValueType(MetadataValueType enumValue)
        {
          switch(enumValue)
          {
          case MetadataValueType::NOT_SET:
            return {};
          case MetadataValueType::BOOLEAN:
            return "BOOLEAN";
          case MetadataValueType::NUMBER:
            return "NUMBER";
          case MetadataValueType::STRING:
            return "STRING";
          case MetadataValueType::STRING_LIST:
            return "STRING_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataValueTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
