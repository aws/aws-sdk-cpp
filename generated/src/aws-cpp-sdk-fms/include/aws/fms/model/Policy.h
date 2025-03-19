/**
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
#include <aws/fms/model/ResourceTagLogicalOperator.h>
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
    AWS_FMS_API Policy() = default;
    AWS_FMS_API Policy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    Policy& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    Policy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for each update to the policy. When issuing a
     * <code>PutPolicy</code> request, the <code>PolicyUpdateToken</code> in the
     * request must match the <code>PolicyUpdateToken</code> of the current policy
     * version. To get the <code>PolicyUpdateToken</code> of the current policy
     * version, use a <code>GetPolicy</code> request.</p>
     */
    inline const Aws::String& GetPolicyUpdateToken() const { return m_policyUpdateToken; }
    inline bool PolicyUpdateTokenHasBeenSet() const { return m_policyUpdateTokenHasBeenSet; }
    template<typename PolicyUpdateTokenT = Aws::String>
    void SetPolicyUpdateToken(PolicyUpdateTokenT&& value) { m_policyUpdateTokenHasBeenSet = true; m_policyUpdateToken = std::forward<PolicyUpdateTokenT>(value); }
    template<typename PolicyUpdateTokenT = Aws::String>
    Policy& WithPolicyUpdateToken(PolicyUpdateTokenT&& value) { SetPolicyUpdateToken(std::forward<PolicyUpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the security service that is being used to protect the
     * resources.</p>
     */
    inline const SecurityServicePolicyData& GetSecurityServicePolicyData() const { return m_securityServicePolicyData; }
    inline bool SecurityServicePolicyDataHasBeenSet() const { return m_securityServicePolicyDataHasBeenSet; }
    template<typename SecurityServicePolicyDataT = SecurityServicePolicyData>
    void SetSecurityServicePolicyData(SecurityServicePolicyDataT&& value) { m_securityServicePolicyDataHasBeenSet = true; m_securityServicePolicyData = std::forward<SecurityServicePolicyDataT>(value); }
    template<typename SecurityServicePolicyDataT = SecurityServicePolicyData>
    Policy& WithSecurityServicePolicyData(SecurityServicePolicyDataT&& value) { SetSecurityServicePolicyData(std::forward<SecurityServicePolicyDataT>(value)); return *this;}
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
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    Policy& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceType</code> objects. Use this only to specify
     * multiple resource types. To specify a single resource type, use
     * <code>ResourceType</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeList() const { return m_resourceTypeList; }
    inline bool ResourceTypeListHasBeenSet() const { return m_resourceTypeListHasBeenSet; }
    template<typename ResourceTypeListT = Aws::Vector<Aws::String>>
    void SetResourceTypeList(ResourceTypeListT&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList = std::forward<ResourceTypeListT>(value); }
    template<typename ResourceTypeListT = Aws::Vector<Aws::String>>
    Policy& WithResourceTypeList(ResourceTypeListT&& value) { SetResourceTypeList(std::forward<ResourceTypeListT>(value)); return *this;}
    template<typename ResourceTypeListT = Aws::String>
    Policy& AddResourceTypeList(ResourceTypeListT&& value) { m_resourceTypeListHasBeenSet = true; m_resourceTypeList.emplace_back(std::forward<ResourceTypeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResourceTag</code> objects.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    Policy& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    Policy& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to <code>True</code>, resources with the tags that are specified in
     * the <code>ResourceTag</code> array are not in scope of the policy. If set to
     * <code>False</code>, and the <code>ResourceTag</code> array is not null, only
     * resources with the specified tags are in scope of the policy.</p>
     */
    inline bool GetExcludeResourceTags() const { return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    inline void SetExcludeResourceTags(bool value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }
    inline Policy& WithExcludeResourceTags(bool value) { SetExcludeResourceTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the policy should be automatically applied to new resources.</p>
     */
    inline bool GetRemediationEnabled() const { return m_remediationEnabled; }
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
    inline bool GetDeleteUnusedFMManagedResources() const { return m_deleteUnusedFMManagedResources; }
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
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetIncludeMap() const { return m_includeMap; }
    inline bool IncludeMapHasBeenSet() const { return m_includeMapHasBeenSet; }
    template<typename IncludeMapT = Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>>
    void SetIncludeMap(IncludeMapT&& value) { m_includeMapHasBeenSet = true; m_includeMap = std::forward<IncludeMapT>(value); }
    template<typename IncludeMapT = Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>>
    Policy& WithIncludeMap(IncludeMapT&& value) { SetIncludeMap(std::forward<IncludeMapT>(value)); return *this;}
    inline Policy& AddIncludeMap(CustomerPolicyScopeIdType key, Aws::Vector<Aws::String> value) {
      m_includeMapHasBeenSet = true; m_includeMap.emplace(key, value); return *this;
    }
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
    inline const Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>& GetExcludeMap() const { return m_excludeMap; }
    inline bool ExcludeMapHasBeenSet() const { return m_excludeMapHasBeenSet; }
    template<typename ExcludeMapT = Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>>
    void SetExcludeMap(ExcludeMapT&& value) { m_excludeMapHasBeenSet = true; m_excludeMap = std::forward<ExcludeMapT>(value); }
    template<typename ExcludeMapT = Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>>>
    Policy& WithExcludeMap(ExcludeMapT&& value) { SetExcludeMap(std::forward<ExcludeMapT>(value)); return *this;}
    inline Policy& AddExcludeMap(CustomerPolicyScopeIdType key, Aws::Vector<Aws::String> value) {
      m_excludeMapHasBeenSet = true; m_excludeMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the resource sets used by the policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceSetIds() const { return m_resourceSetIds; }
    inline bool ResourceSetIdsHasBeenSet() const { return m_resourceSetIdsHasBeenSet; }
    template<typename ResourceSetIdsT = Aws::Vector<Aws::String>>
    void SetResourceSetIds(ResourceSetIdsT&& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds = std::forward<ResourceSetIdsT>(value); }
    template<typename ResourceSetIdsT = Aws::Vector<Aws::String>>
    Policy& WithResourceSetIds(ResourceSetIdsT&& value) { SetResourceSetIds(std::forward<ResourceSetIdsT>(value)); return *this;}
    template<typename ResourceSetIdsT = Aws::String>
    Policy& AddResourceSetIds(ResourceSetIdsT&& value) { m_resourceSetIdsHasBeenSet = true; m_resourceSetIds.emplace_back(std::forward<ResourceSetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Your description of the Firewall Manager policy.</p>
     */
    inline const Aws::String& GetPolicyDescription() const { return m_policyDescription; }
    inline bool PolicyDescriptionHasBeenSet() const { return m_policyDescriptionHasBeenSet; }
    template<typename PolicyDescriptionT = Aws::String>
    void SetPolicyDescription(PolicyDescriptionT&& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = std::forward<PolicyDescriptionT>(value); }
    template<typename PolicyDescriptionT = Aws::String>
    Policy& WithPolicyDescription(PolicyDescriptionT&& value) { SetPolicyDescription(std::forward<PolicyDescriptionT>(value)); return *this;}
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
    inline CustomerPolicyStatus GetPolicyStatus() const { return m_policyStatus; }
    inline bool PolicyStatusHasBeenSet() const { return m_policyStatusHasBeenSet; }
    inline void SetPolicyStatus(CustomerPolicyStatus value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline Policy& WithPolicyStatus(CustomerPolicyStatus value) { SetPolicyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to combine multiple resource tags with AND, so that a
     * resource must have all tags to be included or excluded, or OR, so that a
     * resource must have at least one tag.</p> <p>Default: <code>AND</code> </p>
     */
    inline ResourceTagLogicalOperator GetResourceTagLogicalOperator() const { return m_resourceTagLogicalOperator; }
    inline bool ResourceTagLogicalOperatorHasBeenSet() const { return m_resourceTagLogicalOperatorHasBeenSet; }
    inline void SetResourceTagLogicalOperator(ResourceTagLogicalOperator value) { m_resourceTagLogicalOperatorHasBeenSet = true; m_resourceTagLogicalOperator = value; }
    inline Policy& WithResourceTagLogicalOperator(ResourceTagLogicalOperator value) { SetResourceTagLogicalOperator(value); return *this;}
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

    bool m_excludeResourceTags{false};
    bool m_excludeResourceTagsHasBeenSet = false;

    bool m_remediationEnabled{false};
    bool m_remediationEnabledHasBeenSet = false;

    bool m_deleteUnusedFMManagedResources{false};
    bool m_deleteUnusedFMManagedResourcesHasBeenSet = false;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_includeMap;
    bool m_includeMapHasBeenSet = false;

    Aws::Map<CustomerPolicyScopeIdType, Aws::Vector<Aws::String>> m_excludeMap;
    bool m_excludeMapHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceSetIds;
    bool m_resourceSetIdsHasBeenSet = false;

    Aws::String m_policyDescription;
    bool m_policyDescriptionHasBeenSet = false;

    CustomerPolicyStatus m_policyStatus{CustomerPolicyStatus::NOT_SET};
    bool m_policyStatusHasBeenSet = false;

    ResourceTagLogicalOperator m_resourceTagLogicalOperator{ResourceTagLogicalOperator::NOT_SET};
    bool m_resourceTagLogicalOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
