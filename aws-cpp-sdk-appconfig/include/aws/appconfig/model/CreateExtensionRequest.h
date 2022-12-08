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
  class CreateExtensionRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExtension"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline CreateExtensionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline CreateExtensionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the extension. Each extension name in your account must be unique.
     * Extension versions use the same name.</p>
     */
    inline CreateExtensionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the extension.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Information about the extension.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the extension.</p>
     */
    inline CreateExtensionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the extension.</p>
     */
    inline CreateExtensionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the extension.</p>
     */
    inline CreateExtensionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The actions defined in the extension.</p>
     */
    inline const Aws::Map<ActionPoint, Aws::Vector<Action>>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline void SetActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline void SetActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& WithActions(const Aws::Map<ActionPoint, Aws::Vector<Action>>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& WithActions(Aws::Map<ActionPoint, Aws::Vector<Action>>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& AddActions(const ActionPoint& key, const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& AddActions(ActionPoint&& key, const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& AddActions(const ActionPoint& key, Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions defined in the extension.</p>
     */
    inline CreateExtensionRequest& AddActions(ActionPoint&& key, Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline const Aws::Map<Aws::String, Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& WithParameters(const Aws::Map<Aws::String, Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& WithParameters(Aws::Map<Aws::String, Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(const Aws::String& key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(Aws::String&& key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(const Aws::String& key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(Aws::String&& key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(const char* key, Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters accepted by the extension. You specify parameter values when
     * you associate the extension to an AppConfig resource by using the
     * <code>CreateExtensionAssociation</code> API action. For Lambda extension
     * actions, these parameters are included in the Lambda request object.</p>
     */
    inline CreateExtensionRequest& AddParameters(const char* key, const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Adds one or more tags for the specified extension. Tags are metadata that
     * help you categorize resources in different ways, for example, by purpose, owner,
     * or environment. Each tag consists of a key and an optional value, both of which
     * you define. </p>
     */
    inline CreateExtensionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>You can omit this field when you create an extension. When you create a new
     * version, specify the most recent current version number. For example, you create
     * version 3, enter 2 for this field.</p>
     */
    inline int GetLatestVersionNumber() const{ return m_latestVersionNumber; }

    /**
     * <p>You can omit this field when you create an extension. When you create a new
     * version, specify the most recent current version number. For example, you create
     * version 3, enter 2 for this field.</p>
     */
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }

    /**
     * <p>You can omit this field when you create an extension. When you create a new
     * version, specify the most recent current version number. For example, you create
     * version 3, enter 2 for this field.</p>
     */
    inline void SetLatestVersionNumber(int value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }

    /**
     * <p>You can omit this field when you create an extension. When you create a new
     * version, specify the most recent current version number. For example, you create
     * version 3, enter 2 for this field.</p>
     */
    inline CreateExtensionRequest& WithLatestVersionNumber(int value) { SetLatestVersionNumber(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<ActionPoint, Aws::Vector<Action>> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Map<Aws::String, Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
