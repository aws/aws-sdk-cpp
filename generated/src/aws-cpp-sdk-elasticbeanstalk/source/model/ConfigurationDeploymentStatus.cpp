/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ConfigurationDeploymentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace ConfigurationDeploymentStatusMapper
      {

        static constexpr uint32_t deployed_HASH = ConstExprHashingUtils::HashString("deployed");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        ConfigurationDeploymentStatus GetConfigurationDeploymentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == deployed_HASH)
          {
            return ConfigurationDeploymentStatus::deployed;
          }
          else if (hashCode == pending_HASH)
          {
            return ConfigurationDeploymentStatus::pending;
          }
          else if (hashCode == failed_HASH)
          {
            return ConfigurationDeploymentStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationDeploymentStatus>(hashCode);
          }

          return ConfigurationDeploymentStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationDeploymentStatus(ConfigurationDeploymentStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationDeploymentStatus::NOT_SET:
            return {};
          case ConfigurationDeploymentStatus::deployed:
            return "deployed";
          case ConfigurationDeploymentStatus::pending:
            return "pending";
          case ConfigurationDeploymentStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationDeploymentStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
