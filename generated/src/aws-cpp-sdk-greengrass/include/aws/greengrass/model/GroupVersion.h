/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a group version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupVersion">AWS
   * API Reference</a></p>
   */
  class GroupVersion
  {
  public:
    AWS_GREENGRASS_API GroupVersion() = default;
    AWS_GREENGRASS_API GroupVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the connector definition version for this group.
     */
    inline const Aws::String& GetConnectorDefinitionVersionArn() const { return m_connectorDefinitionVersionArn; }
    inline bool ConnectorDefinitionVersionArnHasBeenSet() const { return m_connectorDefinitionVersionArnHasBeenSet; }
    template<typename ConnectorDefinitionVersionArnT = Aws::String>
    void SetConnectorDefinitionVersionArn(ConnectorDefinitionVersionArnT&& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = std::forward<ConnectorDefinitionVersionArnT>(value); }
    template<typename ConnectorDefinitionVersionArnT = Aws::String>
    GroupVersion& WithConnectorDefinitionVersionArn(ConnectorDefinitionVersionArnT&& value) { SetConnectorDefinitionVersionArn(std::forward<ConnectorDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the core definition version for this group.
     */
    inline const Aws::String& GetCoreDefinitionVersionArn() const { return m_coreDefinitionVersionArn; }
    inline bool CoreDefinitionVersionArnHasBeenSet() const { return m_coreDefinitionVersionArnHasBeenSet; }
    template<typename CoreDefinitionVersionArnT = Aws::String>
    void SetCoreDefinitionVersionArn(CoreDefinitionVersionArnT&& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = std::forward<CoreDefinitionVersionArnT>(value); }
    template<typename CoreDefinitionVersionArnT = Aws::String>
    GroupVersion& WithCoreDefinitionVersionArn(CoreDefinitionVersionArnT&& value) { SetCoreDefinitionVersionArn(std::forward<CoreDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the device definition version for this group.
     */
    inline const Aws::String& GetDeviceDefinitionVersionArn() const { return m_deviceDefinitionVersionArn; }
    inline bool DeviceDefinitionVersionArnHasBeenSet() const { return m_deviceDefinitionVersionArnHasBeenSet; }
    template<typename DeviceDefinitionVersionArnT = Aws::String>
    void SetDeviceDefinitionVersionArn(DeviceDefinitionVersionArnT&& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = std::forward<DeviceDefinitionVersionArnT>(value); }
    template<typename DeviceDefinitionVersionArnT = Aws::String>
    GroupVersion& WithDeviceDefinitionVersionArn(DeviceDefinitionVersionArnT&& value) { SetDeviceDefinitionVersionArn(std::forward<DeviceDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the function definition version for this group.
     */
    inline const Aws::String& GetFunctionDefinitionVersionArn() const { return m_functionDefinitionVersionArn; }
    inline bool FunctionDefinitionVersionArnHasBeenSet() const { return m_functionDefinitionVersionArnHasBeenSet; }
    template<typename FunctionDefinitionVersionArnT = Aws::String>
    void SetFunctionDefinitionVersionArn(FunctionDefinitionVersionArnT&& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = std::forward<FunctionDefinitionVersionArnT>(value); }
    template<typename FunctionDefinitionVersionArnT = Aws::String>
    GroupVersion& WithFunctionDefinitionVersionArn(FunctionDefinitionVersionArnT&& value) { SetFunctionDefinitionVersionArn(std::forward<FunctionDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the logger definition version for this group.
     */
    inline const Aws::String& GetLoggerDefinitionVersionArn() const { return m_loggerDefinitionVersionArn; }
    inline bool LoggerDefinitionVersionArnHasBeenSet() const { return m_loggerDefinitionVersionArnHasBeenSet; }
    template<typename LoggerDefinitionVersionArnT = Aws::String>
    void SetLoggerDefinitionVersionArn(LoggerDefinitionVersionArnT&& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = std::forward<LoggerDefinitionVersionArnT>(value); }
    template<typename LoggerDefinitionVersionArnT = Aws::String>
    GroupVersion& WithLoggerDefinitionVersionArn(LoggerDefinitionVersionArnT&& value) { SetLoggerDefinitionVersionArn(std::forward<LoggerDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the resource definition version for this group.
     */
    inline const Aws::String& GetResourceDefinitionVersionArn() const { return m_resourceDefinitionVersionArn; }
    inline bool ResourceDefinitionVersionArnHasBeenSet() const { return m_resourceDefinitionVersionArnHasBeenSet; }
    template<typename ResourceDefinitionVersionArnT = Aws::String>
    void SetResourceDefinitionVersionArn(ResourceDefinitionVersionArnT&& value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn = std::forward<ResourceDefinitionVersionArnT>(value); }
    template<typename ResourceDefinitionVersionArnT = Aws::String>
    GroupVersion& WithResourceDefinitionVersionArn(ResourceDefinitionVersionArnT&& value) { SetResourceDefinitionVersionArn(std::forward<ResourceDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the subscription definition version for this group.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionArn() const { return m_subscriptionDefinitionVersionArn; }
    inline bool SubscriptionDefinitionVersionArnHasBeenSet() const { return m_subscriptionDefinitionVersionArnHasBeenSet; }
    template<typename SubscriptionDefinitionVersionArnT = Aws::String>
    void SetSubscriptionDefinitionVersionArn(SubscriptionDefinitionVersionArnT&& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = std::forward<SubscriptionDefinitionVersionArnT>(value); }
    template<typename SubscriptionDefinitionVersionArnT = Aws::String>
    GroupVersion& WithSubscriptionDefinitionVersionArn(SubscriptionDefinitionVersionArnT&& value) { SetSubscriptionDefinitionVersionArn(std::forward<SubscriptionDefinitionVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorDefinitionVersionArn;
    bool m_connectorDefinitionVersionArnHasBeenSet = false;

    Aws::String m_coreDefinitionVersionArn;
    bool m_coreDefinitionVersionArnHasBeenSet = false;

    Aws::String m_deviceDefinitionVersionArn;
    bool m_deviceDefinitionVersionArnHasBeenSet = false;

    Aws::String m_functionDefinitionVersionArn;
    bool m_functionDefinitionVersionArnHasBeenSet = false;

    Aws::String m_loggerDefinitionVersionArn;
    bool m_loggerDefinitionVersionArnHasBeenSet = false;

    Aws::String m_resourceDefinitionVersionArn;
    bool m_resourceDefinitionVersionArnHasBeenSet = false;

    Aws::String m_subscriptionDefinitionVersionArn;
    bool m_subscriptionDefinitionVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
