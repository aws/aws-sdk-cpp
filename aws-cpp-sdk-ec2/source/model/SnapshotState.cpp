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
#include <aws/ec2/model/SnapshotState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace SnapshotStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int error_HASH = HashingUtils::HashString("error");


        SnapshotState GetSnapshotStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return SnapshotState::pending;
          }
          else if (hashCode == completed_HASH)
          {
            return SnapshotState::completed;
          }
          else if (hashCode == error_HASH)
          {
            return SnapshotState::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotState>(hashCode);
          }

          return SnapshotState::NOT_SET;
        }

        Aws::String GetNameForSnapshotState(SnapshotState enumValue)
        {
          switch(enumValue)
          {
          case SnapshotState::pending:
            return "pending";
          case SnapshotState::completed:
            return "completed";
          case SnapshotState::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SnapshotStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
