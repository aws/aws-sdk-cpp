/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTDeviceAdvisor
  {
    namespace Model
    {
      namespace ProtocolMapper
      {

        static constexpr uint32_t MqttV3_1_1_HASH = ConstExprHashingUtils::HashString("MqttV3_1_1");
        static constexpr uint32_t MqttV5_HASH = ConstExprHashingUtils::HashString("MqttV5");
        static constexpr uint32_t MqttV3_1_1_OverWebSocket_HASH = ConstExprHashingUtils::HashString("MqttV3_1_1_OverWebSocket");
        static constexpr uint32_t MqttV5_OverWebSocket_HASH = ConstExprHashingUtils::HashString("MqttV5_OverWebSocket");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MqttV3_1_1_HASH)
          {
            return Protocol::MqttV3_1_1;
          }
          else if (hashCode == MqttV5_HASH)
          {
            return Protocol::MqttV5;
          }
          else if (hashCode == MqttV3_1_1_OverWebSocket_HASH)
          {
            return Protocol::MqttV3_1_1_OverWebSocket;
          }
          else if (hashCode == MqttV5_OverWebSocket_HASH)
          {
            return Protocol::MqttV5_OverWebSocket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::NOT_SET:
            return {};
          case Protocol::MqttV3_1_1:
            return "MqttV3_1_1";
          case Protocol::MqttV5:
            return "MqttV5";
          case Protocol::MqttV3_1_1_OverWebSocket:
            return "MqttV3_1_1_OverWebSocket";
          case Protocol::MqttV5_OverWebSocket:
            return "MqttV5_OverWebSocket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
