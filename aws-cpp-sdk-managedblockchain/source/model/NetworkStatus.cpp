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

#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace NetworkStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        NetworkStatus GetNetworkStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return NetworkStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return NetworkStatus::AVAILABLE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return NetworkStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NetworkStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return NetworkStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkStatus>(hashCode);
          }

          return NetworkStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkStatus(NetworkStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkStatus::CREATING:
            return "CREATING";
          case NetworkStatus::AVAILABLE:
            return "AVAILABLE";
          case NetworkStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case NetworkStatus::DELETING:
            return "DELETING";
          case NetworkStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
