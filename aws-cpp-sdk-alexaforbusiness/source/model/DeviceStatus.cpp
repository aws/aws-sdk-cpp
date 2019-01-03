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

#include <aws/alexaforbusiness/model/DeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DeviceStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int WAS_OFFLINE_HASH = HashingUtils::HashString("WAS_OFFLINE");
        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return DeviceStatus::READY;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeviceStatus::PENDING;
          }
          else if (hashCode == WAS_OFFLINE_HASH)
          {
            return DeviceStatus::WAS_OFFLINE;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return DeviceStatus::DEREGISTERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatus>(hashCode);
          }

          return DeviceStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceStatus(DeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatus::READY:
            return "READY";
          case DeviceStatus::PENDING:
            return "PENDING";
          case DeviceStatus::WAS_OFFLINE:
            return "WAS_OFFLINE";
          case DeviceStatus::DEREGISTERED:
            return "DEREGISTERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
