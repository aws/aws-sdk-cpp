/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalNodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace SignalNodeTypeMapper
      {

        static const int SENSOR_HASH = HashingUtils::HashString("SENSOR");
        static const int ACTUATOR_HASH = HashingUtils::HashString("ACTUATOR");
        static const int ATTRIBUTE_HASH = HashingUtils::HashString("ATTRIBUTE");
        static const int BRANCH_HASH = HashingUtils::HashString("BRANCH");
        static const int CUSTOM_STRUCT_HASH = HashingUtils::HashString("CUSTOM_STRUCT");
        static const int CUSTOM_PROPERTY_HASH = HashingUtils::HashString("CUSTOM_PROPERTY");


        SignalNodeType GetSignalNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SENSOR_HASH)
          {
            return SignalNodeType::SENSOR;
          }
          else if (hashCode == ACTUATOR_HASH)
          {
            return SignalNodeType::ACTUATOR;
          }
          else if (hashCode == ATTRIBUTE_HASH)
          {
            return SignalNodeType::ATTRIBUTE;
          }
          else if (hashCode == BRANCH_HASH)
          {
            return SignalNodeType::BRANCH;
          }
          else if (hashCode == CUSTOM_STRUCT_HASH)
          {
            return SignalNodeType::CUSTOM_STRUCT;
          }
          else if (hashCode == CUSTOM_PROPERTY_HASH)
          {
            return SignalNodeType::CUSTOM_PROPERTY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalNodeType>(hashCode);
          }

          return SignalNodeType::NOT_SET;
        }

        Aws::String GetNameForSignalNodeType(SignalNodeType enumValue)
        {
          switch(enumValue)
          {
          case SignalNodeType::NOT_SET:
            return {};
          case SignalNodeType::SENSOR:
            return "SENSOR";
          case SignalNodeType::ACTUATOR:
            return "ACTUATOR";
          case SignalNodeType::ATTRIBUTE:
            return "ATTRIBUTE";
          case SignalNodeType::BRANCH:
            return "BRANCH";
          case SignalNodeType::CUSTOM_STRUCT:
            return "CUSTOM_STRUCT";
          case SignalNodeType::CUSTOM_PROPERTY:
            return "CUSTOM_PROPERTY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalNodeTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
