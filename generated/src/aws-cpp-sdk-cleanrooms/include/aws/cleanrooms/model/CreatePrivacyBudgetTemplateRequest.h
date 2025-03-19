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
    AWS_CLEANROOMS_API CreatePrivacyBudgetTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivacyBudgetTemplate"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for one of your memberships for a collaboration. The
     * privacy budget template is created in the collaboration that this membership
     * belongs to. Accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreatePrivacyBudgetTemplateRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, you can use
     * <code>CALENDAR_MONTH</code> to automatically get a new privacy budget for the
     * collaboration every calendar month. Choosing this option allows arbitrary
     * amounts of information to be revealed about rows of the data when repeatedly
     * queries across refreshes. Avoid choosing this if the same rows will be
     * repeatedly queried between privacy budget refreshes.</p> 
     */
    inline PrivacyBudgetTemplateAutoRefresh GetAutoRefresh() const { return m_autoRefresh; }
    inline bool AutoRefreshHasBeenSet() const { return m_autoRefreshHasBeenSet; }
    inline void SetAutoRefresh(PrivacyBudgetTemplateAutoRefresh value) { m_autoRefreshHasBeenSet = true; m_autoRefresh = value; }
    inline CreatePrivacyBudgetTemplateRequest& WithAutoRefresh(PrivacyBudgetTemplateAutoRefresh value) { SetAutoRefresh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline PrivacyBudgetType GetPrivacyBudgetType() const { return m_privacyBudgetType; }
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }
    inline void SetPrivacyBudgetType(PrivacyBudgetType value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }
    inline CreatePrivacyBudgetTemplateRequest& WithPrivacyBudgetType(PrivacyBudgetType value) { SetPrivacyBudgetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your parameters for the privacy budget template.</p>
     */
    inline const PrivacyBudgetTemplateParametersInput& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = PrivacyBudgetTemplateParametersInput>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = PrivacyBudgetTemplateParametersInput>
    CreatePrivacyBudgetTemplateRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePrivacyBudgetTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePrivacyBudgetTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    PrivacyBudgetTemplateAutoRefresh m_autoRefresh{PrivacyBudgetTemplateAutoRefresh::NOT_SET};
    bool m_autoRefreshHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType{PrivacyBudgetType::NOT_SET};
    bool m_privacyBudgetTypeHasBeenSet = false;

    PrivacyBudgetTemplateParametersInput m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
