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

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class IngestionErrorType
  {
    NOT_SET,
    FAILURE_TO_ASSUME_ROLE,
    INGESTION_SUPERSEDED,
    INGESTION_CANCELED,
    DATA_SET_DELETED,
    DATA_SET_NOT_SPICE,
    S3_UPLOADED_FILE_DELETED,
    S3_MANIFEST_ERROR,
    DATA_TOLERANCE_EXCEPTION,
    SPICE_TABLE_NOT_FOUND,
    DATA_SET_SIZE_LIMIT_EXCEEDED,
    ROW_SIZE_LIMIT_EXCEEDED,
    ACCOUNT_CAPACITY_LIMIT_EXCEEDED,
    CUSTOMER_ERROR,
    DATA_SOURCE_NOT_FOUND,
    IAM_ROLE_NOT_AVAILABLE,
    CONNECTION_FAILURE,
    SQL_TABLE_NOT_FOUND,
    PERMISSION_DENIED,
    SSL_CERTIFICATE_VALIDATION_FAILURE,
    OAUTH_TOKEN_FAILURE,
    SOURCE_API_LIMIT_EXCEEDED_FAILURE,
    PASSWORD_AUTHENTICATION_FAILURE,
    SQL_SCHEMA_MISMATCH_ERROR,
    INVALID_DATE_FORMAT,
    INVALID_DATAPREP_SYNTAX,
    SOURCE_RESOURCE_LIMIT_EXCEEDED,
    SQL_INVALID_PARAMETER_VALUE,
    QUERY_TIMEOUT,
    SQL_NUMERIC_OVERFLOW,
    UNRESOLVABLE_HOST,
    UNROUTABLE_HOST,
    SQL_EXCEPTION,
    S3_FILE_INACCESSIBLE,
    IOT_FILE_NOT_FOUND,
    IOT_DATA_SET_FILE_EMPTY,
    INVALID_DATA_SOURCE_CONFIG,
    DATA_SOURCE_AUTH_FAILED,
    DATA_SOURCE_CONNECTION_FAILED,
    FAILURE_TO_PROCESS_JSON_FILE,
    INTERNAL_SERVICE_ERROR
  };

namespace IngestionErrorTypeMapper
{
AWS_QUICKSIGHT_API IngestionErrorType GetIngestionErrorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIngestionErrorType(IngestionErrorType value);
} // namespace IngestionErrorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
