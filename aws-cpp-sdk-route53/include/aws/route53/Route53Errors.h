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
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws
{
namespace Route53
{
enum class Route53Errors
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
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  CONCURRENT_MODIFICATION= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONFLICTING_DOMAIN_EXISTS,
  CONFLICTING_TYPES,
  DELEGATION_SET_ALREADY_CREATED,
  DELEGATION_SET_ALREADY_REUSABLE,
  DELEGATION_SET_IN_USE,
  DELEGATION_SET_NOT_AVAILABLE,
  DELEGATION_SET_NOT_REUSABLE,
  HEALTH_CHECK_ALREADY_EXISTS,
  HEALTH_CHECK_IN_USE,
  HEALTH_CHECK_VERSION_MISMATCH,
  HOSTED_ZONE_ALREADY_EXISTS,
  HOSTED_ZONE_NOT_EMPTY,
  HOSTED_ZONE_NOT_FOUND,
  INCOMPATIBLE_VERSION,
  INVALID_ARGUMENT,
  INVALID_CHANGE_BATCH,
  INVALID_DOMAIN_NAME,
  INVALID_INPUT,
  INVALID_PAGINATION_TOKEN,
  INVALID_TRAFFIC_POLICY_DOCUMENT,
  INVALID_V_P_C_ID,
  LAST_V_P_C_ASSOCIATION,
  LIMITS_EXCEEDED,
  NOT_AUTHORIZED,
  NO_SUCH_CHANGE,
  NO_SUCH_DELEGATION_SET,
  NO_SUCH_GEO_LOCATION,
  NO_SUCH_HEALTH_CHECK,
  NO_SUCH_HOSTED_ZONE,
  NO_SUCH_TRAFFIC_POLICY,
  NO_SUCH_TRAFFIC_POLICY_INSTANCE,
  PRIOR_REQUEST_NOT_COMPLETE,
  PUBLIC_ZONE_V_P_C_ASSOCIATION,
  TOO_MANY_HEALTH_CHECKS,
  TOO_MANY_HOSTED_ZONES,
  TOO_MANY_TRAFFIC_POLICIES,
  TOO_MANY_TRAFFIC_POLICY_INSTANCES,
  TOO_MANY_V_P_C_ASSOCIATION_AUTHORIZATIONS,
  TRAFFIC_POLICY_ALREADY_EXISTS,
  TRAFFIC_POLICY_INSTANCE_ALREADY_EXISTS,
  TRAFFIC_POLICY_IN_USE,
  V_P_C_ASSOCIATION_AUTHORIZATION_NOT_FOUND,
  V_P_C_ASSOCIATION_NOT_FOUND
};
namespace Route53ErrorMapper
{
  AWS_ROUTE53_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace Route53
} // namespace Aws