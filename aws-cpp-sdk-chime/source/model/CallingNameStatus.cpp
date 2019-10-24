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

#include <aws/chime/model/CallingNameStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace CallingNameStatusMapper
      {

        static const int Unassigned_HASH = HashingUtils::HashString("Unassigned");
        static const int UpdateInProgress_HASH = HashingUtils::HashString("UpdateInProgress");
        static const int UpdateSucceeded_HASH = HashingUtils::HashString("UpdateSucceeded");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");


        CallingNameStatus GetCallingNameStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unassigned_HASH)
          {
            return CallingNameStatus::Unassigned;
          }
          else if (hashCode == UpdateInProgress_HASH)
          {
            return CallingNameStatus::UpdateInProgress;
          }
          else if (hashCode == UpdateSucceeded_HASH)
          {
            return CallingNameStatus::UpdateSucceeded;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return CallingNameStatus::UpdateFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallingNameStatus>(hashCode);
          }

          return CallingNameStatus::NOT_SET;
        }

        Aws::String GetNameForCallingNameStatus(CallingNameStatus enumValue)
        {
          switch(enumValue)
          {
          case CallingNameStatus::Unassigned:
            return "Unassigned";
          case CallingNameStatus::UpdateInProgress:
            return "UpdateInProgress";
          case CallingNameStatus::UpdateSucceeded:
            return "UpdateSucceeded";
          case CallingNameStatus::UpdateFailed:
            return "UpdateFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallingNameStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
