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

#include <aws/iot/model/ThingIndexingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ThingIndexingModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int REGISTRY_HASH = HashingUtils::HashString("REGISTRY");
        static const int REGISTRY_AND_SHADOW_HASH = HashingUtils::HashString("REGISTRY_AND_SHADOW");


        ThingIndexingMode GetThingIndexingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return ThingIndexingMode::OFF;
          }
          else if (hashCode == REGISTRY_HASH)
          {
            return ThingIndexingMode::REGISTRY;
          }
          else if (hashCode == REGISTRY_AND_SHADOW_HASH)
          {
            return ThingIndexingMode::REGISTRY_AND_SHADOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThingIndexingMode>(hashCode);
          }

          return ThingIndexingMode::NOT_SET;
        }

        Aws::String GetNameForThingIndexingMode(ThingIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case ThingIndexingMode::OFF:
            return "OFF";
          case ThingIndexingMode::REGISTRY:
            return "REGISTRY";
          case ThingIndexingMode::REGISTRY_AND_SHADOW:
            return "REGISTRY_AND_SHADOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThingIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
