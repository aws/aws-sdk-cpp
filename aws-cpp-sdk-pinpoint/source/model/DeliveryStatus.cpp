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

#include <aws/pinpoint/model/DeliveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace DeliveryStatusMapper
      {

        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
        static const int TEMPORARY_FAILURE_HASH = HashingUtils::HashString("TEMPORARY_FAILURE");
        static const int PERMANENT_FAILURE_HASH = HashingUtils::HashString("PERMANENT_FAILURE");


        DeliveryStatus GetDeliveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESSFUL_HASH)
          {
            return DeliveryStatus::SUCCESSFUL;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return DeliveryStatus::THROTTLED;
          }
          else if (hashCode == TEMPORARY_FAILURE_HASH)
          {
            return DeliveryStatus::TEMPORARY_FAILURE;
          }
          else if (hashCode == PERMANENT_FAILURE_HASH)
          {
            return DeliveryStatus::PERMANENT_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStatus>(hashCode);
          }

          return DeliveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case DeliveryStatus::THROTTLED:
            return "THROTTLED";
          case DeliveryStatus::TEMPORARY_FAILURE:
            return "TEMPORARY_FAILURE";
          case DeliveryStatus::PERMANENT_FAILURE:
            return "PERMANENT_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeliveryStatusMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
