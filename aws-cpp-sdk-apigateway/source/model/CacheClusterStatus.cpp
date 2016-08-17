/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int NOT_AVAILABLE_HASH = HashingUtils::HashString("NOT_AVAILABLE");
        static const int FLUSH_IN_PROGRESS_HASH = HashingUtils::HashString("FLUSH_IN_PROGRESS");


        CacheClusterStatus GetCacheClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace CacheClusterStatusMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
