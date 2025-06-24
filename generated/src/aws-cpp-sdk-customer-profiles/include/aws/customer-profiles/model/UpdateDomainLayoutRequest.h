/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/LayoutType.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class UpdateDomainLayoutRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateDomainLayoutRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainLayout"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainLayoutRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the layout.</p>
     */
    inline const Aws::String& GetLayoutDefinitionName() const { return m_layoutDefinitionName; }
    inline bool LayoutDefinitionNameHasBeenSet() const { return m_layoutDefinitionNameHasBeenSet; }
    template<typename LayoutDefinitionNameT = Aws::String>
    void SetLayoutDefinitionName(LayoutDefinitionNameT&& value) { m_layoutDefinitionNameHasBeenSet = true; m_layoutDefinitionName = std::forward<LayoutDefinitionNameT>(value); }
    template<typename LayoutDefinitionNameT = Aws::String>
    UpdateDomainLayoutRequest& WithLayoutDefinitionName(LayoutDefinitionNameT&& value) { SetLayoutDefinitionName(std::forward<LayoutDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the layout</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDomainLayoutRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the layout</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateDomainLayoutRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true for a layout, this layout will be used by default to view
     * data. If set to false, then the layout will not be used by default, but it can
     * be used to view data by explicitly selecting it in the console.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline UpdateDomainLayoutRequest& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of layout that can be used to view data under a Customer Profiles
     * domain.</p>
     */
    inline LayoutType GetLayoutType() const { return m_layoutType; }
    inline bool LayoutTypeHasBeenSet() const { return m_layoutTypeHasBeenSet; }
    inline void SetLayoutType(LayoutType value) { m_layoutTypeHasBeenSet = true; m_layoutType = value; }
    inline UpdateDomainLayoutRequest& WithLayoutType(LayoutType value) { SetLayoutType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customizable layout that can be used to view data under a Customer Profiles
     * domain.</p>
     */
    inline const Aws::String& GetLayout() const { return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    template<typename LayoutT = Aws::String>
    void SetLayout(LayoutT&& value) { m_layoutHasBeenSet = true; m_layout = std::forward<LayoutT>(value); }
    template<typename LayoutT = Aws::String>
    UpdateDomainLayoutRequest& WithLayout(LayoutT&& value) { SetLayout(std::forward<LayoutT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_layoutDefinitionName;
    bool m_layoutDefinitionNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    LayoutType m_layoutType{LayoutType::NOT_SET};
    bool m_layoutTypeHasBeenSet = false;

    Aws::String m_layout;
    bool m_layoutHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
