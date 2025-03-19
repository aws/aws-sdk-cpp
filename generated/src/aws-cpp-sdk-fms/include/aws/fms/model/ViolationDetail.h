/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/ResourceViolation.h>
#include <aws/fms/model/Tag.h>
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
   * <p>Violations for a resource based on the specified Firewall Manager policy and
   * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ViolationDetail">AWS
   * API Reference</a></p>
   */
  class ViolationDetail
  {
  public:
    AWS_FMS_API ViolationDetail() = default;
    AWS_FMS_API ViolationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ViolationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager policy that the violation details were
     * requested for.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    ViolationDetail& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that the violation details were requested
     * for.</p>
     */
    inline const Aws::String& GetMemberAccount() const { return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    template<typename MemberAccountT = Aws::String>
    void SetMemberAccount(MemberAccountT&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::forward<MemberAccountT>(value); }
    template<typename MemberAccountT = Aws::String>
    ViolationDetail& WithMemberAccount(MemberAccountT&& value) { SetMemberAccount(std::forward<MemberAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID that the violation details were requested for.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ViolationDetail& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type that the violation details were requested for.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ViolationDetail& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of violations for the requested resource.</p>
     */
    inline const Aws::Vector<ResourceViolation>& GetResourceViolations() const { return m_resourceViolations; }
    inline bool ResourceViolationsHasBeenSet() const { return m_resourceViolationsHasBeenSet; }
    template<typename ResourceViolationsT = Aws::Vector<ResourceViolation>>
    void SetResourceViolations(ResourceViolationsT&& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations = std::forward<ResourceViolationsT>(value); }
    template<typename ResourceViolationsT = Aws::Vector<ResourceViolation>>
    ViolationDetail& WithResourceViolations(ResourceViolationsT&& value) { SetResourceViolations(std::forward<ResourceViolationsT>(value)); return *this;}
    template<typename ResourceViolationsT = ResourceViolation>
    ViolationDetail& AddResourceViolations(ResourceViolationsT&& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations.emplace_back(std::forward<ResourceViolationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ResourceTag</code> objects associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<Tag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<Tag>>
    ViolationDetail& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = Tag>
    ViolationDetail& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Brief description for the requested resource.</p>
     */
    inline const Aws::String& GetResourceDescription() const { return m_resourceDescription; }
    inline bool ResourceDescriptionHasBeenSet() const { return m_resourceDescriptionHasBeenSet; }
    template<typename ResourceDescriptionT = Aws::String>
    void SetResourceDescription(ResourceDescriptionT&& value) { m_resourceDescriptionHasBeenSet = true; m_resourceDescription = std::forward<ResourceDescriptionT>(value); }
    template<typename ResourceDescriptionT = Aws::String>
    ViolationDetail& WithResourceDescription(ResourceDescriptionT&& value) { SetResourceDescription(std::forward<ResourceDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_memberAccount;
    bool m_memberAccountHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceViolation> m_resourceViolations;
    bool m_resourceViolationsHasBeenSet = false;

    Aws::Vector<Tag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::String m_resourceDescription;
    bool m_resourceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
