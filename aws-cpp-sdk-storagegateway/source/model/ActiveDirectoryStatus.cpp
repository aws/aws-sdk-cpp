/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/storagegateway/model/ActiveDirectoryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace ActiveDirectoryStatusMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int DETACHED_HASH = HashingUtils::HashString("DETACHED");
        static const int JOINED_HASH = HashingUtils::HashString("JOINED");
        static const int JOINING_HASH = HashingUtils::HashString("JOINING");
        static const int NETWORK_ERROR_HASH = HashingUtils::HashString("NETWORK_ERROR");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
        static const int UNKNOWN_ERROR_HASH = HashingUtils::HashString("UNKNOWN_ERROR");


        ActiveDirectoryStatus GetActiveDirectoryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return ActiveDirectoryStatus::ACCESS_DENIED;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return ActiveDirectoryStatus::DETACHED;
          }
          else if (hashCode == JOINED_HASH)
          {
            return ActiveDirectoryStatus::JOINED;
          }
          else if (hashCode == JOINING_HASH)
          {
            return ActiveDirectoryStatus::JOINING;
          }
          else if (hashCode == NETWORK_ERROR_HASH)
          {
            return ActiveDirectoryStatus::NETWORK_ERROR;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return ActiveDirectoryStatus::TIMEOUT;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return ActiveDirectoryStatus::UNKNOWN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveDirectoryStatus>(hashCode);
          }

          return ActiveDirectoryStatus::NOT_SET;
        }

        Aws::String GetNameForActiveDirectoryStatus(ActiveDirectoryStatus enumValue)
        {
          switch(enumValue)
          {
          case ActiveDirectoryStatus::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ActiveDirectoryStatus::DETACHED:
            return "DETACHED";
          case ActiveDirectoryStatus::JOINED:
            return "JOINED";
          case ActiveDirectoryStatus::JOINING:
            return "JOINING";
          case ActiveDirectoryStatus::NETWORK_ERROR:
            return "NETWORK_ERROR";
          case ActiveDirectoryStatus::TIMEOUT:
            return "TIMEOUT";
          case ActiveDirectoryStatus::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActiveDirectoryStatusMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
