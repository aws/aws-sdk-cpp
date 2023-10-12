/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        FargateProfileStatus GetFargateProfileStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case FargateProfileStatus::NOT_SET:
            return {};
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
