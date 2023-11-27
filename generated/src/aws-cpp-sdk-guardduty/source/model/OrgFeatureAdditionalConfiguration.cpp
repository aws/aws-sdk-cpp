/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/OrgFeatureAdditionalConfiguration.h>
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
      namespace OrgFeatureAdditionalConfigurationMapper
      {

        static const int EKS_ADDON_MANAGEMENT_HASH = HashingUtils::HashString("EKS_ADDON_MANAGEMENT");
        static const int ECS_FARGATE_AGENT_MANAGEMENT_HASH = HashingUtils::HashString("ECS_FARGATE_AGENT_MANAGEMENT");


        OrgFeatureAdditionalConfiguration GetOrgFeatureAdditionalConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_ADDON_MANAGEMENT_HASH)
          {
            return OrgFeatureAdditionalConfiguration::EKS_ADDON_MANAGEMENT;
          }
          else if (hashCode == ECS_FARGATE_AGENT_MANAGEMENT_HASH)
          {
            return OrgFeatureAdditionalConfiguration::ECS_FARGATE_AGENT_MANAGEMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrgFeatureAdditionalConfiguration>(hashCode);
          }

          return OrgFeatureAdditionalConfiguration::NOT_SET;
        }

        Aws::String GetNameForOrgFeatureAdditionalConfiguration(OrgFeatureAdditionalConfiguration enumValue)
        {
          switch(enumValue)
          {
          case OrgFeatureAdditionalConfiguration::NOT_SET:
            return {};
          case OrgFeatureAdditionalConfiguration::EKS_ADDON_MANAGEMENT:
            return "EKS_ADDON_MANAGEMENT";
          case OrgFeatureAdditionalConfiguration::ECS_FARGATE_AGENT_MANAGEMENT:
            return "ECS_FARGATE_AGENT_MANAGEMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrgFeatureAdditionalConfigurationMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
