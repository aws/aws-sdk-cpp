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

        static constexpr uint32_t ACCOUNT_ID_HASH = ConstExprHashingUtils::HashString("ACCOUNT_ID");
        static constexpr uint32_t CLUSTER_NAME_HASH = ConstExprHashingUtils::HashString("CLUSTER_NAME");
        static constexpr uint32_t RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("RESOURCE_TYPE");
        static constexpr uint32_t COVERAGE_STATUS_HASH = ConstExprHashingUtils::HashString("COVERAGE_STATUS");
        static constexpr uint32_t ADDON_VERSION_HASH = ConstExprHashingUtils::HashString("ADDON_VERSION");
        static constexpr uint32_t MANAGEMENT_TYPE_HASH = ConstExprHashingUtils::HashString("MANAGEMENT_TYPE");
        static constexpr uint32_t EKS_CLUSTER_NAME_HASH = ConstExprHashingUtils::HashString("EKS_CLUSTER_NAME");


        CoverageFilterCriterionKey GetCoverageFilterCriterionKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
