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

#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackDriftStatusMapper
      {

        static const int DRIFTED_HASH = HashingUtils::HashString("DRIFTED");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int NOT_CHECKED_HASH = HashingUtils::HashString("NOT_CHECKED");


        StackDriftStatus GetStackDriftStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRIFTED_HASH)
          {
            return StackDriftStatus::DRIFTED;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return StackDriftStatus::IN_SYNC;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return StackDriftStatus::UNKNOWN;
          }
          else if (hashCode == NOT_CHECKED_HASH)
          {
            return StackDriftStatus::NOT_CHECKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackDriftStatus>(hashCode);
          }

          return StackDriftStatus::NOT_SET;
        }

        Aws::String GetNameForStackDriftStatus(StackDriftStatus enumValue)
        {
          switch(enumValue)
          {
          case StackDriftStatus::DRIFTED:
            return "DRIFTED";
          case StackDriftStatus::IN_SYNC:
            return "IN_SYNC";
          case StackDriftStatus::UNKNOWN:
            return "UNKNOWN";
          case StackDriftStatus::NOT_CHECKED:
            return "NOT_CHECKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackDriftStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
