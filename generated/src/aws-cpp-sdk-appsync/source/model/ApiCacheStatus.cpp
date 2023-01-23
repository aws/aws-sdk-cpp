/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiCacheStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ApiCacheStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ApiCacheStatus GetApiCacheStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ApiCacheStatus::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ApiCacheStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ApiCacheStatus::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return ApiCacheStatus::MODIFYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ApiCacheStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiCacheStatus>(hashCode);
          }

          return ApiCacheStatus::NOT_SET;
        }

        Aws::String GetNameForApiCacheStatus(ApiCacheStatus enumValue)
        {
          switch(enumValue)
          {
          case ApiCacheStatus::AVAILABLE:
            return "AVAILABLE";
          case ApiCacheStatus::CREATING:
            return "CREATING";
          case ApiCacheStatus::DELETING:
            return "DELETING";
          case ApiCacheStatus::MODIFYING:
            return "MODIFYING";
          case ApiCacheStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiCacheStatusMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
