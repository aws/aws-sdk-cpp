/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GREENGRASS_API GroupVersion
  {
  public:
    GroupVersion();
    GroupVersion(Aws::Utils::Json::JsonView jsonValue);
    GroupVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the connector definition version for this group.
     */
    inline const Aws::String& GetConnectorDefinitionVersionArn() const{ return m_connectorDefinitionVersionArn; }

    /**
     * The ARN of the connector definition version for this group.
     */
    inline bool ConnectorDefinitionVersionArnHasBeenSet() const { return m_connectorDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the connector definition version for this group.
     */
    inline void SetConnectorDefinitionVersionArn(const Aws::String& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = value; }

    /**
     * The ARN of the connector definition version for this group.
     */
    inline void SetConnectorDefinitionVersionArn(Aws::String&& value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the connector definition version for this group.
     */
    inline void SetConnectorDefinitionVersionArn(const char* value) { m_connectorDefinitionVersionArnHasBeenSet = true; m_connectorDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the connector definition version for this group.
     */
    inline GroupVersion& WithConnectorDefinitionVersionArn(const Aws::String& value) { SetConnectorDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the connector definition version for this group.
     */
    inline GroupVersion& WithConnectorDefinitionVersionArn(Aws::String&& value) { SetConnectorDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the connector definition version for this group.
     */
    inline GroupVersion& WithConnectorDefinitionVersionArn(const char* value) { SetConnectorDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the core definition version for this group.
     */
    inline const Aws::String& GetCoreDefinitionVersionArn() const{ return m_coreDefinitionVersionArn; }

    /**
     * The ARN of the core definition version for this group.
     */
    inline bool CoreDefinitionVersionArnHasBeenSet() const { return m_coreDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the core definition version for this group.
     */
    inline void SetCoreDefinitionVersionArn(const Aws::String& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = value; }

    /**
     * The ARN of the core definition version for this group.
     */
    inline void SetCoreDefinitionVersionArn(Aws::String&& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the core definition version for this group.
     */
    inline void SetCoreDefinitionVersionArn(const char* value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the core definition version for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(const Aws::String& value) { SetCoreDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the core definition version for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(Aws::String&& value) { SetCoreDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the core definition version for this group.
     */
    inline GroupVersion& WithCoreDefinitionVersionArn(const char* value) { SetCoreDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the device definition version for this group.
     */
    inline const Aws::String& GetDeviceDefinitionVersionArn() const{ return m_deviceDefinitionVersionArn; }

    /**
     * The ARN of the device definition version for this group.
     */
    inline bool DeviceDefinitionVersionArnHasBeenSet() const { return m_deviceDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the device definition version for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const Aws::String& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = value; }

    /**
     * The ARN of the device definition version for this group.
     */
    inline void SetDeviceDefinitionVersionArn(Aws::String&& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the device definition version for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const char* value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the device definition version for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(const Aws::String& value) { SetDeviceDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the device definition version for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(Aws::String&& value) { SetDeviceDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the device definition version for this group.
     */
    inline GroupVersion& WithDeviceDefinitionVersionArn(const char* value) { SetDeviceDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the function definition version for this group.
     */
    inline const Aws::String& GetFunctionDefinitionVersionArn() const{ return m_functionDefinitionVersionArn; }

    /**
     * The ARN of the function definition version for this group.
     */
    inline bool FunctionDefinitionVersionArnHasBeenSet() const { return m_functionDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the function definition version for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const Aws::String& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = value; }

    /**
     * The ARN of the function definition version for this group.
     */
    inline void SetFunctionDefinitionVersionArn(Aws::String&& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the function definition version for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const char* value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the function definition version for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(const Aws::String& value) { SetFunctionDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the function definition version for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(Aws::String&& value) { SetFunctionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the function definition version for this group.
     */
    inline GroupVersion& WithFunctionDefinitionVersionArn(const char* value) { SetFunctionDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the logger definition version for this group.
     */
    inline const Aws::String& GetLoggerDefinitionVersionArn() const{ return m_loggerDefinitionVersionArn; }

    /**
     * The ARN of the logger definition version for this group.
     */
    inline bool LoggerDefinitionVersionArnHasBeenSet() const { return m_loggerDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the logger definition version for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const Aws::String& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = value; }

    /**
     * The ARN of the logger definition version for this group.
     */
    inline void SetLoggerDefinitionVersionArn(Aws::String&& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the logger definition version for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const char* value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the logger definition version for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(const Aws::String& value) { SetLoggerDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the logger definition version for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(Aws::String&& value) { SetLoggerDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the logger definition version for this group.
     */
    inline GroupVersion& WithLoggerDefinitionVersionArn(const char* value) { SetLoggerDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the resource definition version for this group.
     */
    inline const Aws::String& GetResourceDefinitionVersionArn() const{ return m_resourceDefinitionVersionArn; }

    /**
     * The ARN of the resource definition version for this group.
     */
    inline bool ResourceDefinitionVersionArnHasBeenSet() const { return m_resourceDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the resource definition version for this group.
     */
    inline void SetResourceDefinitionVersionArn(const Aws::String& value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn = value; }

    /**
     * The ARN of the resource definition version for this group.
     */
    inline void SetResourceDefinitionVersionArn(Aws::String&& value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the resource definition version for this group.
     */
    inline void SetResourceDefinitionVersionArn(const char* value) { m_resourceDefinitionVersionArnHasBeenSet = true; m_resourceDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the resource definition version for this group.
     */
    inline GroupVersion& WithResourceDefinitionVersionArn(const Aws::String& value) { SetResourceDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the resource definition version for this group.
     */
    inline GroupVersion& WithResourceDefinitionVersionArn(Aws::String&& value) { SetResourceDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the resource definition version for this group.
     */
    inline GroupVersion& WithResourceDefinitionVersionArn(const char* value) { SetResourceDefinitionVersionArn(value); return *this;}


    /**
     * The ARN of the subscription definition version for this group.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionArn() const{ return m_subscriptionDefinitionVersionArn; }

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline bool SubscriptionDefinitionVersionArnHasBeenSet() const { return m_subscriptionDefinitionVersionArnHasBeenSet; }

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const Aws::String& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = value; }

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(Aws::String&& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = std::move(value); }

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const char* value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn.assign(value); }

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const Aws::String& value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(Aws::String&& value) { SetSubscriptionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the subscription definition version for this group.
     */
    inline GroupVersion& WithSubscriptionDefinitionVersionArn(const char* value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

  private:

    Aws::String m_connectorDefinitionVersionArn;
    bool m_connectorDefinitionVersionArnHasBeenSet;

    Aws::String m_coreDefinitionVersionArn;
    bool m_coreDefinitionVersionArnHasBeenSet;

    Aws::String m_deviceDefinitionVersionArn;
    bool m_deviceDefinitionVersionArnHasBeenSet;

    Aws::String m_functionDefinitionVersionArn;
    bool m_functionDefinitionVersionArnHasBeenSet;

    Aws::String m_loggerDefinitionVersionArn;
    bool m_loggerDefinitionVersionArnHasBeenSet;

    Aws::String m_resourceDefinitionVersionArn;
    bool m_resourceDefinitionVersionArnHasBeenSet;

    Aws::String m_subscriptionDefinitionVersionArn;
    bool m_subscriptionDefinitionVersionArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
