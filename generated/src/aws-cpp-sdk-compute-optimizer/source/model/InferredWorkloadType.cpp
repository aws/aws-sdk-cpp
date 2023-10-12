/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InferredWorkloadType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace InferredWorkloadTypeMapper
      {

        static constexpr uint32_t AmazonEmr_HASH = ConstExprHashingUtils::HashString("AmazonEmr");
        static constexpr uint32_t ApacheCassandra_HASH = ConstExprHashingUtils::HashString("ApacheCassandra");
        static constexpr uint32_t ApacheHadoop_HASH = ConstExprHashingUtils::HashString("ApacheHadoop");
        static constexpr uint32_t Memcached_HASH = ConstExprHashingUtils::HashString("Memcached");
        static constexpr uint32_t Nginx_HASH = ConstExprHashingUtils::HashString("Nginx");
        static constexpr uint32_t PostgreSql_HASH = ConstExprHashingUtils::HashString("PostgreSql");
        static constexpr uint32_t Redis_HASH = ConstExprHashingUtils::HashString("Redis");
        static constexpr uint32_t Kafka_HASH = ConstExprHashingUtils::HashString("Kafka");
        static constexpr uint32_t SQLServer_HASH = ConstExprHashingUtils::HashString("SQLServer");


        InferredWorkloadType GetInferredWorkloadTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AmazonEmr_HASH)
          {
            return InferredWorkloadType::AmazonEmr;
          }
          else if (hashCode == ApacheCassandra_HASH)
          {
            return InferredWorkloadType::ApacheCassandra;
          }
          else if (hashCode == ApacheHadoop_HASH)
          {
            return InferredWorkloadType::ApacheHadoop;
          }
          else if (hashCode == Memcached_HASH)
          {
            return InferredWorkloadType::Memcached;
          }
          else if (hashCode == Nginx_HASH)
          {
            return InferredWorkloadType::Nginx;
          }
          else if (hashCode == PostgreSql_HASH)
          {
            return InferredWorkloadType::PostgreSql;
          }
          else if (hashCode == Redis_HASH)
          {
            return InferredWorkloadType::Redis;
          }
          else if (hashCode == Kafka_HASH)
          {
            return InferredWorkloadType::Kafka;
          }
          else if (hashCode == SQLServer_HASH)
          {
            return InferredWorkloadType::SQLServer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferredWorkloadType>(hashCode);
          }

          return InferredWorkloadType::NOT_SET;
        }

        Aws::String GetNameForInferredWorkloadType(InferredWorkloadType enumValue)
        {
          switch(enumValue)
          {
          case InferredWorkloadType::NOT_SET:
            return {};
          case InferredWorkloadType::AmazonEmr:
            return "AmazonEmr";
          case InferredWorkloadType::ApacheCassandra:
            return "ApacheCassandra";
          case InferredWorkloadType::ApacheHadoop:
            return "ApacheHadoop";
          case InferredWorkloadType::Memcached:
            return "Memcached";
          case InferredWorkloadType::Nginx:
            return "Nginx";
          case InferredWorkloadType::PostgreSql:
            return "PostgreSql";
          case InferredWorkloadType::Redis:
            return "Redis";
          case InferredWorkloadType::Kafka:
            return "Kafka";
          case InferredWorkloadType::SQLServer:
            return "SQLServer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferredWorkloadTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
