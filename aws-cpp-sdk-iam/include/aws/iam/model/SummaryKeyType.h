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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{
  enum class SummaryKeyType
  {
    NOT_SET,
    Users,
    UsersQuota,
    Groups,
    GroupsQuota,
    ServerCertificates,
    ServerCertificatesQuota,
    UserPolicySizeQuota,
    GroupPolicySizeQuota,
    GroupsPerUserQuota,
    SigningCertificatesPerUserQuota,
    AccessKeysPerUserQuota,
    MFADevices,
    MFADevicesInUse,
    AccountMFAEnabled,
    AccountAccessKeysPresent,
    AccountSigningCertificatesPresent,
    AttachedPoliciesPerGroupQuota,
    AttachedPoliciesPerRoleQuota,
    AttachedPoliciesPerUserQuota,
    Policies,
    PoliciesQuota,
    PolicySizeQuota,
    PolicyVersionsInUse,
    PolicyVersionsInUseQuota,
    VersionsPerPolicyQuota
  };

namespace SummaryKeyTypeMapper
{
AWS_IAM_API SummaryKeyType GetSummaryKeyTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForSummaryKeyType(SummaryKeyType value);
} // namespace SummaryKeyTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
