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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class FleetErrorCode
  {
    NOT_SET,
    IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION,
    IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION,
    IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION,
    NETWORK_INTERFACE_LIMIT_EXCEEDED,
    INTERNAL_SERVICE_ERROR,
    IAM_SERVICE_ROLE_IS_MISSING,
    SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES,
    IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION,
    SUBNET_NOT_FOUND,
    IMAGE_NOT_FOUND,
    INVALID_SUBNET_CONFIGURATION,
    SECURITY_GROUPS_NOT_FOUND,
    IGW_NOT_ATTACHED,
    IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION,
    DOMAIN_JOIN_ERROR_FILE_NOT_FOUND,
    DOMAIN_JOIN_ERROR_ACCESS_DENIED,
    DOMAIN_JOIN_ERROR_LOGON_FAILURE,
    DOMAIN_JOIN_ERROR_INVALID_PARAMETER,
    DOMAIN_JOIN_ERROR_MORE_DATA,
    DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN,
    DOMAIN_JOIN_ERROR_NOT_SUPPORTED,
    DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME,
    DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED,
    DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED,
    DOMAIN_JOIN_NERR_PASSWORD_EXPIRED,
    DOMAIN_JOIN_INTERNAL_SERVICE_ERROR
  };

namespace FleetErrorCodeMapper
{
AWS_APPSTREAM_API FleetErrorCode GetFleetErrorCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForFleetErrorCode(FleetErrorCode value);
} // namespace FleetErrorCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
