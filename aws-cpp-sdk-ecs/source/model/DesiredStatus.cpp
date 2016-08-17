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
#include <aws/ecs/model/DesiredStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace DesiredStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        DesiredStatus GetDesiredStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DesiredStatus::RUNNING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DesiredStatus::PENDING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DesiredStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredStatus>(hashCode);
          }

          return DesiredStatus::NOT_SET;
        }

        Aws::String GetNameForDesiredStatus(DesiredStatus enumValue)
        {
          switch(enumValue)
          {
          case DesiredStatus::RUNNING:
            return "RUNNING";
          case DesiredStatus::PENDING:
            return "PENDING";
          case DesiredStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DesiredStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
