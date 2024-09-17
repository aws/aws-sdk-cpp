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
    AWS_APPCONFIG_API UpdateExtensionRequest();

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
    inline const Aws::String& GetExtensionIdentifier() const{ return m_extensionIdentifier; }
    inline bool ExtensionIdentifierHasBeenSet() const { return m_extensionIdentifierHasBeenSet; }
    inline void SetExtensionIdentifier(const Aws::String& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = value; }
    inline void SetExtensionIdentifier(Aws::String&& value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier = std::move(value); }
    inline void SetExtensionIdentifier(const char* value) { m_extensionIdentifierHasBeenSet = true; m_extensionIdentifier.assign(value); }
    inline UpdateExtensionRequest& WithExtensionIdentifier(const Aws::String& value) { SetExtensionIdentifier(value); return *this;}
    inline UpdateExtensionRequest& WithExtensionIdentifier(Aws::String&& value) { SetExtensionIdentifier(std::move(value)); return *this;}
    inline UpdateExtensionRequest& WithExtensionIdentifier(const char* value) { SetExtensionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateExtensionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateExtensionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateExtensionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions defined in the extension.</p>
     */
    inline const Aws::Map<ActionPoint, Aws::Vector<Action>>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UpdateExtensionRequest& WithActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { SetActions(value); return *this;}
    inline UpdateExtensionRequest& WithActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { SetActions(std::move(value)); return *this;}
    inline UpdateExtensionRequest& AddActions(const ActionPoint& key, const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    inline UpdateExtensionRequest& AddActions(ActionPoint&& key, const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionRequest& AddActions(const ActionPoint& key, Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionRequest& AddActions(ActionPoint&& key, Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more parameters for the actions called by the extension.</p>
     */
    inline const Aws::Map<Aws::String, Parameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateExtensionRequest& WithParameters(const Aws::Map<Aws::String, Parameter>& value) { SetParameters(value); return *this;}
    inline UpdateExtensionRequest& WithParameters(Aws::Map<Aws::String, Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateExtensionRequest& AddParameters(const Aws::String& key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline UpdateExtensionRequest& AddParameters(Aws::String&& key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExtensionRequest& AddParameters(const Aws::String& key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionRequest& AddParameters(Aws::String&& key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExtensionRequest& AddParameters(const char* key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExtensionRequest& AddParameters(const char* key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The extension version number.</p>
     */
    inline int GetVersionNumber() const{ return m_versionNumber; }
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

    int m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
