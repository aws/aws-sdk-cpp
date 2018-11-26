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

#include <aws/core/client/CoreErrors.h>
#include <aws/sdb/SimpleDB_EXPORTS.h>

namespace Aws
{
namespace SimpleDB
{
enum class SimpleDBErrors
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
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ATTRIBUTE_DOES_NOT_EXIST= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  DUPLICATE_ITEM_NAME,
  INVALID_NEXT_TOKEN,
  INVALID_NUMBER_PREDICATES,
  INVALID_NUMBER_VALUE_TESTS,
  INVALID_QUERY_EXPRESSION,
  NO_SUCH_DOMAIN,
  NUMBER_DOMAINS_EXCEEDED,
  NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED,
  NUMBER_DOMAIN_BYTES_EXCEEDED,
  NUMBER_ITEM_ATTRIBUTES_EXCEEDED,
  NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED,
  NUMBER_SUBMITTED_ITEMS_EXCEEDED,
  TOO_MANY_REQUESTED_ATTRIBUTES
};
namespace SimpleDBErrorMapper
{
  AWS_SIMPLEDB_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SimpleDB
} // namespace Aws
