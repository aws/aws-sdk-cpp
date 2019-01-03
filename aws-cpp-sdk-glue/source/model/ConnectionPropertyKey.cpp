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

#include <aws/glue/model/ConnectionPropertyKey.h>
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
      namespace ConnectionPropertyKeyMapper
      {

        static const int HOST_HASH = HashingUtils::HashString("HOST");
        static const int PORT_HASH = HashingUtils::HashString("PORT");
        static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");
        static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
        static const int ENCRYPTED_PASSWORD_HASH = HashingUtils::HashString("ENCRYPTED_PASSWORD");
        static const int JDBC_DRIVER_JAR_URI_HASH = HashingUtils::HashString("JDBC_DRIVER_JAR_URI");
        static const int JDBC_DRIVER_CLASS_NAME_HASH = HashingUtils::HashString("JDBC_DRIVER_CLASS_NAME");
        static const int JDBC_ENGINE_HASH = HashingUtils::HashString("JDBC_ENGINE");
        static const int JDBC_ENGINE_VERSION_HASH = HashingUtils::HashString("JDBC_ENGINE_VERSION");
        static const int CONFIG_FILES_HASH = HashingUtils::HashString("CONFIG_FILES");
        static const int INSTANCE_ID_HASH = HashingUtils::HashString("INSTANCE_ID");
        static const int JDBC_CONNECTION_URL_HASH = HashingUtils::HashString("JDBC_CONNECTION_URL");
        static const int JDBC_ENFORCE_SSL_HASH = HashingUtils::HashString("JDBC_ENFORCE_SSL");


        ConnectionPropertyKey GetConnectionPropertyKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOST_HASH)
          {
            return ConnectionPropertyKey::HOST;
          }
          else if (hashCode == PORT_HASH)
          {
            return ConnectionPropertyKey::PORT;
          }
          else if (hashCode == USERNAME_HASH)
          {
            return ConnectionPropertyKey::USERNAME;
          }
          else if (hashCode == PASSWORD_HASH)
          {
            return ConnectionPropertyKey::PASSWORD;
          }
          else if (hashCode == ENCRYPTED_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::ENCRYPTED_PASSWORD;
          }
          else if (hashCode == JDBC_DRIVER_JAR_URI_HASH)
          {
            return ConnectionPropertyKey::JDBC_DRIVER_JAR_URI;
          }
          else if (hashCode == JDBC_DRIVER_CLASS_NAME_HASH)
          {
            return ConnectionPropertyKey::JDBC_DRIVER_CLASS_NAME;
          }
          else if (hashCode == JDBC_ENGINE_HASH)
          {
            return ConnectionPropertyKey::JDBC_ENGINE;
          }
          else if (hashCode == JDBC_ENGINE_VERSION_HASH)
          {
            return ConnectionPropertyKey::JDBC_ENGINE_VERSION;
          }
          else if (hashCode == CONFIG_FILES_HASH)
          {
            return ConnectionPropertyKey::CONFIG_FILES;
          }
          else if (hashCode == INSTANCE_ID_HASH)
          {
            return ConnectionPropertyKey::INSTANCE_ID;
          }
          else if (hashCode == JDBC_CONNECTION_URL_HASH)
          {
            return ConnectionPropertyKey::JDBC_CONNECTION_URL;
          }
          else if (hashCode == JDBC_ENFORCE_SSL_HASH)
          {
            return ConnectionPropertyKey::JDBC_ENFORCE_SSL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionPropertyKey>(hashCode);
          }

          return ConnectionPropertyKey::NOT_SET;
        }

        Aws::String GetNameForConnectionPropertyKey(ConnectionPropertyKey enumValue)
        {
          switch(enumValue)
          {
          case ConnectionPropertyKey::HOST:
            return "HOST";
          case ConnectionPropertyKey::PORT:
            return "PORT";
          case ConnectionPropertyKey::USERNAME:
            return "USERNAME";
          case ConnectionPropertyKey::PASSWORD:
            return "PASSWORD";
          case ConnectionPropertyKey::ENCRYPTED_PASSWORD:
            return "ENCRYPTED_PASSWORD";
          case ConnectionPropertyKey::JDBC_DRIVER_JAR_URI:
            return "JDBC_DRIVER_JAR_URI";
          case ConnectionPropertyKey::JDBC_DRIVER_CLASS_NAME:
            return "JDBC_DRIVER_CLASS_NAME";
          case ConnectionPropertyKey::JDBC_ENGINE:
            return "JDBC_ENGINE";
          case ConnectionPropertyKey::JDBC_ENGINE_VERSION:
            return "JDBC_ENGINE_VERSION";
          case ConnectionPropertyKey::CONFIG_FILES:
            return "CONFIG_FILES";
          case ConnectionPropertyKey::INSTANCE_ID:
            return "INSTANCE_ID";
          case ConnectionPropertyKey::JDBC_CONNECTION_URL:
            return "JDBC_CONNECTION_URL";
          case ConnectionPropertyKey::JDBC_ENFORCE_SSL:
            return "JDBC_ENFORCE_SSL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionPropertyKeyMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
