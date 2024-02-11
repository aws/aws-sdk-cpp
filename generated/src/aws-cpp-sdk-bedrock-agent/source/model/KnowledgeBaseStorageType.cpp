/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseStorageType.h>
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
      namespace KnowledgeBaseStorageTypeMapper
      {

        static const int OPENSEARCH_SERVERLESS_HASH = HashingUtils::HashString("OPENSEARCH_SERVERLESS");
        static const int PINECONE_HASH = HashingUtils::HashString("PINECONE");
        static const int REDIS_ENTERPRISE_CLOUD_HASH = HashingUtils::HashString("REDIS_ENTERPRISE_CLOUD");
        static const int RDS_HASH = HashingUtils::HashString("RDS");


        KnowledgeBaseStorageType GetKnowledgeBaseStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPENSEARCH_SERVERLESS_HASH)
          {
            return KnowledgeBaseStorageType::OPENSEARCH_SERVERLESS;
          }
          else if (hashCode == PINECONE_HASH)
          {
            return KnowledgeBaseStorageType::PINECONE;
          }
          else if (hashCode == REDIS_ENTERPRISE_CLOUD_HASH)
          {
            return KnowledgeBaseStorageType::REDIS_ENTERPRISE_CLOUD;
          }
          else if (hashCode == RDS_HASH)
          {
            return KnowledgeBaseStorageType::RDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseStorageType>(hashCode);
          }

          return KnowledgeBaseStorageType::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseStorageType(KnowledgeBaseStorageType enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseStorageType::NOT_SET:
            return {};
          case KnowledgeBaseStorageType::OPENSEARCH_SERVERLESS:
            return "OPENSEARCH_SERVERLESS";
          case KnowledgeBaseStorageType::PINECONE:
            return "PINECONE";
          case KnowledgeBaseStorageType::REDIS_ENTERPRISE_CLOUD:
            return "REDIS_ENTERPRISE_CLOUD";
          case KnowledgeBaseStorageType::RDS:
            return "RDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseStorageTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
