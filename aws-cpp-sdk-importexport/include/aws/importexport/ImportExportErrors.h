﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/CoreErrors.h>
#include <aws/importexport/ImportExport_EXPORTS.h>

namespace Aws
{
namespace ImportExport
{
enum class ImportExportErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  BUCKET_PERMISSION= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CANCELED_JOB_ID,
  CREATE_JOB_QUOTA_EXCEEDED,
  EXPIRED_JOB_ID,
  INVALID_ADDRESS,
  INVALID_CUSTOMS,
  INVALID_FILE_SYSTEM,
  INVALID_JOB_ID,
  INVALID_MANIFEST_FIELD,
  INVALID_PARAMETER,
  INVALID_VERSION,
  MALFORMED_MANIFEST,
  MISSING_CUSTOMS,
  MISSING_MANIFEST_FIELD,
  MULTIPLE_REGIONS,
  NO_SUCH_BUCKET,
  UNABLE_TO_CANCEL_JOB_ID,
  UNABLE_TO_UPDATE_JOB_ID
};
namespace ImportExportErrorMapper
{
  AWS_IMPORTEXPORT_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ImportExport
} // namespace Aws