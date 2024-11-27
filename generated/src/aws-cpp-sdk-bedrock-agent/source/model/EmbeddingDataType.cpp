/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EmbeddingDataType.h>
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
      namespace EmbeddingDataTypeMapper
      {

        static const int FLOAT32_HASH = HashingUtils::HashString("FLOAT32");
        static const int BINARY_HASH = HashingUtils::HashString("BINARY");


        EmbeddingDataType GetEmbeddingDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOAT32_HASH)
          {
            return EmbeddingDataType::FLOAT32;
          }
          else if (hashCode == BINARY_HASH)
          {
            return EmbeddingDataType::BINARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddingDataType>(hashCode);
          }

          return EmbeddingDataType::NOT_SET;
        }

        Aws::String GetNameForEmbeddingDataType(EmbeddingDataType enumValue)
        {
          switch(enumValue)
          {
          case EmbeddingDataType::NOT_SET:
            return {};
          case EmbeddingDataType::FLOAT32:
            return "FLOAT32";
          case EmbeddingDataType::BINARY:
            return "BINARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddingDataTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
