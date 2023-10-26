/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/EventDataSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace EventDataSourceMapper
      {

        static const int AWS_CLOUD_TRAIL_HASH = HashingUtils::HashString("AWS_CLOUD_TRAIL");
        static const int AWS_CODE_DEPLOY_HASH = HashingUtils::HashString("AWS_CODE_DEPLOY");


        EventDataSource GetEventDataSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CLOUD_TRAIL_HASH)
          {
            return EventDataSource::AWS_CLOUD_TRAIL;
          }
          else if (hashCode == AWS_CODE_DEPLOY_HASH)
          {
            return EventDataSource::AWS_CODE_DEPLOY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventDataSource>(hashCode);
          }

          return EventDataSource::NOT_SET;
        }

        Aws::String GetNameForEventDataSource(EventDataSource enumValue)
        {
          switch(enumValue)
          {
          case EventDataSource::NOT_SET:
            return {};
          case EventDataSource::AWS_CLOUD_TRAIL:
            return "AWS_CLOUD_TRAIL";
          case EventDataSource::AWS_CODE_DEPLOY:
            return "AWS_CODE_DEPLOY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventDataSourceMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
