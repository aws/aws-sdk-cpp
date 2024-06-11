﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/SecurityServicePolicyData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fms/model/CustomerPolicyStatus.h>
#include <aws/fms/model/ResourceTag.h>
#include <aws/fms/model/CustomerPolicyScopeIdType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>An Firewall Manager policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/Policy">AWS API
   * Reference</a></p>
   */
  class Policy
  {
  public:
    AWS_FMS_API Policy();
    AWS_FMS_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline Policy& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline Policy& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline Policy& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline Policy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline Policy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline Policy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline const Aws::String& GetPolicyUpdateToken() const{ return m_policyUpdateToken; }
    inline bool PolicyUpdateTokenHasBeenSet() const { return m_policyUpdateTokenHasBeenSet; }
    inline void SetPolicyUpdateToken(const Aws::String& value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken = value; }
    inline void SetPolicyUpdateToken(Aws::String&& value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken = std::move(value); }
    inline void SetPolicyUpdateToken(const char* value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken.assign(value); }
    inline Policy& WithPolicyUpdateToken(const Aws::String& value) { SetPolicyUpdateToken(value); return *this;}
    inline Policy& WithPolicyUpdateToken(Aws::String&& value) { SetPolicyUpdateToken(std::move(value)); return *this;}
    inline Policy& WithPolicyUpdateToken(const char* value) { SetPolicyUpdateToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline const SecurityServicePolicyData& GetSecurityServicePolicyData() const{ return m_securityServicePolicyData; }
    inline bool SecurityServicePolicyDataHasBeenSet() const { return m_securityServicePolicyDataHasBeenSet; }
    inline void SetSecurityServicePolicyData(const SecurityServicePolicyData& value) { m_securityServicePolicyDataHasBeenSet = true; m_securityServicePolicyData = value; }
    inline void SetSecurityServicePolicyData(SecurityServicePolicyData&& value) { m_securityServicePolicyDataHasBeenSet = true; m_securityServicePolicyData = std::move(value); }
    inline Policy& WithSecurityServicePolicyData(const SecurityServicePolicyData& value) { SetSecurityServicePolicyData(value); return *this;}
    inline Policy& WithSecurityServicePolicyData(SecurityServicePolicyData&& value) { SetSecurityServicePolicyData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource protected by or in scope of the policy. This is in the
     * format shown in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a>. To apply this policy to multiple
     * resource types, specify a resource type of <code>ResourceTypeList</code> and
     * then specify the resource types in a <code>ResourceTypeList</code>.</p> <p>The
     * following are valid resource types for each Firewall Manager policy type:</p>
     * <ul> <li> <p>Amazon Web Services WAF Classic -
     * <code>AWS::ApiGateway::Stage</code>, <code>AWS::CloudFront::Distribution</code>,
     * and <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>.</p> </li> <li>
     * <p>WAF - <code>AWS::ApiGateway::Stage</code>,
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>, and
     * <code>AWS::CloudFront::Distribution</code>.</p> </li> <li> <p>Shield Advanced -
     * <code>AWS::ElasticLoadBalancingV2::LoadBalancer</code>,
     * <code>AWS::ElasticLoadBalancing::LoadBalancer</code>,
     * <code>AWS::EC2::EIP</code>, and <code>AWS::CloudFront::Distribution</code>.</p>
     * </li> <li> <p>Network ACL - <code>AWS::EC2::Subnet</code>.</p> </li> <li>
     * <p>Security group usage audit - <code>AWS::EC2::SecurityGroup</code>.</p> </li>
     * <li> <p>Security group content audit - <code>AWS::EC2::SecurityGroup</code>,
     * <code>AWS::EC2::NetworkInterface</code>, and
     * <code>AWS::EC2::Instance</code>.</p> </li> <li> <p>DNS Firewall, Network
     * Firewall, and third-party firewall - <code>AWS::EC2::VPC</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline Policy& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline Policy& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline Policy& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceType</code> objects. Use this only to specify
     * multiple resource types. To specify a single resource type, use
     * <code>ResourceType</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeList() const{ return m_resourceTypeList; }
    inline bool ResourceTypeListHasBeenSet() const { return m_resourceTypeListHasBeenSet; }
    inline void SetResourceTypeList(const Aws::Vector<Aws::String>& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = value; }
    inline void SetResourceTypeList(Aws::Vector<Aws::String>&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = std::move(value); }
    inline Policy& WithResourceTypeList(const Aws::Vector<Aws::String>& value) { SetResourceTypeList(value); return *this;}
    inline Policy& WithResourceTypeList(Aws::Vector<Aws::String>&& value) { SetResourceTypeList(std::move(value)); return *this;}
    inline Policy& AddResourceTypeList(const Aws::String& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }
    inline Policy& AddResourceTypeList(Aws::String&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(std::move(value)); return *this; }
    inline Policy& AddResourceTypeList(const char* value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline Policy& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}
    inline Policy& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline Policy& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline Policy& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline bool GetExcludeResourceTags() const{ return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    inline void SetExcludeResourceTags(bool value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }
    inline Policy& WithExcludeResourceTags(bool value) { SetExcludeResourceTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const{ return m_remediationEnabled; }
    inline bool RemediationEnabledHasBeenSet() const { return m_remediationEnabledHasBeenSet; }
    inline void SetRemediationEnabled(bool value) { m_remediationEnabledHasBeenSet = true; m_remediationEnabled = value; }
    inline Policy& WithRemediationEnabled(bool value) { SetRemediationEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Firewall Manager should automatically remove protections
     * from resources that leave the policy scope and clean up resources that Firewall
     * Manager is managing for accounts when those accounts leave policy scope. For
     * example, Firewall Manager will disassociate a Firewall Manager managed web ACL
     * from a protected customer resource when the customer resource leaves policy
     * scope. </p> <p>By default, Firewall Manager doesn't remove protections or delete
     * Firewall Manager managed resources. </p> <p>This option is not available for
     * Shield Advanced or WAF Classic policies.</p>
     */
    inline bool GetDeleteUnusedFMManagedResources() const{ return m_deleteUnusedFMManagedResources; }
    inline bool DeleteUnusedFMManagedResourcesHasBeenSet() const { return m_deleteUnusedFMManagedResourcesHasBeenSet; }
    inline void SetDeleteUnusedFMManagedResources(bool value) { m_deleteUnusedFMManagedResourcesHasBeenSet = true; m_deleteUnusedFMManagedResources = value; }
    inline Policy& WithDeleteUnusedFMManagedResources(bool value) { SetDeleteUnusedFMManagedResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account IDs and Organizations
     * organizational units (OUs) to include in the policy. Specifying an OU is the
     * equivalent of specifying all accounts in the OU and in any of its child OUs,
     * including any child OUs and accounts that are added at a later time.</p> <p>You
     * can specify inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetIncludeMap() const{ return m_includeMap; }
    inline bool IncludeMapHasBeenSet() const { return m_includeMapHasBeenSet; }
    inline void SetIncludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { m_includeMapHasBeenSet = true; m_includeMap = value; }
    inline void SetIncludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { m_includeMapHasBeenSet = true; m_includeMap = std::move(value); }
    inline Policy& WithIncludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { SetIncludeMap(value); return *this;}
    inline Policy& WithIncludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { SetIncludeMap(std::move(value)); return *this;}
    inline Policy& AddIncludeMap(const CustomerPolicyScopeIdType& key, const Aws::Vector<Aws::String>& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(key, value); return *this; }
    inline Policy& AddIncludeMap(CustomerPolicyScopeIdType&& key, const Aws::Vector<Aws::String>& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(std::move(key), value); return *this; }
    inline Policy& AddIncludeMap(const CustomerPolicyScopeIdType& key, Aws::Vector<Aws::String>&& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(key, std::move(value)); return *this; }
    inline Policy& AddIncludeMap(CustomerPolicyScopeIdType&& key, Aws::Vector<Aws::String>&& value) { m_includeMapHasBeenSet = true; m_includeMap.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account IDs and Organizations
     * organizational units (OUs) to exclude from the policy. Specifying an OU is the
     * equivalent of specifying all accounts in the OU and in any of its child OUs,
     * including any child OUs and accounts that are added at a later time.</p> <p>You
     * can specify inclusions or exclusions, but not both. If you specify an
     * <code>IncludeMap</code>, Firewall Manager applies the policy to all accounts
     * specified by the <code>IncludeMap</code>, and does not evaluate any
     * <code>ExcludeMap</code> specifications. If you do not specify an
     * <code>IncludeMap</code>, then Firewall Manager applies the policy to all
     * accounts except for those specified by the <code>ExcludeMap</code>.</p> <p>You
     * can specify account IDs, OUs, or a combination: </p> <ul> <li> <p>Specify
     * account IDs by setting the key to <code>ACCOUNT</code>. For example, the
     * following is a valid map: <code>{“ACCOUNT” : [“accountID1”,
     * “accountID2”]}</code>.</p> </li> <li> <p>Specify OUs by setting the key to
     * <code>ORG_UNIT</code>. For example, the following is a valid map:
     * <code>{“ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> <li> <p>Specify
     * accounts and OUs together in a single map, separated with a comma. For example,
     * the following is a valid map: <code>{“ACCOUNT” : [“accountID1”, “accountID2”],
     * “ORG_UNIT” : [“ouid111”, “ouid112”]}</code>.</p> </li> </ul>
     */
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetExcludeMap() const{ return m_excludeMap; }
    inline bool ExcludeMapHasBeenSet() const { return m_excludeMapHasBeenSet; }
    inline void SetExcludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { m_excludeMapHasBeenSet = true; m_excludeMap = value; }
    inline void SetExcludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap = std::move(value); }
    inline Policy& WithExcludeMap(const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& value) { SetExcludeMap(value); return *this;}
    inline Policy& WithExcludeMap(Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>&& value) { SetExcludeMap(std::move(value)); return *this;}
    inline Policy& AddExcludeMap(const CustomerPolicyScopeIdType& key, const Aws::Vector<Aws::String>& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(key, value); return *this; }
    inline Policy& AddExcludeMap(CustomerPolicyScopeIdType&& key, const Aws::Vector<Aws::String>& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(std::move(key), value); return *this; }
    inline Policy& AddExcludeMap(const CustomerPolicyScopeIdType& key, Aws::Vector<Aws::String>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(key, std::move(value)); return *this; }
    inline Policy& AddExcludeMap(CustomerPolicyScopeIdType&& key, Aws::Vector<Aws::String>&& value) { m_excludeMapHasBeenSet = true; m_excludeMap.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the resource sets used by the policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceSetIds() const{ return m_resourceSetIds; }
    inline bool ResourceSetIdsHasBeenSet() const { return m_resourceSetIdsHasBeenSet; }
    inline void SetResourceSetIds(const Aws::Vector<Aws::String>& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds = value; }
    inline void SetResourceSetIds(Aws::Vector<Aws::String>&& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds = std::move(value); }
    inline Policy& WithResourceSetIds(const Aws::Vector<Aws::String>& value) { SetResourceSetIds(value); return *this;}
    inline Policy& WithResourceSetIds(Aws::Vector<Aws::String>&& value) { SetResourceSetIds(std::move(value)); return *this;}
    inline Policy& AddResourceSetIds(const Aws::String& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds.push_back(value); return *this; }
    inline Policy& AddResourceSetIds(Aws::String&& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds.push_back(std::move(value)); return *this; }
    inline Policy& AddResourceSetIds(const char* value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Your description of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyDescription() const{ return m_policyDescription; }
    inline bool PolicyDescriptionHasBeenSet() const { return m_policyDescriptionHasBeenSet; }
    inline void SetPolicyDescription(const Aws::String& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = value; }
    inline void SetPolicyDescription(Aws::String&& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = std::move(value); }
    inline void SetPolicyDescription(const char* value) { m_policyDescriptionHasBeenSet = true; m_policyDescription.assign(value); }
    inline Policy& WithPolicyDescription(const Aws::String& value) { SetPolicyDescription(value); return *this;}
    inline Policy& WithPolicyDescription(Aws::String&& value) { SetPolicyDescription(std::move(value)); return *this;}
    inline Policy& WithPolicyDescription(const char* value) { SetPolicyDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy is in or out of an admin's policy or Region
     * scope.</p> <ul> <li> <p> <code>ACTIVE</code> - The administrator can manage and
     * delete the policy.</p> </li> <li> <p> <code>OUT_OF_ADMIN_SCOPE</code> - The
     * administrator can view the policy, but they can't edit or delete the policy.
     * Existing policy protections stay in place. Any new resources that come into
     * scope of the policy won't be protected.</p> </li> </ul>
     */
    inline const CustomerPolicyStatus& GetPolicyStatus() const{ return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    inline void SetPolicyStatus(const CustomerPolicyStatus& value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline void SetPolicyStatus(CustomerPolicyStatus&& value) { m_policyStatusHasBeenSet = true; m_policyStatus = std::move(value); }
    inline Policy& WithPolicyStatus(const CustomerPolicyStatus& value) { SetPolicyStatus(value); return *this;}
    inline Policy& WithPolicyStatus(CustomerPolicyStatus&& value) { SetPolicyStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyUpdateToken;
    bool m_policyUpdateTokenHasBeenSet = false;

    SecurityServicePolicyData m_securityServicePolicyData;
    bool m_securityServicePolicyDataHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypeList;
    bool m_resourceTypeListHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    bool m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet = false;

    bool m_remediationEnabled;
    bool m_remediationEnabledHasBeenSet = false;

    bool m_deleteUnusedFMManagedResources;
    bool m_deleteUnusedFMManagedResourcesHasBeenSet = false;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_includeMap;
    bool m_includeMapHasBeenSet = false;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_excludeMap;
    bool m_excludeMapHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceSetIds;
    bool m_resourceSetIdsHasBeenSet = false;

    Aws::String m_policyDescription;
    bool m_policyDescriptionHasBeenSet = false;

    CustomerPolicyStatus m_policyStatus;
    bool m_policyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
