/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentHistoryFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace DeploymentHistoryFilterMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int LATEST_ONLY_HASH = HashingUtils::HashString("LATEST_ONLY");


        DeploymentHistoryFilter GetDeploymentHistoryFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return DeploymentHistoryFilter::ALL;
          }
          else if (hashCode == LATEST_ONLY_HASH)
          {
            return DeploymentHistoryFilter::LATEST_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentHistoryFilter>(hashCode);
          }

          return DeploymentHistoryFilter::NOT_SET;
        }

        Aws::String GetNameForDeploymentHistoryFilter(DeploymentHistoryFilter enumValue)
        {
          switch(enumValue)
          {
          case DeploymentHistoryFilter::NOT_SET:
            return {};
          case DeploymentHistoryFilter::ALL:
            return "ALL";
          case DeploymentHistoryFilter::LATEST_ONLY:
            return "LATEST_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentHistoryFilterMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
