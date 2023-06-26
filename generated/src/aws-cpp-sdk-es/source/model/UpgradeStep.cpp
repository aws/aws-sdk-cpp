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

        static const int PRE_UPGRADE_CHECK_HASH = HashingUtils::HashString("PRE_UPGRADE_CHECK");
        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");
        static const int UPGRADE_HASH = HashingUtils::HashString("UPGRADE");


        UpgradeStep GetUpgradeStepForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
