/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageSortKey.h>
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
      namespace CoverageSortKeyMapper
      {

        static constexpr uint32_t ACCOUNT_ID_HASH = ConstExprHashingUtils::HashString("ACCOUNT_ID");
        static constexpr uint32_t CLUSTER_NAME_HASH = ConstExprHashingUtils::HashString("CLUSTER_NAME");
        static constexpr uint32_t COVERAGE_STATUS_HASH = ConstExprHashingUtils::HashString("COVERAGE_STATUS");
        static constexpr uint32_t ISSUE_HASH = ConstExprHashingUtils::HashString("ISSUE");
        static constexpr uint32_t ADDON_VERSION_HASH = ConstExprHashingUtils::HashString("ADDON_VERSION");
        static constexpr uint32_t UPDATED_AT_HASH = ConstExprHashingUtils::HashString("UPDATED_AT");
        static constexpr uint32_t EKS_CLUSTER_NAME_HASH = ConstExprHashingUtils::HashString("EKS_CLUSTER_NAME");


        CoverageSortKey GetCoverageSortKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return CoverageSortKey::ACCOUNT_ID;
          }
          else if (hashCode == CLUSTER_NAME_HASH)
          {
            return CoverageSortKey::CLUSTER_NAME;
          }
          else if (hashCode == COVERAGE_STATUS_HASH)
          {
            return CoverageSortKey::COVERAGE_STATUS;
          }
          else if (hashCode == ISSUE_HASH)
          {
            return CoverageSortKey::ISSUE;
          }
          else if (hashCode == ADDON_VERSION_HASH)
          {
            return CoverageSortKey::ADDON_VERSION;
          }
          else if (hashCode == UPDATED_AT_HASH)
          {
            return CoverageSortKey::UPDATED_AT;
          }
          else if (hashCode == EKS_CLUSTER_NAME_HASH)
          {
            return CoverageSortKey::EKS_CLUSTER_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageSortKey>(hashCode);
          }

          return CoverageSortKey::NOT_SET;
        }

        Aws::String GetNameForCoverageSortKey(CoverageSortKey enumValue)
        {
          switch(enumValue)
          {
          case CoverageSortKey::NOT_SET:
            return {};
          case CoverageSortKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case CoverageSortKey::CLUSTER_NAME:
            return "CLUSTER_NAME";
          case CoverageSortKey::COVERAGE_STATUS:
            return "COVERAGE_STATUS";
          case CoverageSortKey::ISSUE:
            return "ISSUE";
          case CoverageSortKey::ADDON_VERSION:
            return "ADDON_VERSION";
          case CoverageSortKey::UPDATED_AT:
            return "UPDATED_AT";
          case CoverageSortKey::EKS_CLUSTER_NAME:
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

      } // namespace CoverageSortKeyMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
