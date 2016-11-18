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
#include <aws/iam/model/PolicySourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace PolicySourceTypeMapper
      {

        static const int user_HASH = HashingUtils::HashString("user");
        static const int group_HASH = HashingUtils::HashString("group");
        static const int role_HASH = HashingUtils::HashString("role");
        static const int aws_managed_HASH = HashingUtils::HashString("aws-managed");
        static const int user_managed_HASH = HashingUtils::HashString("user-managed");
        static const int resource_HASH = HashingUtils::HashString("resource");
        static const int none_HASH = HashingUtils::HashString("none");


        PolicySourceType GetPolicySourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == user_HASH)
          {
            return PolicySourceType::user;
          }
          else if (hashCode == group_HASH)
          {
            return PolicySourceType::group;
          }
          else if (hashCode == role_HASH)
          {
            return PolicySourceType::role;
          }
          else if (hashCode == aws_managed_HASH)
          {
            return PolicySourceType::aws_managed;
          }
          else if (hashCode == user_managed_HASH)
          {
            return PolicySourceType::user_managed;
          }
          else if (hashCode == resource_HASH)
          {
            return PolicySourceType::resource;
          }
          else if (hashCode == none_HASH)
          {
            return PolicySourceType::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicySourceType>(hashCode);
          }

          return PolicySourceType::NOT_SET;
        }

        Aws::String GetNameForPolicySourceType(PolicySourceType enumValue)
        {
          switch(enumValue)
          {
          case PolicySourceType::user:
            return "user";
          case PolicySourceType::group:
            return "group";
          case PolicySourceType::role:
            return "role";
          case PolicySourceType::aws_managed:
            return "aws-managed";
          case PolicySourceType::user_managed:
            return "user-managed";
          case PolicySourceType::resource:
            return "resource";
          case PolicySourceType::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PolicySourceTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
