/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IngestionErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IngestionErrorTypeMapper
      {

        static const int FAILURE_TO_ASSUME_ROLE_HASH = HashingUtils::HashString("FAILURE_TO_ASSUME_ROLE");
        static const int INGESTION_SUPERSEDED_HASH = HashingUtils::HashString("INGESTION_SUPERSEDED");
        static const int INGESTION_CANCELED_HASH = HashingUtils::HashString("INGESTION_CANCELED");
        static const int DATA_SET_DELETED_HASH = HashingUtils::HashString("DATA_SET_DELETED");
        static const int DATA_SET_NOT_SPICE_HASH = HashingUtils::HashString("DATA_SET_NOT_SPICE");
        static const int S3_UPLOADED_FILE_DELETED_HASH = HashingUtils::HashString("S3_UPLOADED_FILE_DELETED");
        static const int S3_MANIFEST_ERROR_HASH = HashingUtils::HashString("S3_MANIFEST_ERROR");
        static const int DATA_TOLERANCE_EXCEPTION_HASH = HashingUtils::HashString("DATA_TOLERANCE_EXCEPTION");
        static const int SPICE_TABLE_NOT_FOUND_HASH = HashingUtils::HashString("SPICE_TABLE_NOT_FOUND");
        static const int DATA_SET_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DATA_SET_SIZE_LIMIT_EXCEEDED");
        static const int ROW_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ROW_SIZE_LIMIT_EXCEEDED");
        static const int ACCOUNT_CAPACITY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_CAPACITY_LIMIT_EXCEEDED");
        static const int CUSTOMER_ERROR_HASH = HashingUtils::HashString("CUSTOMER_ERROR");
        static const int DATA_SOURCE_NOT_FOUND_HASH = HashingUtils::HashString("DATA_SOURCE_NOT_FOUND");
        static const int IAM_ROLE_NOT_AVAILABLE_HASH = HashingUtils::HashString("IAM_ROLE_NOT_AVAILABLE");
        static const int CONNECTION_FAILURE_HASH = HashingUtils::HashString("CONNECTION_FAILURE");
        static const int SQL_TABLE_NOT_FOUND_HASH = HashingUtils::HashString("SQL_TABLE_NOT_FOUND");
        static const int PERMISSION_DENIED_HASH = HashingUtils::HashString("PERMISSION_DENIED");
        static const int SSL_CERTIFICATE_VALIDATION_FAILURE_HASH = HashingUtils::HashString("SSL_CERTIFICATE_VALIDATION_FAILURE");
        static const int OAUTH_TOKEN_FAILURE_HASH = HashingUtils::HashString("OAUTH_TOKEN_FAILURE");
        static const int SOURCE_API_LIMIT_EXCEEDED_FAILURE_HASH = HashingUtils::HashString("SOURCE_API_LIMIT_EXCEEDED_FAILURE");
        static const int PASSWORD_AUTHENTICATION_FAILURE_HASH = HashingUtils::HashString("PASSWORD_AUTHENTICATION_FAILURE");
        static const int SQL_SCHEMA_MISMATCH_ERROR_HASH = HashingUtils::HashString("SQL_SCHEMA_MISMATCH_ERROR");
        static const int INVALID_DATE_FORMAT_HASH = HashingUtils::HashString("INVALID_DATE_FORMAT");
        static const int INVALID_DATAPREP_SYNTAX_HASH = HashingUtils::HashString("INVALID_DATAPREP_SYNTAX");
        static const int SOURCE_RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SOURCE_RESOURCE_LIMIT_EXCEEDED");
        static const int SQL_INVALID_PARAMETER_VALUE_HASH = HashingUtils::HashString("SQL_INVALID_PARAMETER_VALUE");
        static const int QUERY_TIMEOUT_HASH = HashingUtils::HashString("QUERY_TIMEOUT");
        static const int SQL_NUMERIC_OVERFLOW_HASH = HashingUtils::HashString("SQL_NUMERIC_OVERFLOW");
        static const int UNRESOLVABLE_HOST_HASH = HashingUtils::HashString("UNRESOLVABLE_HOST");
        static const int UNROUTABLE_HOST_HASH = HashingUtils::HashString("UNROUTABLE_HOST");
        static const int SQL_EXCEPTION_HASH = HashingUtils::HashString("SQL_EXCEPTION");
        static const int S3_FILE_INACCESSIBLE_HASH = HashingUtils::HashString("S3_FILE_INACCESSIBLE");
        static const int IOT_FILE_NOT_FOUND_HASH = HashingUtils::HashString("IOT_FILE_NOT_FOUND");
        static const int IOT_DATA_SET_FILE_EMPTY_HASH = HashingUtils::HashString("IOT_DATA_SET_FILE_EMPTY");
        static const int INVALID_DATA_SOURCE_CONFIG_HASH = HashingUtils::HashString("INVALID_DATA_SOURCE_CONFIG");
        static const int DATA_SOURCE_AUTH_FAILED_HASH = HashingUtils::HashString("DATA_SOURCE_AUTH_FAILED");
        static const int DATA_SOURCE_CONNECTION_FAILED_HASH = HashingUtils::HashString("DATA_SOURCE_CONNECTION_FAILED");
        static const int FAILURE_TO_PROCESS_JSON_FILE_HASH = HashingUtils::HashString("FAILURE_TO_PROCESS_JSON_FILE");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");


        IngestionErrorType GetIngestionErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILURE_TO_ASSUME_ROLE_HASH)
          {
            return IngestionErrorType::FAILURE_TO_ASSUME_ROLE;
          }
          else if (hashCode == INGESTION_SUPERSEDED_HASH)
          {
            return IngestionErrorType::INGESTION_SUPERSEDED;
          }
          else if (hashCode == INGESTION_CANCELED_HASH)
          {
            return IngestionErrorType::INGESTION_CANCELED;
          }
          else if (hashCode == DATA_SET_DELETED_HASH)
          {
            return IngestionErrorType::DATA_SET_DELETED;
          }
          else if (hashCode == DATA_SET_NOT_SPICE_HASH)
          {
            return IngestionErrorType::DATA_SET_NOT_SPICE;
          }
          else if (hashCode == S3_UPLOADED_FILE_DELETED_HASH)
          {
            return IngestionErrorType::S3_UPLOADED_FILE_DELETED;
          }
          else if (hashCode == S3_MANIFEST_ERROR_HASH)
          {
            return IngestionErrorType::S3_MANIFEST_ERROR;
          }
          else if (hashCode == DATA_TOLERANCE_EXCEPTION_HASH)
          {
            return IngestionErrorType::DATA_TOLERANCE_EXCEPTION;
          }
          else if (hashCode == SPICE_TABLE_NOT_FOUND_HASH)
          {
            return IngestionErrorType::SPICE_TABLE_NOT_FOUND;
          }
          else if (hashCode == DATA_SET_SIZE_LIMIT_EXCEEDED_HASH)
          {
            return IngestionErrorType::DATA_SET_SIZE_LIMIT_EXCEEDED;
          }
          else if (hashCode == ROW_SIZE_LIMIT_EXCEEDED_HASH)
          {
            return IngestionErrorType::ROW_SIZE_LIMIT_EXCEEDED;
          }
          else if (hashCode == ACCOUNT_CAPACITY_LIMIT_EXCEEDED_HASH)
          {
            return IngestionErrorType::ACCOUNT_CAPACITY_LIMIT_EXCEEDED;
          }
          else if (hashCode == CUSTOMER_ERROR_HASH)
          {
            return IngestionErrorType::CUSTOMER_ERROR;
          }
          else if (hashCode == DATA_SOURCE_NOT_FOUND_HASH)
          {
            return IngestionErrorType::DATA_SOURCE_NOT_FOUND;
          }
          else if (hashCode == IAM_ROLE_NOT_AVAILABLE_HASH)
          {
            return IngestionErrorType::IAM_ROLE_NOT_AVAILABLE;
          }
          else if (hashCode == CONNECTION_FAILURE_HASH)
          {
            return IngestionErrorType::CONNECTION_FAILURE;
          }
          else if (hashCode == SQL_TABLE_NOT_FOUND_HASH)
          {
            return IngestionErrorType::SQL_TABLE_NOT_FOUND;
          }
          else if (hashCode == PERMISSION_DENIED_HASH)
          {
            return IngestionErrorType::PERMISSION_DENIED;
          }
          else if (hashCode == SSL_CERTIFICATE_VALIDATION_FAILURE_HASH)
          {
            return IngestionErrorType::SSL_CERTIFICATE_VALIDATION_FAILURE;
          }
          else if (hashCode == OAUTH_TOKEN_FAILURE_HASH)
          {
            return IngestionErrorType::OAUTH_TOKEN_FAILURE;
          }
          else if (hashCode == SOURCE_API_LIMIT_EXCEEDED_FAILURE_HASH)
          {
            return IngestionErrorType::SOURCE_API_LIMIT_EXCEEDED_FAILURE;
          }
          else if (hashCode == PASSWORD_AUTHENTICATION_FAILURE_HASH)
          {
            return IngestionErrorType::PASSWORD_AUTHENTICATION_FAILURE;
          }
          else if (hashCode == SQL_SCHEMA_MISMATCH_ERROR_HASH)
          {
            return IngestionErrorType::SQL_SCHEMA_MISMATCH_ERROR;
          }
          else if (hashCode == INVALID_DATE_FORMAT_HASH)
          {
            return IngestionErrorType::INVALID_DATE_FORMAT;
          }
          else if (hashCode == INVALID_DATAPREP_SYNTAX_HASH)
          {
            return IngestionErrorType::INVALID_DATAPREP_SYNTAX;
          }
          else if (hashCode == SOURCE_RESOURCE_LIMIT_EXCEEDED_HASH)
          {
            return IngestionErrorType::SOURCE_RESOURCE_LIMIT_EXCEEDED;
          }
          else if (hashCode == SQL_INVALID_PARAMETER_VALUE_HASH)
          {
            return IngestionErrorType::SQL_INVALID_PARAMETER_VALUE;
          }
          else if (hashCode == QUERY_TIMEOUT_HASH)
          {
            return IngestionErrorType::QUERY_TIMEOUT;
          }
          else if (hashCode == SQL_NUMERIC_OVERFLOW_HASH)
          {
            return IngestionErrorType::SQL_NUMERIC_OVERFLOW;
          }
          else if (hashCode == UNRESOLVABLE_HOST_HASH)
          {
            return IngestionErrorType::UNRESOLVABLE_HOST;
          }
          else if (hashCode == UNROUTABLE_HOST_HASH)
          {
            return IngestionErrorType::UNROUTABLE_HOST;
          }
          else if (hashCode == SQL_EXCEPTION_HASH)
          {
            return IngestionErrorType::SQL_EXCEPTION;
          }
          else if (hashCode == S3_FILE_INACCESSIBLE_HASH)
          {
            return IngestionErrorType::S3_FILE_INACCESSIBLE;
          }
          else if (hashCode == IOT_FILE_NOT_FOUND_HASH)
          {
            return IngestionErrorType::IOT_FILE_NOT_FOUND;
          }
          else if (hashCode == IOT_DATA_SET_FILE_EMPTY_HASH)
          {
            return IngestionErrorType::IOT_DATA_SET_FILE_EMPTY;
          }
          else if (hashCode == INVALID_DATA_SOURCE_CONFIG_HASH)
          {
            return IngestionErrorType::INVALID_DATA_SOURCE_CONFIG;
          }
          else if (hashCode == DATA_SOURCE_AUTH_FAILED_HASH)
          {
            return IngestionErrorType::DATA_SOURCE_AUTH_FAILED;
          }
          else if (hashCode == DATA_SOURCE_CONNECTION_FAILED_HASH)
          {
            return IngestionErrorType::DATA_SOURCE_CONNECTION_FAILED;
          }
          else if (hashCode == FAILURE_TO_PROCESS_JSON_FILE_HASH)
          {
            return IngestionErrorType::FAILURE_TO_PROCESS_JSON_FILE;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return IngestionErrorType::INTERNAL_SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngestionErrorType>(hashCode);
          }

          return IngestionErrorType::NOT_SET;
        }

        Aws::String GetNameForIngestionErrorType(IngestionErrorType enumValue)
        {
          switch(enumValue)
          {
          case IngestionErrorType::FAILURE_TO_ASSUME_ROLE:
            return "FAILURE_TO_ASSUME_ROLE";
          case IngestionErrorType::INGESTION_SUPERSEDED:
            return "INGESTION_SUPERSEDED";
          case IngestionErrorType::INGESTION_CANCELED:
            return "INGESTION_CANCELED";
          case IngestionErrorType::DATA_SET_DELETED:
            return "DATA_SET_DELETED";
          case IngestionErrorType::DATA_SET_NOT_SPICE:
            return "DATA_SET_NOT_SPICE";
          case IngestionErrorType::S3_UPLOADED_FILE_DELETED:
            return "S3_UPLOADED_FILE_DELETED";
          case IngestionErrorType::S3_MANIFEST_ERROR:
            return "S3_MANIFEST_ERROR";
          case IngestionErrorType::DATA_TOLERANCE_EXCEPTION:
            return "DATA_TOLERANCE_EXCEPTION";
          case IngestionErrorType::SPICE_TABLE_NOT_FOUND:
            return "SPICE_TABLE_NOT_FOUND";
          case IngestionErrorType::DATA_SET_SIZE_LIMIT_EXCEEDED:
            return "DATA_SET_SIZE_LIMIT_EXCEEDED";
          case IngestionErrorType::ROW_SIZE_LIMIT_EXCEEDED:
            return "ROW_SIZE_LIMIT_EXCEEDED";
          case IngestionErrorType::ACCOUNT_CAPACITY_LIMIT_EXCEEDED:
            return "ACCOUNT_CAPACITY_LIMIT_EXCEEDED";
          case IngestionErrorType::CUSTOMER_ERROR:
            return "CUSTOMER_ERROR";
          case IngestionErrorType::DATA_SOURCE_NOT_FOUND:
            return "DATA_SOURCE_NOT_FOUND";
          case IngestionErrorType::IAM_ROLE_NOT_AVAILABLE:
            return "IAM_ROLE_NOT_AVAILABLE";
          case IngestionErrorType::CONNECTION_FAILURE:
            return "CONNECTION_FAILURE";
          case IngestionErrorType::SQL_TABLE_NOT_FOUND:
            return "SQL_TABLE_NOT_FOUND";
          case IngestionErrorType::PERMISSION_DENIED:
            return "PERMISSION_DENIED";
          case IngestionErrorType::SSL_CERTIFICATE_VALIDATION_FAILURE:
            return "SSL_CERTIFICATE_VALIDATION_FAILURE";
          case IngestionErrorType::OAUTH_TOKEN_FAILURE:
            return "OAUTH_TOKEN_FAILURE";
          case IngestionErrorType::SOURCE_API_LIMIT_EXCEEDED_FAILURE:
            return "SOURCE_API_LIMIT_EXCEEDED_FAILURE";
          case IngestionErrorType::PASSWORD_AUTHENTICATION_FAILURE:
            return "PASSWORD_AUTHENTICATION_FAILURE";
          case IngestionErrorType::SQL_SCHEMA_MISMATCH_ERROR:
            return "SQL_SCHEMA_MISMATCH_ERROR";
          case IngestionErrorType::INVALID_DATE_FORMAT:
            return "INVALID_DATE_FORMAT";
          case IngestionErrorType::INVALID_DATAPREP_SYNTAX:
            return "INVALID_DATAPREP_SYNTAX";
          case IngestionErrorType::SOURCE_RESOURCE_LIMIT_EXCEEDED:
            return "SOURCE_RESOURCE_LIMIT_EXCEEDED";
          case IngestionErrorType::SQL_INVALID_PARAMETER_VALUE:
            return "SQL_INVALID_PARAMETER_VALUE";
          case IngestionErrorType::QUERY_TIMEOUT:
            return "QUERY_TIMEOUT";
          case IngestionErrorType::SQL_NUMERIC_OVERFLOW:
            return "SQL_NUMERIC_OVERFLOW";
          case IngestionErrorType::UNRESOLVABLE_HOST:
            return "UNRESOLVABLE_HOST";
          case IngestionErrorType::UNROUTABLE_HOST:
            return "UNROUTABLE_HOST";
          case IngestionErrorType::SQL_EXCEPTION:
            return "SQL_EXCEPTION";
          case IngestionErrorType::S3_FILE_INACCESSIBLE:
            return "S3_FILE_INACCESSIBLE";
          case IngestionErrorType::IOT_FILE_NOT_FOUND:
            return "IOT_FILE_NOT_FOUND";
          case IngestionErrorType::IOT_DATA_SET_FILE_EMPTY:
            return "IOT_DATA_SET_FILE_EMPTY";
          case IngestionErrorType::INVALID_DATA_SOURCE_CONFIG:
            return "INVALID_DATA_SOURCE_CONFIG";
          case IngestionErrorType::DATA_SOURCE_AUTH_FAILED:
            return "DATA_SOURCE_AUTH_FAILED";
          case IngestionErrorType::DATA_SOURCE_CONNECTION_FAILED:
            return "DATA_SOURCE_CONNECTION_FAILED";
          case IngestionErrorType::FAILURE_TO_PROCESS_JSON_FILE:
            return "FAILURE_TO_PROCESS_JSON_FILE";
          case IngestionErrorType::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngestionErrorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
