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
  class AWS_GREENGRASS_API CreateGroupVersionRequest : public GreengrassRequest
  {
  public:
    CreateGroupVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroupVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * Core definition version arn for this group.
     */
    inline const Aws::String& GetCoreDefinitionVersionArn() const{ return m_coreDefinitionVersionArn; }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(const Aws::String& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = value; }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(Aws::String&& value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn = std::move(value); }

    /**
     * Core definition version arn for this group.
     */
    inline void SetCoreDefinitionVersionArn(const char* value) { m_coreDefinitionVersionArnHasBeenSet = true; m_coreDefinitionVersionArn.assign(value); }

    /**
     * Core definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithCoreDefinitionVersionArn(const Aws::String& value) { SetCoreDefinitionVersionArn(value); return *this;}

    /**
     * Core definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithCoreDefinitionVersionArn(Aws::String&& value) { SetCoreDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Core definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithCoreDefinitionVersionArn(const char* value) { SetCoreDefinitionVersionArn(value); return *this;}


    /**
     * Device definition version arn for this group.
     */
    inline const Aws::String& GetDeviceDefinitionVersionArn() const{ return m_deviceDefinitionVersionArn; }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const Aws::String& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = value; }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(Aws::String&& value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn = std::move(value); }

    /**
     * Device definition version arn for this group.
     */
    inline void SetDeviceDefinitionVersionArn(const char* value) { m_deviceDefinitionVersionArnHasBeenSet = true; m_deviceDefinitionVersionArn.assign(value); }

    /**
     * Device definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithDeviceDefinitionVersionArn(const Aws::String& value) { SetDeviceDefinitionVersionArn(value); return *this;}

    /**
     * Device definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithDeviceDefinitionVersionArn(Aws::String&& value) { SetDeviceDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Device definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithDeviceDefinitionVersionArn(const char* value) { SetDeviceDefinitionVersionArn(value); return *this;}


    /**
     * Function definition version arn for this group.
     */
    inline const Aws::String& GetFunctionDefinitionVersionArn() const{ return m_functionDefinitionVersionArn; }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const Aws::String& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = value; }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(Aws::String&& value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn = std::move(value); }

    /**
     * Function definition version arn for this group.
     */
    inline void SetFunctionDefinitionVersionArn(const char* value) { m_functionDefinitionVersionArnHasBeenSet = true; m_functionDefinitionVersionArn.assign(value); }

    /**
     * Function definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithFunctionDefinitionVersionArn(const Aws::String& value) { SetFunctionDefinitionVersionArn(value); return *this;}

    /**
     * Function definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithFunctionDefinitionVersionArn(Aws::String&& value) { SetFunctionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Function definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithFunctionDefinitionVersionArn(const char* value) { SetFunctionDefinitionVersionArn(value); return *this;}


    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateGroupVersionRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateGroupVersionRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateGroupVersionRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * Logger definitionv ersion arn for this group.
     */
    inline const Aws::String& GetLoggerDefinitionVersionArn() const{ return m_loggerDefinitionVersionArn; }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const Aws::String& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = value; }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(Aws::String&& value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn = std::move(value); }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline void SetLoggerDefinitionVersionArn(const char* value) { m_loggerDefinitionVersionArnHasBeenSet = true; m_loggerDefinitionVersionArn.assign(value); }

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline CreateGroupVersionRequest& WithLoggerDefinitionVersionArn(const Aws::String& value) { SetLoggerDefinitionVersionArn(value); return *this;}

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline CreateGroupVersionRequest& WithLoggerDefinitionVersionArn(Aws::String&& value) { SetLoggerDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Logger definitionv ersion arn for this group.
     */
    inline CreateGroupVersionRequest& WithLoggerDefinitionVersionArn(const char* value) { SetLoggerDefinitionVersionArn(value); return *this;}


    /**
     * Subscription definition version arn for this group.
     */
    inline const Aws::String& GetSubscriptionDefinitionVersionArn() const{ return m_subscriptionDefinitionVersionArn; }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const Aws::String& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = value; }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(Aws::String&& value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn = std::move(value); }

    /**
     * Subscription definition version arn for this group.
     */
    inline void SetSubscriptionDefinitionVersionArn(const char* value) { m_subscriptionDefinitionVersionArnHasBeenSet = true; m_subscriptionDefinitionVersionArn.assign(value); }

    /**
     * Subscription definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithSubscriptionDefinitionVersionArn(const Aws::String& value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

    /**
     * Subscription definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithSubscriptionDefinitionVersionArn(Aws::String&& value) { SetSubscriptionDefinitionVersionArn(std::move(value)); return *this;}

    /**
     * Subscription definition version arn for this group.
     */
    inline CreateGroupVersionRequest& WithSubscriptionDefinitionVersionArn(const char* value) { SetSubscriptionDefinitionVersionArn(value); return *this;}

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_coreDefinitionVersionArn;
    bool m_coreDefinitionVersionArnHasBeenSet;

    Aws::String m_deviceDefinitionVersionArn;
    bool m_deviceDefinitionVersionArnHasBeenSet;

    Aws::String m_functionDefinitionVersionArn;
    bool m_functionDefinitionVersionArnHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_loggerDefinitionVersionArn;
    bool m_loggerDefinitionVersionArnHasBeenSet;

    Aws::String m_subscriptionDefinitionVersionArn;
    bool m_subscriptionDefinitionVersionArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
