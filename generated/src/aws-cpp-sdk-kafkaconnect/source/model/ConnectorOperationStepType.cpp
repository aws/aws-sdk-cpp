/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorOperationStepType.h>
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
      namespace ConnectorOperationStepTypeMapper
      {

        static const int INITIALIZE_UPDATE_HASH = HashingUtils::HashString("INITIALIZE_UPDATE");
        static const int FINALIZE_UPDATE_HASH = HashingUtils::HashString("FINALIZE_UPDATE");
        static const int UPDATE_WORKER_SETTING_HASH = HashingUtils::HashString("UPDATE_WORKER_SETTING");
        static const int UPDATE_CONNECTOR_CONFIGURATION_HASH = HashingUtils::HashString("UPDATE_CONNECTOR_CONFIGURATION");
        static const int VALIDATE_UPDATE_HASH = HashingUtils::HashString("VALIDATE_UPDATE");


        ConnectorOperationStepType GetConnectorOperationStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZE_UPDATE_HASH)
          {
            return ConnectorOperationStepType::INITIALIZE_UPDATE;
          }
          else if (hashCode == FINALIZE_UPDATE_HASH)
          {
            return ConnectorOperationStepType::FINALIZE_UPDATE;
          }
          else if (hashCode == UPDATE_WORKER_SETTING_HASH)
          {
            return ConnectorOperationStepType::UPDATE_WORKER_SETTING;
          }
          else if (hashCode == UPDATE_CONNECTOR_CONFIGURATION_HASH)
          {
            return ConnectorOperationStepType::UPDATE_CONNECTOR_CONFIGURATION;
          }
          else if (hashCode == VALIDATE_UPDATE_HASH)
          {
            return ConnectorOperationStepType::VALIDATE_UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorOperationStepType>(hashCode);
          }

          return ConnectorOperationStepType::NOT_SET;
        }

        Aws::String GetNameForConnectorOperationStepType(ConnectorOperationStepType enumValue)
        {
          switch(enumValue)
          {
          case ConnectorOperationStepType::NOT_SET:
            return {};
          case ConnectorOperationStepType::INITIALIZE_UPDATE:
            return "INITIALIZE_UPDATE";
          case ConnectorOperationStepType::FINALIZE_UPDATE:
            return "FINALIZE_UPDATE";
          case ConnectorOperationStepType::UPDATE_WORKER_SETTING:
            return "UPDATE_WORKER_SETTING";
          case ConnectorOperationStepType::UPDATE_CONNECTOR_CONFIGURATION:
            return "UPDATE_CONNECTOR_CONFIGURATION";
          case ConnectorOperationStepType::VALIDATE_UPDATE:
            return "VALIDATE_UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorOperationStepTypeMapper
    } // namespace Model
  } // namespace KafkaConnect
} // namespace Aws
