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
#include <aws/elasticbeanstalk/model/ActionHistoryStatus.h>
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
      namespace ActionHistoryStatusMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        ActionHistoryStatus GetActionHistoryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return ActionHistoryStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ActionHistoryStatus::Failed;
          }
          else if (hashCode == Unknown_HASH)
          {
            return ActionHistoryStatus::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionHistoryStatus>(hashCode);
          }

          return ActionHistoryStatus::NOT_SET;
        }

        Aws::String GetNameForActionHistoryStatus(ActionHistoryStatus enumValue)
        {
          switch(enumValue)
          {
          case ActionHistoryStatus::Completed:
            return "Completed";
          case ActionHistoryStatus::Failed:
            return "Failed";
          case ActionHistoryStatus::Unknown:
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

      } // namespace ActionHistoryStatusMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
