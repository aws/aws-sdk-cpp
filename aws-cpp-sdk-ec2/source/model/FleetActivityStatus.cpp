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

#include <aws/ec2/model/FleetActivityStatus.h>
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
      namespace FleetActivityStatusMapper
      {

        static const int error_HASH = HashingUtils::HashString("error");
        static const int pending_fulfillment_HASH = HashingUtils::HashString("pending_fulfillment");
        static const int pending_termination_HASH = HashingUtils::HashString("pending_termination");
        static const int fulfilled_HASH = HashingUtils::HashString("fulfilled");


        FleetActivityStatus GetFleetActivityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == error_HASH)
          {
            return FleetActivityStatus::error;
          }
          else if (hashCode == pending_fulfillment_HASH)
          {
            return FleetActivityStatus::pending_fulfillment;
          }
          else if (hashCode == pending_termination_HASH)
          {
            return FleetActivityStatus::pending_termination;
          }
          else if (hashCode == fulfilled_HASH)
          {
            return FleetActivityStatus::fulfilled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetActivityStatus>(hashCode);
          }

          return FleetActivityStatus::NOT_SET;
        }

        Aws::String GetNameForFleetActivityStatus(FleetActivityStatus enumValue)
        {
          switch(enumValue)
          {
          case FleetActivityStatus::error:
            return "error";
          case FleetActivityStatus::pending_fulfillment:
            return "pending_fulfillment";
          case FleetActivityStatus::pending_termination:
            return "pending_termination";
          case FleetActivityStatus::fulfilled:
            return "fulfilled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetActivityStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
