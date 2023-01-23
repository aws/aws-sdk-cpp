/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/CloudWatchEventSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace CloudWatchEventSourceMapper
      {

        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int CODE_DEPLOY_HASH = HashingUtils::HashString("CODE_DEPLOY");
        static const int HEALTH_HASH = HashingUtils::HashString("HEALTH");
        static const int RDS_HASH = HashingUtils::HashString("RDS");


        CloudWatchEventSource GetCloudWatchEventSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_HASH)
          {
            return CloudWatchEventSource::EC2;
          }
          else if (hashCode == CODE_DEPLOY_HASH)
          {
            return CloudWatchEventSource::CODE_DEPLOY;
          }
          else if (hashCode == HEALTH_HASH)
          {
            return CloudWatchEventSource::HEALTH;
          }
          else if (hashCode == RDS_HASH)
          {
            return CloudWatchEventSource::RDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchEventSource>(hashCode);
          }

          return CloudWatchEventSource::NOT_SET;
        }

        Aws::String GetNameForCloudWatchEventSource(CloudWatchEventSource enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchEventSource::EC2:
            return "EC2";
          case CloudWatchEventSource::CODE_DEPLOY:
            return "CODE_DEPLOY";
          case CloudWatchEventSource::HEALTH:
            return "HEALTH";
          case CloudWatchEventSource::RDS:
            return "RDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchEventSourceMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
