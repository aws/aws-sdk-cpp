/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultContentColumnType.h>
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
      namespace RetrievalResultContentColumnTypeMapper
      {

        static const int BLOB_HASH = HashingUtils::HashString("BLOB");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int NULL__HASH = HashingUtils::HashString("NULL");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int STRING_HASH = HashingUtils::HashString("STRING");


        RetrievalResultContentColumnType GetRetrievalResultContentColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOB_HASH)
          {
            return RetrievalResultContentColumnType::BLOB;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return RetrievalResultContentColumnType::BOOLEAN;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return RetrievalResultContentColumnType::DOUBLE;
          }
          else if (hashCode == NULL__HASH)
          {
            return RetrievalResultContentColumnType::NULL_;
          }
          else if (hashCode == LONG_HASH)
          {
            return RetrievalResultContentColumnType::LONG;
          }
          else if (hashCode == STRING_HASH)
          {
            return RetrievalResultContentColumnType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalResultContentColumnType>(hashCode);
          }

          return RetrievalResultContentColumnType::NOT_SET;
        }

        Aws::String GetNameForRetrievalResultContentColumnType(RetrievalResultContentColumnType enumValue)
        {
          switch(enumValue)
          {
          case RetrievalResultContentColumnType::NOT_SET:
            return {};
          case RetrievalResultContentColumnType::BLOB:
            return "BLOB";
          case RetrievalResultContentColumnType::BOOLEAN:
            return "BOOLEAN";
          case RetrievalResultContentColumnType::DOUBLE:
            return "DOUBLE";
          case RetrievalResultContentColumnType::NULL_:
            return "NULL";
          case RetrievalResultContentColumnType::LONG:
            return "LONG";
          case RetrievalResultContentColumnType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalResultContentColumnTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
