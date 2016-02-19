/*
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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/SummaryKeyType.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetAccountSummary</a> request. </p>
   */
  class AWS_IAM_API GetAccountSummaryResult
  {
  public:
    GetAccountSummaryResult();
    GetAccountSummaryResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountSummaryResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline const Aws::Map<SummaryKeyType, long>& GetSummaryMap() const{ return m_summaryMap; }

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline void SetSummaryMap(const Aws::Map<SummaryKeyType, long>& value) { m_summaryMap = value; }

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline void SetSummaryMap(Aws::Map<SummaryKeyType, long>&& value) { m_summaryMap = value; }

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline GetAccountSummaryResult& WithSummaryMap(const Aws::Map<SummaryKeyType, long>& value) { SetSummaryMap(value); return *this;}

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline GetAccountSummaryResult& WithSummaryMap(Aws::Map<SummaryKeyType, long>&& value) { SetSummaryMap(value); return *this;}

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline GetAccountSummaryResult& AddSummaryMap(const SummaryKeyType& key, long value) { m_summaryMap[key] = value; return *this; }

    /**
     * <p>A set of key value pairs containing information about IAM entity usage and
     * IAM quotas.</p> <p> <code>SummaryMap</code> contains the following keys: <ul>
     * <li> <p><b>AccessKeysPerUserQuota</b></p> <p>The maximum number of active access
     * keys allowed for each IAM user.</p> </li> <li>
     * <p><b>AccountAccessKeysPresent</b></p> <p>This value is 1 if the AWS account
     * (root) has an access key, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountMFAEnabled</b></p> <p>This value is 1 if the AWS account (root) has
     * an MFA device assigned, otherwise it is 0.</p> </li> <li>
     * <p><b>AccountSigningCertificatesPresent</b></p> <p>This value is 1 if the AWS
     * account (root) has a signing certificate, otherwise it is 0.</p> </li> <li>
     * <p><b>AssumeRolePolicySizeQuota</b></p> <p>The maximum allowed size for assume
     * role policy documents (trust policies), in non-whitespace characters.</p> </li>
     * <li> <p><b>AttachedPoliciesPerGroupQuota</b></p> <p>The maximum number of
     * managed policies that can be attached to an IAM group. </p> </li> <li>
     * <p><b>AttachedPoliciesPerRoleQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM role. </p> </li> <li>
     * <p><b>AttachedPoliciesPerUserQuota</b></p> <p>The maximum number of managed
     * policies that can be attached to an IAM user. </p> </li> <li>
     * <p><b>GroupPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM group, in non-whitespace characters.
     * </p> </li> <li> <p><b>Groups</b></p> <p>The number of IAM groups in the AWS
     * account.</p> </li> <li> <p><b>GroupsPerUserQuota</b></p> <p>The maximum number
     * of IAM groups each IAM user can belong to. </p> </li> <li>
     * <p><b>GroupsQuota</b></p> <p>The maximum number of IAM groups allowed in the AWS
     * account. </p> </li> <li> <p><b>InstanceProfiles</b></p> <p>The number of
     * instance profiles in the AWS account. </p> </li> <li>
     * <p><b>InstanceProfilesQuota</b></p> <p>The maximum number of instance profiles
     * allowed in the AWS account. </p> </li> <li> <p><b>MFADevices</b></p> <p>The
     * number of MFA devices in the AWS account, including those assigned and
     * unassigned. </p> </li> <li> <p><b>MFADevicesInUse</b></p> <p>The number of MFA
     * devices that have been assigned to an IAM user or to the AWS account (root).
     * </p> </li> <li> <p><b>Policies</b></p> <p>The number of customer managed
     * policies in the AWS account. </p> </li> <li> <p><b>PoliciesQuota</b></p> <p>The
     * maximum number of customer managed policies allowed in the AWS account. </p>
     * </li> <li> <p><b>PolicySizeQuota</b></p> <p>The maximum allowed size of a
     * customer managed policy, in non-whitespace characters. </p> </li> <li>
     * <p><b>PolicyVersionsInUse</b></p> <p>The number of managed policies that are
     * attached to IAM users, groups, or roles in the AWS account. </p> </li> <li>
     * <p><b>PolicyVersionsInUseQuota</b></p> <p>The maximum number of managed policies
     * that can be attached to IAM users, groups, or roles in the AWS account. </p>
     * </li> <li> <p><b>Providers</b></p> <p>The number of identity providers in the
     * AWS account. </p> </li> <li> <p><b>RolePolicySizeQuota</b></p> <p>The maximum
     * allowed size for the aggregate of all inline policies (access policies, not the
     * trust policy) embedded in an IAM role, in non-whitespace characters. </p> </li>
     * <li> <p><b>Roles</b></p> <p>The number of IAM roles in the AWS account. </p>
     * </li> <li> <p><b>RolesQuota</b></p> <p>The maximum number of IAM roles allowed
     * in the AWS account. </p> </li> <li> <p><b>ServerCertificates</b></p> <p>The
     * number of server certificates in the AWS account. </p> </li> <li>
     * <p><b>ServerCertificatesQuota</b></p> <p>The maximum number of server
     * certificates allowed in the AWS account. </p> </li> <li>
     * <p><b>SigningCertificatesPerUserQuota</b></p> <p>The maximum number of X.509
     * signing certificates allowed for each IAM user. </p> </li> <li>
     * <p><b>UserPolicySizeQuota</b></p> <p>The maximum allowed size for the aggregate
     * of all inline policies embedded in an IAM user, in non-whitespace characters.
     * </p> </li> <li> <p><b>Users</b></p> <p>The number of IAM users in the AWS
     * account. </p> </li> <li> <p><b>UsersQuota</b></p> <p>The maximum number of IAM
     * users allowed in the AWS account. </p> </li> <li>
     * <p><b>VersionsPerPolicyQuota</b></p> <p>The maximum number of policy versions
     * allowed for each managed policy. </p> </li> </ul> </p>
     */
    inline GetAccountSummaryResult& AddSummaryMap(SummaryKeyType&& key, long value) { m_summaryMap[key] = value; return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetAccountSummaryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccountSummaryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Map<SummaryKeyType, long> m_summaryMap;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws