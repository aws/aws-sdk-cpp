/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/LayoutConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateStatus.h>
#include <aws/connectcases/model/RequiredField.h>
#include <aws/connectcases/model/TemplateRule.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class CreateTemplateRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API CreateTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A brief description of the template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateTemplateRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of layouts associated to the template.</p>
     */
    inline const LayoutConfiguration& GetLayoutConfiguration() const { return m_layoutConfiguration; }
    inline bool LayoutConfigurationHasBeenSet() const { return m_layoutConfigurationHasBeenSet; }
    template<typename LayoutConfigurationT = LayoutConfiguration>
    void SetLayoutConfiguration(LayoutConfigurationT&& value) { m_layoutConfigurationHasBeenSet = true; m_layoutConfiguration = std::forward<LayoutConfigurationT>(value); }
    template<typename LayoutConfigurationT = LayoutConfiguration>
    CreateTemplateRequest& WithLayoutConfiguration(LayoutConfigurationT&& value) { SetLayoutConfiguration(std::forward<LayoutConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the template. It must be unique per domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of fields that must contain a value for a case to be successfully
     * created with this template.</p>
     */
    inline const Aws::Vector<RequiredField>& GetRequiredFields() const { return m_requiredFields; }
    inline bool RequiredFieldsHasBeenSet() const { return m_requiredFieldsHasBeenSet; }
    template<typename RequiredFieldsT = Aws::Vector<RequiredField>>
    void SetRequiredFields(RequiredFieldsT&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields = std::forward<RequiredFieldsT>(value); }
    template<typename RequiredFieldsT = Aws::Vector<RequiredField>>
    CreateTemplateRequest& WithRequiredFields(RequiredFieldsT&& value) { SetRequiredFields(std::forward<RequiredFieldsT>(value)); return *this;}
    template<typename RequiredFieldsT = RequiredField>
    CreateTemplateRequest& AddRequiredFields(RequiredFieldsT&& value) { m_requiredFieldsHasBeenSet = true; m_requiredFields.emplace_back(std::forward<RequiredFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of case rules (also known as <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">case
     * field conditions</a>) on a template. </p>
     */
    inline const Aws::Vector<TemplateRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<TemplateRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<TemplateRule>>
    CreateTemplateRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = TemplateRule>
    CreateTemplateRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the template.</p>
     */
    inline TemplateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TemplateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateTemplateRequest& WithStatus(TemplateStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    LayoutConfiguration m_layoutConfiguration;
    bool m_layoutConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RequiredField> m_requiredFields;
    bool m_requiredFieldsHasBeenSet = false;

    Aws::Vector<TemplateRule> m_rules;
    bool m_rulesHasBeenSet = false;

    TemplateStatus m_status{TemplateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
