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

#include <aws/greengrass/model/SoftwareToUpdate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace SoftwareToUpdateMapper
      {

        static const int core_HASH = HashingUtils::HashString("core");
        static const int ota_agent_HASH = HashingUtils::HashString("ota_agent");


        SoftwareToUpdate GetSoftwareToUpdateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == core_HASH)
          {
            return SoftwareToUpdate::core;
          }
          else if (hashCode == ota_agent_HASH)
          {
            return SoftwareToUpdate::ota_agent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareToUpdate>(hashCode);
          }

          return SoftwareToUpdate::NOT_SET;
        }

        Aws::String GetNameForSoftwareToUpdate(SoftwareToUpdate enumValue)
        {
          switch(enumValue)
          {
          case SoftwareToUpdate::core:
            return "core";
          case SoftwareToUpdate::ota_agent:
            return "ota_agent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareToUpdateMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
