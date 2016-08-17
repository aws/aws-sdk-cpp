/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticbeanstalk/model/ActionStatus.h>
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
      namespace ActionStatusMapper
      {

        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        ActionStatus GetActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scheduled_HASH)
          {
            return ActionStatus::Scheduled;
          }
          else if (hashCode == Pending_HASH)
          {
            return ActionStatus::Pending;
          }
          else if (hashCode == Running_HASH)
          {
            return ActionStatus::Running;
          }
          else if (hashCode == Unknown_HASH)
          {
            return ActionStatus::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionStatus>(hashCode);
          }

          return ActionStatus::NOT_SET;
        }

        Aws::String GetNameForActionStatus(ActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionStatus::Scheduled:
            return "Scheduled";
          case ActionStatus::Pending:
            return "Pending";
          case ActionStatus::Running:
            return "Running";
          case ActionStatus::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ActionStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
