/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/UpgradeStep.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace UpgradeStepMapper
      {

        static constexpr uint32_t PRE_UPGRADE_CHECK_HASH = ConstExprHashingUtils::HashString("PRE_UPGRADE_CHECK");
        static constexpr uint32_t SNAPSHOT_HASH = ConstExprHashingUtils::HashString("SNAPSHOT");
        static constexpr uint32_t UPGRADE_HASH = ConstExprHashingUtils::HashString("UPGRADE");


        UpgradeStep GetUpgradeStepForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_UPGRADE_CHECK_HASH)
          {
            return UpgradeStep::PRE_UPGRADE_CHECK;
          }
          else if (hashCode == SNAPSHOT_HASH)
          {
            return UpgradeStep::SNAPSHOT;
          }
          else if (hashCode == UPGRADE_HASH)
          {
            return UpgradeStep::UPGRADE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpgradeStep>(hashCode);
          }

          return UpgradeStep::NOT_SET;
        }

        Aws::String GetNameForUpgradeStep(UpgradeStep enumValue)
        {
          switch(enumValue)
          {
          case UpgradeStep::NOT_SET:
            return {};
          case UpgradeStep::PRE_UPGRADE_CHECK:
            return "PRE_UPGRADE_CHECK";
          case UpgradeStep::SNAPSHOT:
            return "SNAPSHOT";
          case UpgradeStep::UPGRADE:
            return "UPGRADE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpgradeStepMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
