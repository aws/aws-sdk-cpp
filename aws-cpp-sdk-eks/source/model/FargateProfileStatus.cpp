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

#include <aws/eks/model/FargateProfileStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace FargateProfileStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        FargateProfileStatus GetFargateProfileStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FargateProfileStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FargateProfileStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FargateProfileStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return FargateProfileStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return FargateProfileStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FargateProfileStatus>(hashCode);
          }

          return FargateProfileStatus::NOT_SET;
        }

        Aws::String GetNameForFargateProfileStatus(FargateProfileStatus enumValue)
        {
          switch(enumValue)
          {
          case FargateProfileStatus::CREATING:
            return "CREATING";
          case FargateProfileStatus::ACTIVE:
            return "ACTIVE";
          case FargateProfileStatus::DELETING:
            return "DELETING";
          case FargateProfileStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case FargateProfileStatus::DELETE_FAILED:
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

      } // namespace FargateProfileStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
