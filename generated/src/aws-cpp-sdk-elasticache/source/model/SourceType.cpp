/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static constexpr uint32_t cache_cluster_HASH = ConstExprHashingUtils::HashString("cache-cluster");
        static constexpr uint32_t cache_parameter_group_HASH = ConstExprHashingUtils::HashString("cache-parameter-group");
        static constexpr uint32_t cache_security_group_HASH = ConstExprHashingUtils::HashString("cache-security-group");
        static constexpr uint32_t cache_subnet_group_HASH = ConstExprHashingUtils::HashString("cache-subnet-group");
        static constexpr uint32_t replication_group_HASH = ConstExprHashingUtils::HashString("replication-group");
        static constexpr uint32_t user_HASH = ConstExprHashingUtils::HashString("user");
        static constexpr uint32_t user_group_HASH = ConstExprHashingUtils::HashString("user-group");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cache_cluster_HASH)
          {
            return SourceType::cache_cluster;
          }
          else if (hashCode == cache_parameter_group_HASH)
          {
            return SourceType::cache_parameter_group;
          }
          else if (hashCode == cache_security_group_HASH)
          {
            return SourceType::cache_security_group;
          }
          else if (hashCode == cache_subnet_group_HASH)
          {
            return SourceType::cache_subnet_group;
          }
          else if (hashCode == replication_group_HASH)
          {
            return SourceType::replication_group;
          }
          else if (hashCode == user_HASH)
          {
            return SourceType::user;
          }
          else if (hashCode == user_group_HASH)
          {
            return SourceType::user_group;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::NOT_SET:
            return {};
          case SourceType::cache_cluster:
            return "cache-cluster";
          case SourceType::cache_parameter_group:
            return "cache-parameter-group";
          case SourceType::cache_security_group:
            return "cache-security-group";
          case SourceType::cache_subnet_group:
            return "cache-subnet-group";
          case SourceType::replication_group:
            return "replication-group";
          case SourceType::user:
            return "user";
          case SourceType::user_group:
            return "user-group";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
