/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>An action defines the tasks the extension performs during the AppConfig
   * workflow. Each action includes an action point such as
   * <code>ON_CREATE_HOSTED_CONFIGURATION</code>, <code>PRE_DEPLOYMENT</code>, or
   * <code>ON_DEPLOYMENT</code>. Each action also includes a name, a URI to an Lambda
   * function, and an Amazon Resource Name (ARN) for an Identity and Access
   * Management assume role. You specify the name, URI, and ARN for each <i>action
   * point</i> defined in the extension. You can specify the following actions for an
   * extension:</p> <ul> <li> <p>
   * <code>PRE_CREATE_HOSTED_CONFIGURATION_VERSION</code> </p> </li> <li> <p>
   * <code>PRE_START_DEPLOYMENT</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_START</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_STEP</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_BAKING</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_COMPLETE</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_ROLLED_BACK</code> </p> </li> </ul><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_APPCONFIG_API Action();
    AWS_APPCONFIG_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The action name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The action name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The action name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The action name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The action name.</p>
     */
    inline Action& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The action name.</p>
     */
    inline Action& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The action name.</p>
     */
    inline Action& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Information about the action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Information about the action.</p>
     */
    inline Action& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the action.</p>
     */
    inline Action& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Information about the action.</p>
     */
    inline Action& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline Action& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline Action& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline Action& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline Action& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline Action& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline Action& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
