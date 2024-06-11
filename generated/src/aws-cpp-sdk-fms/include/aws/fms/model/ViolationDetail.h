﻿/**
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
    AWS_FMS_API ViolationDetail();
    AWS_FMS_API ViolationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ViolationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Firewall Manager policy that the violation details were
     * requested for.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }
    inline ViolationDetail& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}
    inline ViolationDetail& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}
    inline ViolationDetail& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that the violation details were requested
     * for.</p>
     */
    inline const Aws::String& GetMemberAccount() const{ return m_memberAccount; }
    inline bool MemberAccountHasBeenSet() const { return m_memberAccountHasBeenSet; }
    inline void SetMemberAccount(const Aws::String& value) { m_memberAccountHasBeenSet = true; m_memberAccount = value; }
    inline void SetMemberAccount(Aws::String&& value) { m_memberAccountHasBeenSet = true; m_memberAccount = std::move(value); }
    inline void SetMemberAccount(const char* value) { m_memberAccountHasBeenSet = true; m_memberAccount.assign(value); }
    inline ViolationDetail& WithMemberAccount(const Aws::String& value) { SetMemberAccount(value); return *this;}
    inline ViolationDetail& WithMemberAccount(Aws::String&& value) { SetMemberAccount(std::move(value)); return *this;}
    inline ViolationDetail& WithMemberAccount(const char* value) { SetMemberAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ID that the violation details were requested for.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ViolationDetail& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ViolationDetail& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ViolationDetail& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type that the violation details were requested for.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ViolationDetail& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ViolationDetail& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ViolationDetail& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of violations for the requested resource.</p>
     */
    inline const Aws::Vector<ResourceViolation>& GetResourceViolations() const{ return m_resourceViolations; }
    inline bool ResourceViolationsHasBeenSet() const { return m_resourceViolationsHasBeenSet; }
    inline void SetResourceViolations(const Aws::Vector<ResourceViolation>& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations = value; }
    inline void SetResourceViolations(Aws::Vector<ResourceViolation>&& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations = std::move(value); }
    inline ViolationDetail& WithResourceViolations(const Aws::Vector<ResourceViolation>& value) { SetResourceViolations(value); return *this;}
    inline ViolationDetail& WithResourceViolations(Aws::Vector<ResourceViolation>&& value) { SetResourceViolations(std::move(value)); return *this;}
    inline ViolationDetail& AddResourceViolations(const ResourceViolation& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations.push_back(value); return *this; }
    inline ViolationDetail& AddResourceViolations(ResourceViolation&& value) { m_resourceViolationsHasBeenSet = true; m_resourceViolations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ResourceTag</code> objects associated with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<Tag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<Tag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline ViolationDetail& WithResourceTags(const Aws::Vector<Tag>& value) { SetResourceTags(value); return *this;}
    inline ViolationDetail& WithResourceTags(Aws::Vector<Tag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline ViolationDetail& AddResourceTags(const Tag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline ViolationDetail& AddResourceTags(Tag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Brief description for the requested resource.</p>
     */
    inline const Aws::String& GetResourceDescription() const{ return m_resourceDescription; }
    inline bool ResourceDescriptionHasBeenSet() const { return m_resourceDescriptionHasBeenSet; }
    inline void SetResourceDescription(const Aws::String& value) { m_resourceDescriptionHasBeenSet = true; m_resourceDescription = value; }
    inline void SetResourceDescription(Aws::String&& value) { m_resourceDescriptionHasBeenSet = true; m_resourceDescription = std::move(value); }
    inline void SetResourceDescription(const char* value) { m_resourceDescriptionHasBeenSet = true; m_resourceDescription.assign(value); }
    inline ViolationDetail& WithResourceDescription(const Aws::String& value) { SetResourceDescription(value); return *this;}
    inline ViolationDetail& WithResourceDescription(Aws::String&& value) { SetResourceDescription(std::move(value)); return *this;}
    inline ViolationDetail& WithResourceDescription(const char* value) { SetResourceDescription(value); return *this;}
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
