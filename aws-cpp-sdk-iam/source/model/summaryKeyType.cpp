/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/summaryKeyType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Users_HASH = HashingUtils::HashString("Users");
static const int UsersQuota_HASH = HashingUtils::HashString("UsersQuota");
static const int Groups_HASH = HashingUtils::HashString("Groups");
static const int GroupsQuota_HASH = HashingUtils::HashString("GroupsQuota");
static const int ServerCertificates_HASH = HashingUtils::HashString("ServerCertificates");
static const int ServerCertificatesQuota_HASH = HashingUtils::HashString("ServerCertificatesQuota");
static const int UserPolicySizeQuota_HASH = HashingUtils::HashString("UserPolicySizeQuota");
static const int GroupPolicySizeQuota_HASH = HashingUtils::HashString("GroupPolicySizeQuota");
static const int GroupsPerUserQuota_HASH = HashingUtils::HashString("GroupsPerUserQuota");
static const int SigningCertificatesPerUserQuota_HASH = HashingUtils::HashString("SigningCertificatesPerUserQuota");
static const int AccessKeysPerUserQuota_HASH = HashingUtils::HashString("AccessKeysPerUserQuota");
static const int MFADevices_HASH = HashingUtils::HashString("MFADevices");
static const int MFADevicesInUse_HASH = HashingUtils::HashString("MFADevicesInUse");
static const int AccountMFAEnabled_HASH = HashingUtils::HashString("AccountMFAEnabled");
static const int AccountAccessKeysPresent_HASH = HashingUtils::HashString("AccountAccessKeysPresent");
static const int AccountSigningCertificatesPresent_HASH = HashingUtils::HashString("AccountSigningCertificatesPresent");
static const int AttachedPoliciesPerGroupQuota_HASH = HashingUtils::HashString("AttachedPoliciesPerGroupQuota");
static const int AttachedPoliciesPerRoleQuota_HASH = HashingUtils::HashString("AttachedPoliciesPerRoleQuota");
static const int AttachedPoliciesPerUserQuota_HASH = HashingUtils::HashString("AttachedPoliciesPerUserQuota");
static const int Policies_HASH = HashingUtils::HashString("Policies");
static const int PoliciesQuota_HASH = HashingUtils::HashString("PoliciesQuota");
static const int PolicySizeQuota_HASH = HashingUtils::HashString("PolicySizeQuota");
static const int PolicyVersionsInUse_HASH = HashingUtils::HashString("PolicyVersionsInUse");
static const int PolicyVersionsInUseQuota_HASH = HashingUtils::HashString("PolicyVersionsInUseQuota");
static const int VersionsPerPolicyQuota_HASH = HashingUtils::HashString("VersionsPerPolicyQuota");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace summaryKeyTypeMapper
{
summaryKeyType GetsummaryKeyTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Users_HASH)
  {
    return summaryKeyType::Users;
  }
  else if (hashCode == UsersQuota_HASH)
  {
    return summaryKeyType::UsersQuota;
  }
  else if (hashCode == Groups_HASH)
  {
    return summaryKeyType::Groups;
  }
  else if (hashCode == GroupsQuota_HASH)
  {
    return summaryKeyType::GroupsQuota;
  }
  else if (hashCode == ServerCertificates_HASH)
  {
    return summaryKeyType::ServerCertificates;
  }
  else if (hashCode == ServerCertificatesQuota_HASH)
  {
    return summaryKeyType::ServerCertificatesQuota;
  }
  else if (hashCode == UserPolicySizeQuota_HASH)
  {
    return summaryKeyType::UserPolicySizeQuota;
  }
  else if (hashCode == GroupPolicySizeQuota_HASH)
  {
    return summaryKeyType::GroupPolicySizeQuota;
  }
  else if (hashCode == GroupsPerUserQuota_HASH)
  {
    return summaryKeyType::GroupsPerUserQuota;
  }
  else if (hashCode == SigningCertificatesPerUserQuota_HASH)
  {
    return summaryKeyType::SigningCertificatesPerUserQuota;
  }
  else if (hashCode == AccessKeysPerUserQuota_HASH)
  {
    return summaryKeyType::AccessKeysPerUserQuota;
  }
  else if (hashCode == MFADevices_HASH)
  {
    return summaryKeyType::MFADevices;
  }
  else if (hashCode == MFADevicesInUse_HASH)
  {
    return summaryKeyType::MFADevicesInUse;
  }
  else if (hashCode == AccountMFAEnabled_HASH)
  {
    return summaryKeyType::AccountMFAEnabled;
  }
  else if (hashCode == AccountAccessKeysPresent_HASH)
  {
    return summaryKeyType::AccountAccessKeysPresent;
  }
  else if (hashCode == AccountSigningCertificatesPresent_HASH)
  {
    return summaryKeyType::AccountSigningCertificatesPresent;
  }
  else if (hashCode == AttachedPoliciesPerGroupQuota_HASH)
  {
    return summaryKeyType::AttachedPoliciesPerGroupQuota;
  }
  else if (hashCode == AttachedPoliciesPerRoleQuota_HASH)
  {
    return summaryKeyType::AttachedPoliciesPerRoleQuota;
  }
  else if (hashCode == AttachedPoliciesPerUserQuota_HASH)
  {
    return summaryKeyType::AttachedPoliciesPerUserQuota;
  }
  else if (hashCode == Policies_HASH)
  {
    return summaryKeyType::Policies;
  }
  else if (hashCode == PoliciesQuota_HASH)
  {
    return summaryKeyType::PoliciesQuota;
  }
  else if (hashCode == PolicySizeQuota_HASH)
  {
    return summaryKeyType::PolicySizeQuota;
  }
  else if (hashCode == PolicyVersionsInUse_HASH)
  {
    return summaryKeyType::PolicyVersionsInUse;
  }
  else if (hashCode == PolicyVersionsInUseQuota_HASH)
  {
    return summaryKeyType::PolicyVersionsInUseQuota;
  }
  else if (hashCode == VersionsPerPolicyQuota_HASH)
  {
    return summaryKeyType::VersionsPerPolicyQuota;
  }

  return summaryKeyType::NOT_SET;
}

