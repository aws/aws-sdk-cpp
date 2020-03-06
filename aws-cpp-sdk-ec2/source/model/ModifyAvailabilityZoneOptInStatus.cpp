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

#include <aws/ec2/model/ModifyAvailabilityZoneOptInStatus.h>
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
      namespace ModifyAvailabilityZoneOptInStatusMapper
      {

        static const int opted_in_HASH = HashingUtils::HashString("opted-in");
        static const int not_opted_in_HASH = HashingUtils::HashString("not-opted-in");


        ModifyAvailabilityZoneOptInStatus GetModifyAvailabilityZoneOptInStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == opted_in_HASH)
          {
            return ModifyAvailabilityZoneOptInStatus::opted_in;
          }
          else if (hashCode == not_opted_in_HASH)
          {
            return ModifyAvailabilityZoneOptInStatus::not_opted_in;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModifyAvailabilityZoneOptInStatus>(hashCode);
          }

          return ModifyAvailabilityZoneOptInStatus::NOT_SET;
        }

        Aws::String GetNameForModifyAvailabilityZoneOptInStatus(ModifyAvailabilityZoneOptInStatus enumValue)
        {
          switch(enumValue)
          {
          case ModifyAvailabilityZoneOptInStatus::opted_in:
            return "opted-in";
          case ModifyAvailabilityZoneOptInStatus::not_opted_in:
            return "not-opted-in";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModifyAvailabilityZoneOptInStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
