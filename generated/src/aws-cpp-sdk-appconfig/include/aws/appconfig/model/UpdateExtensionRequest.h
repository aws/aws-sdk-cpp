/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appconfig/model/ActionPoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Parameter.h>
#include <aws/appconfig/model/Action.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class UpdateExtensionRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateExtensionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExtension"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name, the ID, or the Amazon Resource Name (ARN) of the extension.</p>
     */
    inline const Aws::String& GetExtensionIdentifier() const { return m_extensionIdentifier; }
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }
    template<typename ExtensionIdentifierT = Aws::String>
    void SetExtensionIdentifier(ExtensionIdentifierT&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::forward<ExtensionIdentifierT>(value); }
    template<typename ExtensionIdentifierT = Aws::String>
    UpdateExtensionRequest& WithExtensionIdentifier(ExtensionIdentifierT&& value) { SetExtensionIdentifier(std::forward<ExtensionIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the extension.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateExtensionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions defined in the extension.</p>
     */
    inline const Aws::Map<ActionPoint, Aws::Vector<Action>>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Map<ActionPoint, Aws::Vector<Action>>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Map<ActionPoint, Aws::Vector<Action>>>
    UpdateExtensionRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    inline UpdateExtensionRequest& AddActions(ActionPoint key, Aws::Vector<Action> value) {
      m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>One or more parameters for the actions called by the extension.</p>
     */
    inline const Aws::Map<Aws::String, Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Parameter>>
    UpdateExtensionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Parameter>
    UpdateExtensionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(int value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline UpdateExtensionRequest& WithVersionNumber(int value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_extensionIdentifier;
    bool m_extensionIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<ActionPoint, Aws::Vector<Action>> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Map<Aws::String, Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
