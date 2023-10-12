/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t DEVICE_HASH = ConstExprHashingUtils::HashString("DEVICE");
        static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("SERVICE");
        static constexpr uint32_t DEVICE_MODEL_HASH = ConstExprHashingUtils::HashString("DEVICE_MODEL");
        static constexpr uint32_t CAPABILITY_HASH = ConstExprHashingUtils::HashString("CAPABILITY");
        static constexpr uint32_t STATE_HASH = ConstExprHashingUtils::HashString("STATE");
        static constexpr uint32_t ACTION_HASH = ConstExprHashingUtils::HashString("ACTION");
        static constexpr uint32_t EVENT_HASH = ConstExprHashingUtils::HashString("EVENT");
        static constexpr uint32_t PROPERTY_HASH = ConstExprHashingUtils::HashString("PROPERTY");
        static constexpr uint32_t MAPPING_HASH = ConstExprHashingUtils::HashString("MAPPING");
        static constexpr uint32_t ENUM_HASH = ConstExprHashingUtils::HashString("ENUM");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EntityType::NOT_SET:
            return {};
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
