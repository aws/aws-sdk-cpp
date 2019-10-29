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

#include <aws/cloud9/model/EnvironmentLifecycleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace EnvironmentLifecycleStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        EnvironmentLifecycleStatus GetEnvironmentLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentLifecycleStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return EnvironmentLifecycleStatus::CREATED;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentLifecycleStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentLifecycleStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return EnvironmentLifecycleStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentLifecycleStatus>(hashCode);
          }

          return EnvironmentLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentLifecycleStatus(EnvironmentLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentLifecycleStatus::CREATING:
            return "CREATING";
          case EnvironmentLifecycleStatus::CREATED:
            return "CREATED";
          case EnvironmentLifecycleStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentLifecycleStatus::DELETING:
            return "DELETING";
          case EnvironmentLifecycleStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentLifecycleStatusMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
