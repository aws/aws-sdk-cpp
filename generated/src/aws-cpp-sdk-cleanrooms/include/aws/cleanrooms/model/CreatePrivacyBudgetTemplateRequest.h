/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateAutoRefresh.h>
#include <aws/cleanrooms/model/PrivacyBudgetType.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateParametersInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreatePrivacyBudgetTemplateRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreatePrivacyBudgetTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline const PrivacyBudgetTemplateAutoRefresh& GetAutoRefresh() const{ return m_autoRefresh; }

    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline bool AutoRefreshHasBeenSet() const { return m_autoRefreshHasBeenSet; }

    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline void SetAutoRefresh(const PrivacyBudgetTemplateAutoRefresh& value) { m_autoRefreshHasBeenSet = true; m_autoRefresh = value; }

    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline void SetAutoRefresh(PrivacyBudgetTemplateAutoRefresh&& value) { m_autoRefreshHasBeenSet = true; m_autoRefresh = std::move(value); }

    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline CreatePrivacyBudgetTemplateRequest& WithAutoRefresh(const PrivacyBudgetTemplateAutoRefresh& value) { SetAutoRefresh(value); return *this;}

    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline CreatePrivacyBudgetTemplateRequest& WithAutoRefresh(PrivacyBudgetTemplateAutoRefresh&& value) { SetAutoRefresh(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetPrivacyBudgetType() const{ return m_privacyBudgetType; }

    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }

    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetType(const PrivacyBudgetType& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }

    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetType(PrivacyBudgetType&& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = std::move(value); }

    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(const PrivacyBudgetType& value) { SetPrivacyBudgetType(value); return *this;}

    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(PrivacyBudgetType&& value) { SetPrivacyBudgetType(std::move(value)); return *this;}


    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline const PrivacyBudgetTemplateParametersInput& GetParameters() const{ return m_parameters; }

    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline void SetParameters(const PrivacyBudgetTemplateParametersInput& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline void SetParameters(PrivacyBudgetTemplateParametersInput&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithParameters(const PrivacyBudgetTemplateParametersInput& value) { SetParameters(value); return *this;}

    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithParameters(PrivacyBudgetTemplateParametersInput&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreatePrivacyBudgetTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    PrivacyBudgetTemplateAutoRefresh m_autoRefresh;
    bool m_autoRefreshHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType;
    bool m_privacyBudgetTypeHasBeenSet = false;

    PrivacyBudgetTemplateParametersInput m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
