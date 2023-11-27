/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageFilterCriterionKey.h>
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
      namespace CoverageFilterCriterionKeyMapper
      {

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int CLUSTER_NAME_HASH = HashingUtils::HashString("CLUSTER_NAME");
        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int COVERAGE_STATUS_HASH = HashingUtils::HashString("COVERAGE_STATUS");
        static const int ADDON_VERSION_HASH = HashingUtils::HashString("ADDON_VERSION");
        static const int MANAGEMENT_TYPE_HASH = HashingUtils::HashString("MANAGEMENT_TYPE");
        static const int EKS_CLUSTER_NAME_HASH = HashingUtils::HashString("EKS_CLUSTER_NAME");
        static const int ECS_CLUSTER_NAME_HASH = HashingUtils::HashString("ECS_CLUSTER_NAME");
        static const int AGENT_VERSION_HASH = HashingUtils::HashString("AGENT_VERSION");
        static const int INSTANCE_ID_HASH = HashingUtils::HashString("INSTANCE_ID");
        static const int CLUSTER_ARN_HASH = HashingUtils::HashString("CLUSTER_ARN");


        CoverageFilterCriterionKey GetCoverageFilterCriterionKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return CoverageFilterCriterionKey::ACCOUNT_ID;
          }
          else if (hashCode == CLUSTER_NAME_HASH)
          {
            return CoverageFilterCriterionKey::CLUSTER_NAME;
          }
          else if (hashCode == RESOURCE_TYPE_HASH)
          {
            return CoverageFilterCriterionKey::RESOURCE_TYPE;
          }
          else if (hashCode == COVERAGE_STATUS_HASH)
          {
            return CoverageFilterCriterionKey::COVERAGE_STATUS;
          }
          else if (hashCode == ADDON_VERSION_HASH)
          {
            return CoverageFilterCriterionKey::ADDON_VERSION;
          }
          else if (hashCode == MANAGEMENT_TYPE_HASH)
          {
            return CoverageFilterCriterionKey::MANAGEMENT_TYPE;
          }
          else if (hashCode == EKS_CLUSTER_NAME_HASH)
          {
            return CoverageFilterCriterionKey::EKS_CLUSTER_NAME;
          }
          else if (hashCode == ECS_CLUSTER_NAME_HASH)
          {
            return CoverageFilterCriterionKey::ECS_CLUSTER_NAME;
          }
          else if (hashCode == AGENT_VERSION_HASH)
          {
            return CoverageFilterCriterionKey::AGENT_VERSION;
          }
          else if (hashCode == INSTANCE_ID_HASH)
          {
            return CoverageFilterCriterionKey::INSTANCE_ID;
          }
          else if (hashCode == CLUSTER_ARN_HASH)
          {
            return CoverageFilterCriterionKey::CLUSTER_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageFilterCriterionKey>(hashCode);
          }

          return CoverageFilterCriterionKey::NOT_SET;
        }

        Aws::String GetNameForCoverageFilterCriterionKey(CoverageFilterCriterionKey enumValue)
        {
          switch(enumValue)
          {
          case CoverageFilterCriterionKey::NOT_SET:
            return {};
          case CoverageFilterCriterionKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case CoverageFilterCriterionKey::CLUSTER_NAME:
            return "CLUSTER_NAME";
          case CoverageFilterCriterionKey::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case CoverageFilterCriterionKey::COVERAGE_STATUS:
            return "COVERAGE_STATUS";
          case CoverageFilterCriterionKey::ADDON_VERSION:
            return "ADDON_VERSION";
          case CoverageFilterCriterionKey::MANAGEMENT_TYPE:
            return "MANAGEMENT_TYPE";
          case CoverageFilterCriterionKey::EKS_CLUSTER_NAME:
            return "EKS_CLUSTER_NAME";
          case CoverageFilterCriterionKey::ECS_CLUSTER_NAME:
            return "ECS_CLUSTER_NAME";
          case CoverageFilterCriterionKey::AGENT_VERSION:
            return "AGENT_VERSION";
          case CoverageFilterCriterionKey::INSTANCE_ID:
            return "INSTANCE_ID";
          case CoverageFilterCriterionKey::CLUSTER_ARN:
            return "CLUSTER_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoverageFilterCriterionKeyMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
