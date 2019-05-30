/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ActivityStreamModeMapper
      {

        static const int sync_HASH = HashingUtils::HashString("sync");
        static const int async_HASH = HashingUtils::HashString("async");


        ActivityStreamMode GetActivityStreamModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sync_HASH)
          {
            return ActivityStreamMode::sync;
          }
          else if (hashCode == async_HASH)
          {
            return ActivityStreamMode::async;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStreamMode>(hashCode);
          }

          return ActivityStreamMode::NOT_SET;
        }

        Aws::String GetNameForActivityStreamMode(ActivityStreamMode enumValue)
        {
          switch(enumValue)
          {
          case ActivityStreamMode::sync:
            return "sync";
          case ActivityStreamMode::async:
            return "async";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityStreamModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
