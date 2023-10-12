/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonIssueCode.h>
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
      namespace AddonIssueCodeMapper
      {

        static constexpr uint32_t AccessDenied_HASH = ConstExprHashingUtils::HashString("AccessDenied");
        static constexpr uint32_t InternalFailure_HASH = ConstExprHashingUtils::HashString("InternalFailure");
        static constexpr uint32_t ClusterUnreachable_HASH = ConstExprHashingUtils::HashString("ClusterUnreachable");
        static constexpr uint32_t InsufficientNumberOfReplicas_HASH = ConstExprHashingUtils::HashString("InsufficientNumberOfReplicas");
        static constexpr uint32_t ConfigurationConflict_HASH = ConstExprHashingUtils::HashString("ConfigurationConflict");
        static constexpr uint32_t AdmissionRequestDenied_HASH = ConstExprHashingUtils::HashString("AdmissionRequestDenied");
        static constexpr uint32_t UnsupportedAddonModification_HASH = ConstExprHashingUtils::HashString("UnsupportedAddonModification");
        static constexpr uint32_t K8sResourceNotFound_HASH = ConstExprHashingUtils::HashString("K8sResourceNotFound");


        AddonIssueCode GetAddonIssueCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccessDenied_HASH)
          {
            return AddonIssueCode::AccessDenied;
          }
          else if (hashCode == InternalFailure_HASH)
          {
            return AddonIssueCode::InternalFailure;
          }
          else if (hashCode == ClusterUnreachable_HASH)
          {
            return AddonIssueCode::ClusterUnreachable;
          }
          else if (hashCode == InsufficientNumberOfReplicas_HASH)
          {
            return AddonIssueCode::InsufficientNumberOfReplicas;
          }
          else if (hashCode == ConfigurationConflict_HASH)
          {
            return AddonIssueCode::ConfigurationConflict;
          }
          else if (hashCode == AdmissionRequestDenied_HASH)
          {
            return AddonIssueCode::AdmissionRequestDenied;
          }
          else if (hashCode == UnsupportedAddonModification_HASH)
          {
            return AddonIssueCode::UnsupportedAddonModification;
          }
          else if (hashCode == K8sResourceNotFound_HASH)
          {
            return AddonIssueCode::K8sResourceNotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddonIssueCode>(hashCode);
          }

          return AddonIssueCode::NOT_SET;
        }

        Aws::String GetNameForAddonIssueCode(AddonIssueCode enumValue)
        {
          switch(enumValue)
          {
          case AddonIssueCode::NOT_SET:
            return {};
          case AddonIssueCode::AccessDenied:
            return "AccessDenied";
          case AddonIssueCode::InternalFailure:
            return "InternalFailure";
          case AddonIssueCode::ClusterUnreachable:
            return "ClusterUnreachable";
          case AddonIssueCode::InsufficientNumberOfReplicas:
            return "InsufficientNumberOfReplicas";
          case AddonIssueCode::ConfigurationConflict:
            return "ConfigurationConflict";
          case AddonIssueCode::AdmissionRequestDenied:
            return "AdmissionRequestDenied";
          case AddonIssueCode::UnsupportedAddonModification:
            return "UnsupportedAddonModification";
          case AddonIssueCode::K8sResourceNotFound:
            return "K8sResourceNotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddonIssueCodeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
