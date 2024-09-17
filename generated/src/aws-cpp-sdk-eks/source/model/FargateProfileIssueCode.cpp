/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/FargateProfileIssueCode.h>
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
      namespace FargateProfileIssueCodeMapper
      {

        static const int PodExecutionRoleAlreadyInUse_HASH = HashingUtils::HashString("PodExecutionRoleAlreadyInUse");
        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int ClusterUnreachable_HASH = HashingUtils::HashString("ClusterUnreachable");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");


        FargateProfileIssueCode GetFargateProfileIssueCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PodExecutionRoleAlreadyInUse_HASH)
          {
            return FargateProfileIssueCode::PodExecutionRoleAlreadyInUse;
          }
          else if (hashCode == AccessDenied_HASH)
          {
            return FargateProfileIssueCode::AccessDenied;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return FargateProfileIssueCode::ClusterUnreachable;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return FargateProfileIssueCode::InternalFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FargateProfileIssueCode>(hashCode);
          }

          return FargateProfileIssueCode::NOT_SET;
        }

        Aws::String GetNameForFargateProfileIssueCode(FargateProfileIssueCode enumValue)
        {
          switch(enumValue)
          {
          case FargateProfileIssueCode::NOT_SET:
            return {};
          case FargateProfileIssueCode::PodExecutionRoleAlreadyInUse:
            return "PodExecutionRoleAlreadyInUse";
          case FargateProfileIssueCode::AccessDenied:
            return "AccessDenied";
          case FargateProfileIssueCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case FargateProfileIssueCode::InternalFailure:
            return "InternalFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FargateProfileIssueCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
