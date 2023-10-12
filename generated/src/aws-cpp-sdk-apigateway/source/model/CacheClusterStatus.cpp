/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CacheClusterStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace CacheClusterStatusMapper
      {

        static constexpr uint32_t CREATE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("CREATE_IN_PROGRESS");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");
        static constexpr uint32_t FLUSH_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("FLUSH_IN_PROGRESS");


        CacheClusterStatus GetCacheClusterStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return CacheClusterStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return CacheClusterStatus::AVAILABLE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return CacheClusterStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return CacheClusterStatus::NOT_AVAILABLE;
          }
          else if (hashCode == FLUSH_IN_PROGRESS_HASH)
          {
            return CacheClusterStatus::FLUSH_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CacheClusterStatus>(hashCode);
          }

          return CacheClusterStatus::NOT_SET;
        }

        Aws::String GetNameForCacheClusterStatus(CacheClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case CacheClusterStatus::NOT_SET:
            return {};
          case CacheClusterStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case CacheClusterStatus::AVAILABLE:
            return "AVAILABLE";
          case CacheClusterStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case CacheClusterStatus::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          case CacheClusterStatus::FLUSH_IN_PROGRESS:
            return "FLUSH_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CacheClusterStatusMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
