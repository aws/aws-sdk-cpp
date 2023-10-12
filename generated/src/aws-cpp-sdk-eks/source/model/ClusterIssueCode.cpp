/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClusterIssueCode.h>
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
      namespace ClusterIssueCodeMapper
      {

        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t ClusterUnreachable_HASH = ConstExprHashingUtils::HashString("ClusterUnreachable");
        static constexpr uint32_t ConfigurationConflict_HASH = ConstExprHashingUtils::HashString("ConfigurationConflict");
        static constexpr uint32_t InternalFailure_HASH = ConstExprHashingUtils::HashString("InternalFailure");
        static constexpr uint32_t ResourceLimitExceeded_HASH = ConstExprHashingUtils::HashString("ResourceLimitExceeded");
        static constexpr uint32_t ResourceNotFound_HASH = ConstExprHashingUtils::HashString("ResourceNotFound");


        ClusterIssueCode GetClusterIssueCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDenied_HASH)
          {
            return ClusterIssueCode::AccessDenied;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return ClusterIssueCode::ClusterUnreachable;
          }
          else if (hashCode == ConfigurationConflict_HASH)
          {
            return ClusterIssueCode::ConfigurationConflict;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return ClusterIssueCode::InternalFailure;
          }
          else if (hashCode == ResourceLimitExceeded_HASH)
          {
            return ClusterIssueCode::ResourceLimitExceeded;
          }
          else if (hashCode == ResourceNotFound_HASH)
          {
            return ClusterIssueCode::ResourceNotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterIssueCode>(hashCode);
          }

          return ClusterIssueCode::NOT_SET;
        }

        Aws::String GetNameForClusterIssueCode(ClusterIssueCode enumValue)
        {
          switch(enumValue)
          {
          case ClusterIssueCode::NOT_SET:
            return {};
          case ClusterIssueCode::AccessDenied:
            return "AccessDenied";
          case ClusterIssueCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case ClusterIssueCode::ConfigurationConflict:
            return "ConfigurationConflict";
          case ClusterIssueCode::InternalFailure:
            return "InternalFailure";
          case ClusterIssueCode::ResourceLimitExceeded:
            return "ResourceLimitExceeded";
          case ClusterIssueCode::ResourceNotFound:
            return "ResourceNotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterIssueCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
