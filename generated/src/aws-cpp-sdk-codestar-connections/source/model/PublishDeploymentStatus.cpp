/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/PublishDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace PublishDeploymentStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PublishDeploymentStatus GetPublishDeploymentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PublishDeploymentStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PublishDeploymentStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PublishDeploymentStatus>(hashCode);
          }

          return PublishDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForPublishDeploymentStatus(PublishDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case PublishDeploymentStatus::NOT_SET:
            return {};
          case PublishDeploymentStatus::ENABLED:
            return "ENABLED";
          case PublishDeploymentStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PublishDeploymentStatusMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
