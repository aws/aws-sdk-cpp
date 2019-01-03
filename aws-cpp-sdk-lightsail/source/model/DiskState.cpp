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

#include <aws/lightsail/model/DiskState.h>
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
      namespace DiskStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int error_HASH = HashingUtils::HashString("error");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int in_use_HASH = HashingUtils::HashString("in-use");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        DiskState GetDiskStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return DiskState::pending;
          }
          else if (hashCode == error_HASH)
          {
            return DiskState::error;
          }
          else if (hashCode == available_HASH)
          {
            return DiskState::available;
          }
          else if (hashCode == in_use_HASH)
          {
            return DiskState::in_use;
          }
          else if (hashCode == unknown_HASH)
          {
            return DiskState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskState>(hashCode);
          }

          return DiskState::NOT_SET;
        }

        Aws::String GetNameForDiskState(DiskState enumValue)
        {
          switch(enumValue)
          {
          case DiskState::pending:
            return "pending";
          case DiskState::error:
            return "error";
          case DiskState::available:
            return "available";
          case DiskState::in_use:
            return "in-use";
          case DiskState::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
