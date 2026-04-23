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

#include <aws/appstream/model/FleetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetTypeMapper
      {

        static const int ALWAYS_ON_HASH = HashingUtils::HashString("ALWAYS_ON");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        FleetType GetFleetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_ON_HASH)
          {
            return FleetType::ALWAYS_ON;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return FleetType::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetType>(hashCode);
          }

          return FleetType::NOT_SET;
        }

        Aws::String GetNameForFleetType(FleetType enumValue)
        {
          switch(enumValue)
          {
          case FleetType::ALWAYS_ON:
            return "ALWAYS_ON";
          case FleetType::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
