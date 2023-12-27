/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseType.h>
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
      namespace KnowledgeBaseTypeMapper
      {

        static const int VECTOR_HASH = HashingUtils::HashString("VECTOR");


        KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VECTOR_HASH)
          {
            return KnowledgeBaseType::VECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseType>(hashCode);
          }

          return KnowledgeBaseType::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseType::NOT_SET:
            return {};
          case KnowledgeBaseType::VECTOR:
            return "VECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
