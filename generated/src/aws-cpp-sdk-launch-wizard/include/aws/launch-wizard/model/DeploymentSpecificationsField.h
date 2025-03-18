/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/DeploymentConditionalField.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>A field that details a specification of a deployment pattern.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentSpecificationsField">AWS
   * API Reference</a></p>
   */
  class DeploymentSpecificationsField
  {
  public:
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField() = default;
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowed values of the deployment specification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    DeploymentSpecificationsField& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = Aws::String>
    DeploymentSpecificationsField& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditionals used for the deployment specification.</p>
     */
    inline const Aws::Vector<DeploymentConditionalField>& GetConditionals() const { return m_conditionals; }
    inline bool ConditionalsHasBeenSet() const { return m_conditionalsHasBeenSet; }
    template<typename ConditionalsT = Aws::Vector<DeploymentConditionalField>>
    void SetConditionals(ConditionalsT&& value) { m_conditionalsHasBeenSet = true; m_conditionals = std::forward<ConditionalsT>(value); }
    template<typename ConditionalsT = Aws::Vector<DeploymentConditionalField>>
    DeploymentSpecificationsField& WithConditionals(ConditionalsT&& value) { SetConditionals(std::forward<ConditionalsT>(value)); return *this;}
    template<typename ConditionalsT = DeploymentConditionalField>
    DeploymentSpecificationsField& AddConditionals(ConditionalsT&& value) { m_conditionalsHasBeenSet = true; m_conditionals.emplace_back(std::forward<ConditionalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the deployment specification.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeploymentSpecificationsField& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment specification.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeploymentSpecificationsField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the deployment specification is required.</p>
     */
    inline const Aws::String& GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    template<typename RequiredT = Aws::String>
    void SetRequired(RequiredT&& value) { m_requiredHasBeenSet = true; m_required = std::forward<RequiredT>(value); }
    template<typename RequiredT = Aws::String>
    DeploymentSpecificationsField& WithRequired(RequiredT&& value) { SetRequired(std::forward<RequiredT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::Vector<DeploymentConditionalField> m_conditionals;
    bool m_conditionalsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
