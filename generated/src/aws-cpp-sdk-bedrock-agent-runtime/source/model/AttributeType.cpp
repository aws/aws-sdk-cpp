﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace AttributeTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int STRING_LIST_HASH = HashingUtils::HashString("STRING_LIST");


        AttributeType GetAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return AttributeType::STRING;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return AttributeType::NUMBER;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return AttributeType::BOOLEAN;
          }
          else if (hashCode == STRING_LIST_HASH)
          {
            return AttributeType::STRING_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeType>(hashCode);
          }

          return AttributeType::NOT_SET;
        }

        Aws::String GetNameForAttributeType(AttributeType enumValue)
        {
          switch(enumValue)
          {
          case AttributeType::NOT_SET:
            return {};
          case AttributeType::STRING:
            return "STRING";
          case AttributeType::NUMBER:
            return "NUMBER";
          case AttributeType::BOOLEAN:
            return "BOOLEAN";
          case AttributeType::STRING_LIST:
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

      } // namespace AttributeTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
