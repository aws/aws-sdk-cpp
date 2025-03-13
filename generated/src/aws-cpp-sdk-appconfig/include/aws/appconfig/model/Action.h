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
   * <p>An action defines the tasks that the extension performs during the AppConfig
   * workflow. Each action includes an action point, as shown in the following list:
   * </p> <ul> <li> <p> <code>PRE_CREATE_HOSTED_CONFIGURATION_VERSION</code> </p>
   * </li> <li> <p> <code>PRE_START_DEPLOYMENT</code> </p> </li> <li> <p>
   * <code>AT_DEPLOYMENT_TICK</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_START</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_STEP</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_BAKING</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_COMPLETE</code> </p> </li> <li> <p>
   * <code>ON_DEPLOYMENT_ROLLED_BACK</code> </p> </li> </ul> <p>Each action also
   * includes a name, a URI to an Lambda function, and an Amazon Resource Name (ARN)
   * for an Identity and Access Management assume role. You specify the name, URI,
   * and ARN for each <i>action point</i> defined in the extension.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_APPCONFIG_API Action() = default;
    AWS_APPCONFIG_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Action& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Action& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extension URI associated to the action point in the extension definition.
     * The URI can be an Amazon Resource Name (ARN) for one of the following: an Lambda
     * function, an Amazon Simple Queue Service queue, an Amazon Simple Notification
     * Service topic, or the Amazon EventBridge default event bus.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    Action& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) for an Identity and Access Management assume
     * role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Action& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
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
