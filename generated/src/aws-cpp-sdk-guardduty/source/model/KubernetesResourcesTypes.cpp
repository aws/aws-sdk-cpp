/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesResourcesTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace KubernetesResourcesTypesMapper
      {

        static const int PODS_HASH = HashingUtils::HashString("PODS");
        static const int JOBS_HASH = HashingUtils::HashString("JOBS");
        static const int CRONJOBS_HASH = HashingUtils::HashString("CRONJOBS");
        static const int DEPLOYMENTS_HASH = HashingUtils::HashString("DEPLOYMENTS");
        static const int DAEMONSETS_HASH = HashingUtils::HashString("DAEMONSETS");
        static const int STATEFULSETS_HASH = HashingUtils::HashString("STATEFULSETS");
        static const int REPLICASETS_HASH = HashingUtils::HashString("REPLICASETS");
        static const int REPLICATIONCONTROLLERS_HASH = HashingUtils::HashString("REPLICATIONCONTROLLERS");


        KubernetesResourcesTypes GetKubernetesResourcesTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PODS_HASH)
          {
            return KubernetesResourcesTypes::PODS;
          }
          else if (hashCode == JOBS_HASH)
          {
            return KubernetesResourcesTypes::JOBS;
          }
          else if (hashCode == CRONJOBS_HASH)
          {
            return KubernetesResourcesTypes::CRONJOBS;
          }
          else if (hashCode == DEPLOYMENTS_HASH)
          {
            return KubernetesResourcesTypes::DEPLOYMENTS;
          }
          else if (hashCode == DAEMONSETS_HASH)
          {
            return KubernetesResourcesTypes::DAEMONSETS;
          }
          else if (hashCode == STATEFULSETS_HASH)
          {
            return KubernetesResourcesTypes::STATEFULSETS;
          }
          else if (hashCode == REPLICASETS_HASH)
          {
            return KubernetesResourcesTypes::REPLICASETS;
          }
          else if (hashCode == REPLICATIONCONTROLLERS_HASH)
          {
            return KubernetesResourcesTypes::REPLICATIONCONTROLLERS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KubernetesResourcesTypes>(hashCode);
          }

          return KubernetesResourcesTypes::NOT_SET;
        }

        Aws::String GetNameForKubernetesResourcesTypes(KubernetesResourcesTypes enumValue)
        {
          switch(enumValue)
          {
          case KubernetesResourcesTypes::NOT_SET:
            return {};
          case KubernetesResourcesTypes::PODS:
            return "PODS";
          case KubernetesResourcesTypes::JOBS:
            return "JOBS";
          case KubernetesResourcesTypes::CRONJOBS:
            return "CRONJOBS";
          case KubernetesResourcesTypes::DEPLOYMENTS:
            return "DEPLOYMENTS";
          case KubernetesResourcesTypes::DAEMONSETS:
            return "DAEMONSETS";
          case KubernetesResourcesTypes::STATEFULSETS:
            return "STATEFULSETS";
          case KubernetesResourcesTypes::REPLICASETS:
            return "REPLICASETS";
          case KubernetesResourcesTypes::REPLICATIONCONTROLLERS:
            return "REPLICATIONCONTROLLERS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KubernetesResourcesTypesMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
