/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int CUSTOM_JDBC_CERT_HASH = HashingUtils::HashString("CUSTOM_JDBC_CERT");
        static const int SKIP_CUSTOM_JDBC_CERT_VALIDATION_HASH = HashingUtils::HashString("SKIP_CUSTOM_JDBC_CERT_VALIDATION");
        static const int CUSTOM_JDBC_CERT_STRING_HASH = HashingUtils::HashString("CUSTOM_JDBC_CERT_STRING");
        static const int CONNECTION_URL_HASH = HashingUtils::HashString("CONNECTION_URL");
        static const int KAFKA_BOOTSTRAP_SERVERS_HASH = HashingUtils::HashString("KAFKA_BOOTSTRAP_SERVERS");
        static const int KAFKA_SSL_ENABLED_HASH = HashingUtils::HashString("KAFKA_SSL_ENABLED");
        static const int KAFKA_CUSTOM_CERT_HASH = HashingUtils::HashString("KAFKA_CUSTOM_CERT");
        static const int KAFKA_SKIP_CUSTOM_CERT_VALIDATION_HASH = HashingUtils::HashString("KAFKA_SKIP_CUSTOM_CERT_VALIDATION");
        static const int KAFKA_CLIENT_KEYSTORE_HASH = HashingUtils::HashString("KAFKA_CLIENT_KEYSTORE");
        static const int KAFKA_CLIENT_KEYSTORE_PASSWORD_HASH = HashingUtils::HashString("KAFKA_CLIENT_KEYSTORE_PASSWORD");
        static const int KAFKA_CLIENT_KEY_PASSWORD_HASH = HashingUtils::HashString("KAFKA_CLIENT_KEY_PASSWORD");
        static const int ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD_HASH = HashingUtils::HashString("ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD");
        static const int ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD_HASH = HashingUtils::HashString("ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD");
        static const int SECRET_ID_HASH = HashingUtils::HashString("SECRET_ID");
        static const int CONNECTOR_URL_HASH = HashingUtils::HashString("CONNECTOR_URL");
        static const int CONNECTOR_TYPE_HASH = HashingUtils::HashString("CONNECTOR_TYPE");
        static const int CONNECTOR_CLASS_NAME_HASH = HashingUtils::HashString("CONNECTOR_CLASS_NAME");
        static const int KAFKA_SASL_MECHANISM_HASH = HashingUtils::HashString("KAFKA_SASL_MECHANISM");
        static const int KAFKA_SASL_PLAIN_USERNAME_HASH = HashingUtils::HashString("KAFKA_SASL_PLAIN_USERNAME");
        static const int KAFKA_SASL_PLAIN_PASSWORD_HASH = HashingUtils::HashString("KAFKA_SASL_PLAIN_PASSWORD");
        static const int ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD_HASH = HashingUtils::HashString("ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD");
        static const int KAFKA_SASL_SCRAM_USERNAME_HASH = HashingUtils::HashString("KAFKA_SASL_SCRAM_USERNAME");
        static const int KAFKA_SASL_SCRAM_PASSWORD_HASH = HashingUtils::HashString("KAFKA_SASL_SCRAM_PASSWORD");
        static const int KAFKA_SASL_SCRAM_SECRETS_ARN_HASH = HashingUtils::HashString("KAFKA_SASL_SCRAM_SECRETS_ARN");
        static const int ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD_HASH = HashingUtils::HashString("ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD");
        static const int KAFKA_SASL_GSSAPI_KEYTAB_HASH = HashingUtils::HashString("KAFKA_SASL_GSSAPI_KEYTAB");
        static const int KAFKA_SASL_GSSAPI_KRB5_CONF_HASH = HashingUtils::HashString("KAFKA_SASL_GSSAPI_KRB5_CONF");
        static const int KAFKA_SASL_GSSAPI_SERVICE_HASH = HashingUtils::HashString("KAFKA_SASL_GSSAPI_SERVICE");
        static const int KAFKA_SASL_GSSAPI_PRINCIPAL_HASH = HashingUtils::HashString("KAFKA_SASL_GSSAPI_PRINCIPAL");


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
          else if (hashCode == CUSTOM_JDBC_CERT_HASH)
          {
            return ConnectionPropertyKey::CUSTOM_JDBC_CERT;
          }
          else if (hashCode == SKIP_CUSTOM_JDBC_CERT_VALIDATION_HASH)
          {
            return ConnectionPropertyKey::SKIP_CUSTOM_JDBC_CERT_VALIDATION;
          }
          else if (hashCode == CUSTOM_JDBC_CERT_STRING_HASH)
          {
            return ConnectionPropertyKey::CUSTOM_JDBC_CERT_STRING;
          }
          else if (hashCode == CONNECTION_URL_HASH)
          {
            return ConnectionPropertyKey::CONNECTION_URL;
          }
          else if (hashCode == KAFKA_BOOTSTRAP_SERVERS_HASH)
          {
            return ConnectionPropertyKey::KAFKA_BOOTSTRAP_SERVERS;
          }
          else if (hashCode == KAFKA_SSL_ENABLED_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SSL_ENABLED;
          }
          else if (hashCode == KAFKA_CUSTOM_CERT_HASH)
          {
            return ConnectionPropertyKey::KAFKA_CUSTOM_CERT;
          }
          else if (hashCode == KAFKA_SKIP_CUSTOM_CERT_VALIDATION_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SKIP_CUSTOM_CERT_VALIDATION;
          }
          else if (hashCode == KAFKA_CLIENT_KEYSTORE_HASH)
          {
            return ConnectionPropertyKey::KAFKA_CLIENT_KEYSTORE;
          }
          else if (hashCode == KAFKA_CLIENT_KEYSTORE_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::KAFKA_CLIENT_KEYSTORE_PASSWORD;
          }
          else if (hashCode == KAFKA_CLIENT_KEY_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::KAFKA_CLIENT_KEY_PASSWORD;
          }
          else if (hashCode == ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD;
          }
          else if (hashCode == ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD;
          }
          else if (hashCode == SECRET_ID_HASH)
          {
            return ConnectionPropertyKey::SECRET_ID;
          }
          else if (hashCode == CONNECTOR_URL_HASH)
          {
            return ConnectionPropertyKey::CONNECTOR_URL;
          }
          else if (hashCode == CONNECTOR_TYPE_HASH)
          {
            return ConnectionPropertyKey::CONNECTOR_TYPE;
          }
          else if (hashCode == CONNECTOR_CLASS_NAME_HASH)
          {
            return ConnectionPropertyKey::CONNECTOR_CLASS_NAME;
          }
          else if (hashCode == KAFKA_SASL_MECHANISM_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_MECHANISM;
          }
          else if (hashCode == KAFKA_SASL_PLAIN_USERNAME_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_PLAIN_USERNAME;
          }
          else if (hashCode == KAFKA_SASL_PLAIN_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_PLAIN_PASSWORD;
          }
          else if (hashCode == ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD;
          }
          else if (hashCode == KAFKA_SASL_SCRAM_USERNAME_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_SCRAM_USERNAME;
          }
          else if (hashCode == KAFKA_SASL_SCRAM_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_SCRAM_PASSWORD;
          }
          else if (hashCode == KAFKA_SASL_SCRAM_SECRETS_ARN_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_SCRAM_SECRETS_ARN;
          }
          else if (hashCode == ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD_HASH)
          {
            return ConnectionPropertyKey::ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD;
          }
          else if (hashCode == KAFKA_SASL_GSSAPI_KEYTAB_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_GSSAPI_KEYTAB;
          }
          else if (hashCode == KAFKA_SASL_GSSAPI_KRB5_CONF_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_GSSAPI_KRB5_CONF;
          }
          else if (hashCode == KAFKA_SASL_GSSAPI_SERVICE_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_GSSAPI_SERVICE;
          }
          else if (hashCode == KAFKA_SASL_GSSAPI_PRINCIPAL_HASH)
          {
            return ConnectionPropertyKey::KAFKA_SASL_GSSAPI_PRINCIPAL;
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
          case ConnectionPropertyKey::NOT_SET:
            return {};
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
          case ConnectionPropertyKey::CUSTOM_JDBC_CERT:
            return "CUSTOM_JDBC_CERT";
          case ConnectionPropertyKey::SKIP_CUSTOM_JDBC_CERT_VALIDATION:
            return "SKIP_CUSTOM_JDBC_CERT_VALIDATION";
          case ConnectionPropertyKey::CUSTOM_JDBC_CERT_STRING:
            return "CUSTOM_JDBC_CERT_STRING";
          case ConnectionPropertyKey::CONNECTION_URL:
            return "CONNECTION_URL";
          case ConnectionPropertyKey::KAFKA_BOOTSTRAP_SERVERS:
            return "KAFKA_BOOTSTRAP_SERVERS";
          case ConnectionPropertyKey::KAFKA_SSL_ENABLED:
            return "KAFKA_SSL_ENABLED";
          case ConnectionPropertyKey::KAFKA_CUSTOM_CERT:
            return "KAFKA_CUSTOM_CERT";
          case ConnectionPropertyKey::KAFKA_SKIP_CUSTOM_CERT_VALIDATION:
            return "KAFKA_SKIP_CUSTOM_CERT_VALIDATION";
          case ConnectionPropertyKey::KAFKA_CLIENT_KEYSTORE:
            return "KAFKA_CLIENT_KEYSTORE";
          case ConnectionPropertyKey::KAFKA_CLIENT_KEYSTORE_PASSWORD:
            return "KAFKA_CLIENT_KEYSTORE_PASSWORD";
          case ConnectionPropertyKey::KAFKA_CLIENT_KEY_PASSWORD:
            return "KAFKA_CLIENT_KEY_PASSWORD";
          case ConnectionPropertyKey::ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD:
            return "ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD";
          case ConnectionPropertyKey::ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD:
            return "ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD";
          case ConnectionPropertyKey::SECRET_ID:
            return "SECRET_ID";
          case ConnectionPropertyKey::CONNECTOR_URL:
            return "CONNECTOR_URL";
          case ConnectionPropertyKey::CONNECTOR_TYPE:
            return "CONNECTOR_TYPE";
          case ConnectionPropertyKey::CONNECTOR_CLASS_NAME:
            return "CONNECTOR_CLASS_NAME";
          case ConnectionPropertyKey::KAFKA_SASL_MECHANISM:
            return "KAFKA_SASL_MECHANISM";
          case ConnectionPropertyKey::KAFKA_SASL_PLAIN_USERNAME:
            return "KAFKA_SASL_PLAIN_USERNAME";
          case ConnectionPropertyKey::KAFKA_SASL_PLAIN_PASSWORD:
            return "KAFKA_SASL_PLAIN_PASSWORD";
          case ConnectionPropertyKey::ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD:
            return "ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD";
          case ConnectionPropertyKey::KAFKA_SASL_SCRAM_USERNAME:
            return "KAFKA_SASL_SCRAM_USERNAME";
          case ConnectionPropertyKey::KAFKA_SASL_SCRAM_PASSWORD:
            return "KAFKA_SASL_SCRAM_PASSWORD";
          case ConnectionPropertyKey::KAFKA_SASL_SCRAM_SECRETS_ARN:
            return "KAFKA_SASL_SCRAM_SECRETS_ARN";
          case ConnectionPropertyKey::ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD:
            return "ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD";
          case ConnectionPropertyKey::KAFKA_SASL_GSSAPI_KEYTAB:
            return "KAFKA_SASL_GSSAPI_KEYTAB";
          case ConnectionPropertyKey::KAFKA_SASL_GSSAPI_KRB5_CONF:
            return "KAFKA_SASL_GSSAPI_KRB5_CONF";
          case ConnectionPropertyKey::KAFKA_SASL_GSSAPI_SERVICE:
            return "KAFKA_SASL_GSSAPI_SERVICE";
          case ConnectionPropertyKey::KAFKA_SASL_GSSAPI_PRINCIPAL:
            return "KAFKA_SASL_GSSAPI_PRINCIPAL";
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
