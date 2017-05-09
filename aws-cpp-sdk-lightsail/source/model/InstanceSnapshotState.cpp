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

#include <aws/lightsail/model/InstanceSnapshotState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceSnapshotStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int error_HASH = HashingUtils::HashString("error");
        static const int available_HASH = HashingUtils::HashString("available");


        InstanceSnapshotState GetInstanceSnapshotStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceSnapshotState::pending;
          }
          else if (hashCode == error_HASH)
          {
            return InstanceSnapshotState::error;
          }
          else if (hashCode == available_HASH)
          {
            return InstanceSnapshotState::available;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceSnapshotState>(hashCode);
          }

          return InstanceSnapshotState::NOT_SET;
        }

        Aws::String GetNameForInstanceSnapshotState(InstanceSnapshotState enumValue)
        {
          switch(enumValue)
          {
          case InstanceSnapshotState::pending:
            return "pending";
          case InstanceSnapshotState::error:
            return "error";
          case InstanceSnapshotState::available:
            return "available";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceSnapshotStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
