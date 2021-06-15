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

        static const int AccessDenied_HASH = HashingUtils::HashString("AccessDenied");
        static const int InternalFailure_HASH = HashingUtils::HashString("InternalFailure");
        static const int ClusterUnreachable_HASH = HashingUtils::HashString("ClusterUnreachable");
        static const int InsufficientNumberOfReplicas_HASH = HashingUtils::HashString("InsufficientNumberOfReplicas");
        static const int ConfigurationConflict_HASH = HashingUtils::HashString("ConfigurationConflict");
        static const int AdmissionRequestDenied_HASH = HashingUtils::HashString("AdmissionRequestDenied");


        AddonIssueCode GetAddonIssueCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
