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
    AWS_GREENGRASS_API GroupVersion();
    AWS_GREENGRASS_API GroupVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the connector definition version for this group.
     */
    inline const Aws::String& GetConnectorDefinitionVersionArn() const{ return m_connectorDefinitionVersionArn; }
    inline bool ConnectorDefinitionVersionArnHasBeenSet() const { return m_connectorDefinitionVersionArnHasBeenSet; }
    inline void SetConnectorDefinitionVersionArn(const Aws::String& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = value; }
    inline void SetConnectorDefinitionVersionArn(Aws::String&& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = std::move(value); }
    inline void SetConnectorDefinitionVersionArn(const char* value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithConnectorDefinitionVersionArn(const Aws::String& value) { SetConnectorDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithConnectorDefinitionVersionArn(Aws::String&& value) { SetConnectorDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithConnectorDefinitionVersionArn(const char* value) { SetConnectorDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the core definition version for this group.
     */
    inline const Aws::String& GetCoreDefinitionVersionArn() const{ return m_coreDefinitionVersionArn; }
    inline bool CoreDefinitionVersionArnHasBeenSet() const { return m_coreDefinitionVersionArnHasBeenSet; }
    inline void SetCoreDefinitionVersionArn(const Aws::String& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = value; }
    inline void SetCoreDefinitionVersionArn(Aws::String&& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = std::move(value); }
    inline void SetCoreDefinitionVersionArn(const char* value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithCoreDefinitionVersionArn(const Aws::String& value) { SetCoreDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithCoreDefinitionVersionArn(Aws::String&& value) { SetCoreDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithCoreDefinitionVersionArn(const char* value) { SetCoreDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the device definition version for this group.
     */
    inline const Aws::String& GetDeviceDefinitionVersionArn() const{ return m_deviceDefinitionVersionArn; }
    inline bool DeviceDefinitionVersionArnHasBeenSet() const { return m_deviceDefinitionVersionArnHasBeenSet; }
    inline void SetDeviceDefinitionVersionArn(const Aws::String& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = value; }
    inline void SetDeviceDefinitionVersionArn(Aws::String&& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = std::move(value); }
    inline void SetDeviceDefinitionVersionArn(const char* value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithDeviceDefinitionVersionArn(const Aws::String& value) { SetDeviceDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithDeviceDefinitionVersionArn(Aws::String&& value) { SetDeviceDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithDeviceDefinitionVersionArn(const char* value) { SetDeviceDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the function definition version for this group.
     */
    inline const Aws::String& GetFunctionDefinitionVersionArn() const{ return m_functionDefinitionVersionArn; }
    inline bool FunctionDefinitionVersionArnHasBeenSet() const { return m_functionDefinitionVersionArnHasBeenSet; }
    inline void SetFunctionDefinitionVersionArn(const Aws::String& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = value; }
    inline void SetFunctionDefinitionVersionArn(Aws::String&& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = std::move(value); }
    inline void SetFunctionDefinitionVersionArn(const char* value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithFunctionDefinitionVersionArn(const Aws::String& value) { SetFunctionDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithFunctionDefinitionVersionArn(Aws::String&& value) { SetFunctionDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithFunctionDefinitionVersionArn(const char* value) { SetFunctionDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the logger definition version for this group.
     */
    inline const Aws::String& GetLoggerDefinitionVersionArn() const{ return m_loggerDefinitionVersionArn; }
    inline bool LoggerDefinitionVersionArnHasBeenSet() const { return m_loggerDefinitionVersionArnHasBeenSet; }
    inline void SetLoggerDefinitionVersionArn(const Aws::String& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = value; }
    inline void SetLoggerDefinitionVersionArn(Aws::String&& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = std::move(value); }
    inline void SetLoggerDefinitionVersionArn(const char* value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithLoggerDefinitionVersionArn(const Aws::String& value) { SetLoggerDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithLoggerDefinitionVersionArn(Aws::String&& value) { SetLoggerDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithLoggerDefinitionVersionArn(const char* value) { SetLoggerDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the resource definition version for this group.
     */
    inline const Aws::String& GetResourceDefinitionVersionArn() const{ return m_resourceDefinitionVersionArn; }
    inline bool ResourceDefinitionVersionArnHasBeenSet() const { return m_resourceDefinitionVersionArnHasBeenSet; }
    inline void SetResourceDefinitionVersionArn(const Aws::String& value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn = value; }
    inline void SetResourceDefinitionVersionArn(Aws::String&& value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn = std::move(value); }
    inline void SetResourceDefinitionVersionArn(const char* value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithResourceDefinitionVersionArn(const Aws::String& value) { SetResourceDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithResourceDefinitionVersionArn(Aws::String&& value) { SetResourceDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithResourceDefinitionVersionArn(const char* value) { SetResourceDefinitionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the subscription definition version for this group.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionArn() const{ return m_subscriptionDefinitionVersionArn; }
    inline bool SubscriptionDefinitionVersionArnHasBeenSet() const { return m_subscriptionDefinitionVersionArnHasBeenSet; }
    inline void SetSubscriptionDefinitionVersionArn(const Aws::String& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = value; }
    inline void SetSubscriptionDefinitionVersionArn(Aws::String&& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = std::move(value); }
    inline void SetSubscriptionDefinitionVersionArn(const char* value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn.assign(value); }
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const Aws::String& value) { SetSubscriptionDefinitionVersionArn(value); return *this;}
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(Aws::String&& value) { SetSubscriptionDefinitionVersionArn(std::move(value)); return *this;}
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const char* value) { SetSubscriptionDefinitionVersionArn(value); return *this;}
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
