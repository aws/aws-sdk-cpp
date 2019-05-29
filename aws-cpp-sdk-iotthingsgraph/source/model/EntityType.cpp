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

#include <aws/iotthingsgraph/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTThingsGraph
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static const int DEVICE_HASH = HashingUtils::HashString("DEVICE");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int DEVICE_MODEL_HASH = HashingUtils::HashString("DEVICE_MODEL");
        static const int CAPABILITY_HASH = HashingUtils::HashString("CAPABILITY");
        static const int STATE_HASH = HashingUtils::HashString("STATE");
        static const int ACTION_HASH = HashingUtils::HashString("ACTION");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int PROPERTY_HASH = HashingUtils::HashString("PROPERTY");
        static const int MAPPING_HASH = HashingUtils::HashString("MAPPING");
        static const int ENUM_HASH = HashingUtils::HashString("ENUM");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_HASH)
          {
            return EntityType::DEVICE;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return EntityType::SERVICE;
          }
          else if (hashCode == DEVICE_MODEL_HASH)
          {
            return EntityType::DEVICE_MODEL;
          }
          else if (hashCode == CAPABILITY_HASH)
          {
            return EntityType::CAPABILITY;
          }
          else if (hashCode == STATE_HASH)
          {
            return EntityType::STATE;
          }
          else if (hashCode == ACTION_HASH)
          {
            return EntityType::ACTION;
          }
          else if (hashCode == EVENT_HASH)
          {
            return EntityType::EVENT;
          }
          else if (hashCode == PROPERTY_HASH)
          {
            return EntityType::PROPERTY;
          }
          else if (hashCode == MAPPING_HASH)
          {
            return EntityType::MAPPING;
          }
          else if (hashCode == ENUM_HASH)
          {
            return EntityType::ENUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::DEVICE:
            return "DEVICE";
          case EntityType::SERVICE:
            return "SERVICE";
          case EntityType::DEVICE_MODEL:
            return "DEVICE_MODEL";
          case EntityType::CAPABILITY:
            return "CAPABILITY";
          case EntityType::STATE:
            return "STATE";
          case EntityType::ACTION:
            return "ACTION";
          case EntityType::EVENT:
            return "EVENT";
          case EntityType::PROPERTY:
            return "PROPERTY";
          case EntityType::MAPPING:
            return "MAPPING";
          case EntityType::ENUM:
            return "ENUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace IoTThingsGraph
} // namespace Aws
