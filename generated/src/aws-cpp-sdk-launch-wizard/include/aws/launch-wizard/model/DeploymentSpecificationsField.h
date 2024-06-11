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
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField();
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API DeploymentSpecificationsField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The allowed values of the deployment specification.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline DeploymentSpecificationsField& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}
    inline DeploymentSpecificationsField& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline DeploymentSpecificationsField& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline DeploymentSpecificationsField& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    inline DeploymentSpecificationsField& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditionals used for the deployment specification.</p>
     */
    inline const Aws::Vector<DeploymentConditionalField>& GetConditionals() const{ return m_conditionals; }
    inline bool ConditionalsHasBeenSet() const { return m_conditionalsHasBeenSet; }
    inline void SetConditionals(const Aws::Vector<DeploymentConditionalField>& value) { m_conditionalsHasBeenSet = true; m_conditionals = value; }
    inline void SetConditionals(Aws::Vector<DeploymentConditionalField>&& value) { m_conditionalsHasBeenSet = true; m_conditionals = std::move(value); }
    inline DeploymentSpecificationsField& WithConditionals(const Aws::Vector<DeploymentConditionalField>& value) { SetConditionals(value); return *this;}
    inline DeploymentSpecificationsField& WithConditionals(Aws::Vector<DeploymentConditionalField>&& value) { SetConditionals(std::move(value)); return *this;}
    inline DeploymentSpecificationsField& AddConditionals(const DeploymentConditionalField& value) { m_conditionalsHasBeenSet = true; m_conditionals.push_back(value); return *this; }
    inline DeploymentSpecificationsField& AddConditionals(DeploymentConditionalField&& value) { m_conditionalsHasBeenSet = true; m_conditionals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the deployment specification.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DeploymentSpecificationsField& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DeploymentSpecificationsField& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DeploymentSpecificationsField& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment specification.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeploymentSpecificationsField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeploymentSpecificationsField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeploymentSpecificationsField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the deployment specification is required.</p>
     */
    inline const Aws::String& GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(const Aws::String& value) { m_requiredHasBeenSet = true; m_required = value; }
    inline void SetRequired(Aws::String&& value) { m_requiredHasBeenSet = true; m_required = std::move(value); }
    inline void SetRequired(const char* value) { m_requiredHasBeenSet = true; m_required.assign(value); }
    inline DeploymentSpecificationsField& WithRequired(const Aws::String& value) { SetRequired(value); return *this;}
    inline DeploymentSpecificationsField& WithRequired(Aws::String&& value) { SetRequired(std::move(value)); return *this;}
    inline DeploymentSpecificationsField& WithRequired(const char* value) { SetRequired(value); return *this;}
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
