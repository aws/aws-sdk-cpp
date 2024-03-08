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

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int CLUSTER_NAME_HASH = HashingUtils::HashString("CLUSTER_NAME");
        static const int COVERAGE_STATUS_HASH = HashingUtils::HashString("COVERAGE_STATUS");
        static const int ISSUE_HASH = HashingUtils::HashString("ISSUE");
        static const int ADDON_VERSION_HASH = HashingUtils::HashString("ADDON_VERSION");
        static const int UPDATED_AT_HASH = HashingUtils::HashString("UPDATED_AT");
        static const int EKS_CLUSTER_NAME_HASH = HashingUtils::HashString("EKS_CLUSTER_NAME");
        static const int ECS_CLUSTER_NAME_HASH = HashingUtils::HashString("ECS_CLUSTER_NAME");
        static const int INSTANCE_ID_HASH = HashingUtils::HashString("INSTANCE_ID");


        CoverageSortKey GetCoverageSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ECS_CLUSTER_NAME_HASH)
          {
            return CoverageSortKey::ECS_CLUSTER_NAME;
          }
          else if (hashCode == INSTANCE_ID_HASH)
          {
            return CoverageSortKey::INSTANCE_ID;
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
          case CoverageSortKey::ECS_CLUSTER_NAME:
            return "ECS_CLUSTER_NAME";
          case CoverageSortKey::INSTANCE_ID:
            return "INSTANCE_ID";
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
