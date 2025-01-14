/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KafkaConnect
  {
    namespace Model
    {
      namespace ConnectorOperationTypeMapper
      {

        static const int UPDATE_WORKER_SETTING_HASH = HashingUtils::HashString("UPDATE_WORKER_SETTING");
        static const int UPDATE_CONNECTOR_CONFIGURATION_HASH = HashingUtils::HashString("UPDATE_CONNECTOR_CONFIGURATION");
        static const int ISOLATE_CONNECTOR_HASH = HashingUtils::HashString("ISOLATE_CONNECTOR");
        static const int RESTORE_CONNECTOR_HASH = HashingUtils::HashString("RESTORE_CONNECTOR");


        ConnectorOperationType GetConnectorOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_WORKER_SETTING_HASH)
          {
            return ConnectorOperationType::UPDATE_WORKER_SETTING;
          }
          else if (hashCode == UPDATE_CONNECTOR_CONFIGURATION_HASH)
          {
            return ConnectorOperationType::UPDATE_CONNECTOR_CONFIGURATION;
          }
          else if (hashCode == ISOLATE_CONNECTOR_HASH)
          {
            return ConnectorOperationType::ISOLATE_CONNECTOR;
          }
          else if (hashCode == RESTORE_CONNECTOR_HASH)
          {
            return ConnectorOperationType::RESTORE_CONNECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorOperationType>(hashCode);
          }

          return ConnectorOperationType::NOT_SET;
        }

        Aws::String GetNameForConnectorOperationType(ConnectorOperationType enumValue)
        {
          switch(enumValue)
          {
          case ConnectorOperationType::NOT_SET:
            return {};
          case ConnectorOperationType::UPDATE_WORKER_SETTING:
            return "UPDATE_WORKER_SETTING";
          case ConnectorOperationType::UPDATE_CONNECTOR_CONFIGURATION:
            return "UPDATE_CONNECTOR_CONFIGURATION";
          case ConnectorOperationType::ISOLATE_CONNECTOR:
            return "ISOLATE_CONNECTOR";
          case ConnectorOperationType::RESTORE_CONNECTOR:
            return "RESTORE_CONNECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorOperationTypeMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
