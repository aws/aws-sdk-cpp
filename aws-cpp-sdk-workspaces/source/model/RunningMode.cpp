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
#include <aws/workspaces/model/RunningMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace RunningModeMapper
      {

        static const int AUTO_STOP_HASH = HashingUtils::HashString("AUTO_STOP");
        static const int ALWAYS_ON_HASH = HashingUtils::HashString("ALWAYS_ON");


        RunningMode GetRunningModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_STOP_HASH)
          {
            return RunningMode::AUTO_STOP;
          }
          else if (hashCode == ALWAYS_ON_HASH)
          {
            return RunningMode::ALWAYS_ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunningMode>(hashCode);
          }

          return RunningMode::NOT_SET;
        }

        Aws::String GetNameForRunningMode(RunningMode enumValue)
        {
          switch(enumValue)
          {
          case RunningMode::AUTO_STOP:
            return "AUTO_STOP";
          case RunningMode::ALWAYS_ON:
            return "ALWAYS_ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RunningModeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
