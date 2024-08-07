﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int JDBC_HASH = HashingUtils::HashString("JDBC");
        static const int SFTP_HASH = HashingUtils::HashString("SFTP");
        static const int MONGODB_HASH = HashingUtils::HashString("MONGODB");
        static const int KAFKA_HASH = HashingUtils::HashString("KAFKA");
        static const int NETWORK_HASH = HashingUtils::HashString("NETWORK");
        static const int MARKETPLACE_HASH = HashingUtils::HashString("MARKETPLACE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int SALESFORCE_HASH = HashingUtils::HashString("SALESFORCE");
        static const int VIEW_VALIDATION_REDSHIFT_HASH = HashingUtils::HashString("VIEW_VALIDATION_REDSHIFT");
        static const int VIEW_VALIDATION_ATHENA_HASH = HashingUtils::HashString("VIEW_VALIDATION_ATHENA");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JDBC_HASH)
          {
            return ConnectionType::JDBC;
          }
          else if (hashCode == SFTP_HASH)
          {
            return ConnectionType::SFTP;
          }
          else if (hashCode == MONGODB_HASH)
          {
            return ConnectionType::MONGODB;
          }
          else if (hashCode == KAFKA_HASH)
          {
            return ConnectionType::KAFKA;
          }
          else if (hashCode == NETWORK_HASH)
          {
            return ConnectionType::NETWORK;
          }
          else if (hashCode == MARKETPLACE_HASH)
          {
            return ConnectionType::MARKETPLACE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ConnectionType::CUSTOM;
          }
          else if (hashCode == SALESFORCE_HASH)
          {
            return ConnectionType::SALESFORCE;
          }
          else if (hashCode == VIEW_VALIDATION_REDSHIFT_HASH)
          {
            return ConnectionType::VIEW_VALIDATION_REDSHIFT;
          }
          else if (hashCode == VIEW_VALIDATION_ATHENA_HASH)
          {
            return ConnectionType::VIEW_VALIDATION_ATHENA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::NOT_SET:
            return {};
          case ConnectionType::JDBC:
            return "JDBC";
          case ConnectionType::SFTP:
            return "SFTP";
          case ConnectionType::MONGODB:
            return "MONGODB";
          case ConnectionType::KAFKA:
            return "KAFKA";
          case ConnectionType::NETWORK:
            return "NETWORK";
          case ConnectionType::MARKETPLACE:
            return "MARKETPLACE";
          case ConnectionType::CUSTOM:
            return "CUSTOM";
          case ConnectionType::SALESFORCE:
            return "SALESFORCE";
          case ConnectionType::VIEW_VALIDATION_REDSHIFT:
            return "VIEW_VALIDATION_REDSHIFT";
          case ConnectionType::VIEW_VALIDATION_ATHENA:
            return "VIEW_VALIDATION_ATHENA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
