/**
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

        static constexpr uint32_t JDBC_HASH = ConstExprHashingUtils::HashString("JDBC");
        static constexpr uint32_t SFTP_HASH = ConstExprHashingUtils::HashString("SFTP");
        static constexpr uint32_t MONGODB_HASH = ConstExprHashingUtils::HashString("MONGODB");
        static constexpr uint32_t KAFKA_HASH = ConstExprHashingUtils::HashString("KAFKA");
        static constexpr uint32_t NETWORK_HASH = ConstExprHashingUtils::HashString("NETWORK");
        static constexpr uint32_t MARKETPLACE_HASH = ConstExprHashingUtils::HashString("MARKETPLACE");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
