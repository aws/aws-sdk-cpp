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

#include <aws/config/model/MemberAccountRuleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace MemberAccountRuleStatusMapper
      {

        static const int CREATE_SUCCESSFUL_HASH = HashingUtils::HashString("CREATE_SUCCESSFUL");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_SUCCESSFUL_HASH = HashingUtils::HashString("DELETE_SUCCESSFUL");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");


        MemberAccountRuleStatus GetMemberAccountRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_SUCCESSFUL_HASH)
          {
            return MemberAccountRuleStatus::CREATE_SUCCESSFUL;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return MemberAccountRuleStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return MemberAccountRuleStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_SUCCESSFUL_HASH)
          {
            return MemberAccountRuleStatus::DELETE_SUCCESSFUL;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return MemberAccountRuleStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return MemberAccountRuleStatus::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberAccountRuleStatus>(hashCode);
          }

          return MemberAccountRuleStatus::NOT_SET;
        }

        Aws::String GetNameForMemberAccountRuleStatus(MemberAccountRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberAccountRuleStatus::CREATE_SUCCESSFUL:
            return "CREATE_SUCCESSFUL";
          case MemberAccountRuleStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case MemberAccountRuleStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case MemberAccountRuleStatus::DELETE_SUCCESSFUL:
            return "DELETE_SUCCESSFUL";
          case MemberAccountRuleStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case MemberAccountRuleStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberAccountRuleStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
