/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class CreateGroupVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateGroupVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroupVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateGroupVersionRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the connector definition version for this group.
     */
    inline const Aws::String& GetConnectorDefinitionVersionArn() const { return m_connectorDefinitionVersionArn; }
    inline bool ConnectorDefinitionVersionArnHasBeenSet() const { return m_connectorDefinitionVersionArnHasBeenSet; }
    template<typename ConnectorDefinitionVersionArnT = Aws::String>
    void SetConnectorDefinitionVersionArn(ConnectorDefinitionVersionArnT&& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = std::forward<ConnectorDefinitionVersionArnT>(value); }
    template<typename ConnectorDefinitionVersionArnT = Aws::String>
    CreateGroupVersionRequest& WithConnectorDefinitionVersionArn(ConnectorDefinitionVersionArnT&& value) { SetConnectorDefinitionVersionArn(std::forward<ConnectorDefinitionVersionArnT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithCoreDefinitionVersionArn(CoreDefinitionVersionArnT&& value) { SetCoreDefinitionVersionArn(std::forward<CoreDefinitionVersionArnT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithDeviceDefinitionVersionArn(DeviceDefinitionVersionArnT&& value) { SetDeviceDefinitionVersionArn(std::forward<DeviceDefinitionVersionArnT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithFunctionDefinitionVersionArn(FunctionDefinitionVersionArnT&& value) { SetFunctionDefinitionVersionArn(std::forward<FunctionDefinitionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    CreateGroupVersionRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithLoggerDefinitionVersionArn(LoggerDefinitionVersionArnT&& value) { SetLoggerDefinitionVersionArn(std::forward<LoggerDefinitionVersionArnT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithResourceDefinitionVersionArn(ResourceDefinitionVersionArnT&& value) { SetResourceDefinitionVersionArn(std::forward<ResourceDefinitionVersionArnT>(value)); return *this;}
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
    CreateGroupVersionRequest& WithSubscriptionDefinitionVersionArn(SubscriptionDefinitionVersionArnT&& value) { SetSubscriptionDefinitionVersionArn(std::forward<SubscriptionDefinitionVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_connectorDefinitionVersionArn;
    bool m_connectorDefinitionVersionArnHasBeenSet = false;

    Aws::String m_coreDefinitionVersionArn;
    bool m_coreDefinitionVersionArnHasBeenSet = false;

    Aws::String m_deviceDefinitionVersionArn;
    bool m_deviceDefinitionVersionArnHasBeenSet = false;

    Aws::String m_functionDefinitionVersionArn;
    bool m_functionDefinitionVersionArnHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

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