Aws::String GetNameForsummaryKeyType(summaryKeyType value)
{
  switch(value)
  {
  case summaryKeyType::Users:
    return "Users";
  case summaryKeyType::UsersQuota:
    return "UsersQuota";
  case summaryKeyType::Groups:
    return "Groups";
  case summaryKeyType::GroupsQuota:
    return "GroupsQuota";
  case summaryKeyType::ServerCertificates:
    return "ServerCertificates";
  case summaryKeyType::ServerCertificatesQuota:
    return "ServerCertificatesQuota";
  case summaryKeyType::UserPolicySizeQuota:
    return "UserPolicySizeQuota";
  case summaryKeyType::GroupPolicySizeQuota:
    return "GroupPolicySizeQuota";
  case summaryKeyType::GroupsPerUserQuota:
    return "GroupsPerUserQuota";
  case summaryKeyType::SigningCertificatesPerUserQuota:
    return "SigningCertificatesPerUserQuota";
  case summaryKeyType::AccessKeysPerUserQuota:
    return "AccessKeysPerUserQuota";
  case summaryKeyType::MFADevices:
    return "MFADevices";
  case summaryKeyType::MFADevicesInUse:
    return "MFADevicesInUse";
  case summaryKeyType::AccountMFAEnabled:
    return "AccountMFAEnabled";
  case summaryKeyType::AccountAccessKeysPresent:
    return "AccountAccessKeysPresent";
  case summaryKeyType::AccountSigningCertificatesPresent:
    return "AccountSigningCertificatesPresent";
  case summaryKeyType::AttachedPoliciesPerGroupQuota:
    return "AttachedPoliciesPerGroupQuota";
  case summaryKeyType::AttachedPoliciesPerRoleQuota:
    return "AttachedPoliciesPerRoleQuota";
  case summaryKeyType::AttachedPoliciesPerUserQuota:
    return "AttachedPoliciesPerUserQuota";
  case summaryKeyType::Policies:
    return "Policies";
  case summaryKeyType::PoliciesQuota:
    return "PoliciesQuota";
  case summaryKeyType::PolicySizeQuota:
    return "PolicySizeQuota";
  case summaryKeyType::PolicyVersionsInUse:
    return "PolicyVersionsInUse";
  case summaryKeyType::PolicyVersionsInUseQuota:
    return "PolicyVersionsInUseQuota";
  case summaryKeyType::VersionsPerPolicyQuota:
    return "VersionsPerPolicyQuota";
  default:
    return "";
  }
}

} // namespace summaryKeyTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
