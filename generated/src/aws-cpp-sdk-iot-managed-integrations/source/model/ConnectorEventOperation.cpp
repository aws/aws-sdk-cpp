/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ConnectorEventOperation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace ConnectorEventOperationMapper
      {

        static const int DEVICE_COMMAND_RESPONSE_HASH = HashingUtils::HashString("DEVICE_COMMAND_RESPONSE");
        static const int DEVICE_DISCOVERY_HASH = HashingUtils::HashString("DEVICE_DISCOVERY");
        static const int DEVICE_EVENT_HASH = HashingUtils::HashString("DEVICE_EVENT");
        static const int DEVICE_COMMAND_REQUEST_HASH = HashingUtils::HashString("DEVICE_COMMAND_REQUEST");


        ConnectorEventOperation GetConnectorEventOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_COMMAND_RESPONSE_HASH)
          {
            return ConnectorEventOperation::DEVICE_COMMAND_RESPONSE;
          }
          else if (hashCode == DEVICE_DISCOVERY_HASH)
          {
            return ConnectorEventOperation::DEVICE_DISCOVERY;
          }
          else if (hashCode == DEVICE_EVENT_HASH)
          {
            return ConnectorEventOperation::DEVICE_EVENT;
          }
          else if (hashCode == DEVICE_COMMAND_REQUEST_HASH)
          {
            return ConnectorEventOperation::DEVICE_COMMAND_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorEventOperation>(hashCode);
          }

          return ConnectorEventOperation::NOT_SET;
        }

        Aws::String GetNameForConnectorEventOperation(ConnectorEventOperation enumValue)
        {
          switch(enumValue)
          {
          case ConnectorEventOperation::NOT_SET:
            return {};
          case ConnectorEventOperation::DEVICE_COMMAND_RESPONSE:
            return "DEVICE_COMMAND_RESPONSE";
          case ConnectorEventOperation::DEVICE_DISCOVERY:
            return "DEVICE_DISCOVERY";
          case ConnectorEventOperation::DEVICE_EVENT:
            return "DEVICE_EVENT";
          case ConnectorEventOperation::DEVICE_COMMAND_REQUEST:
            return "DEVICE_COMMAND_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorEventOperationMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
