/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointType.h>
#include <aws/chime-sdk-identity/model/EndpointAttributes.h>
#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class RegisterAppInstanceUserEndpointRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API RegisterAppInstanceUserEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAppInstanceUserEndpoint"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>. Supported types:</p>
     * <ul> <li> <p> <code>APNS</code>: The mobile notification service for an Apple
     * device.</p> </li> <li> <p> <code>APNS_SANDBOX</code>: The sandbox environment of
     * the mobile notification service for an Apple device.</p> </li> <li> <p>
     * <code>GCM</code>: The mobile notification service for an Android device.</p>
     * </li> </ul> <p>Populate the <code>ResourceArn</code> value of each type as
     * <code>PinpointAppArn</code>.</p>
     */
    inline const AppInstanceUserEndpointType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AppInstanceUserEndpointType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AppInstanceUserEndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithType(const AppInstanceUserEndpointType& value) { SetType(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithType(AppInstanceUserEndpointType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline const EndpointAttributes& GetEndpointAttributes() const{ return m_endpointAttributes; }
    inline bool EndpointAttributesHasBeenSet() const { return m_endpointAttributesHasBeenSet; }
    inline void SetEndpointAttributes(const EndpointAttributes& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = value; }
    inline void SetEndpointAttributes(EndpointAttributes&& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = std::move(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithEndpointAttributes(const EndpointAttributes& value) { SetEndpointAttributes(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithEndpointAttributes(EndpointAttributes&& value) { SetEndpointAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID assigned to the request. Use different tokens to register other
     * endpoints.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that controls whether the AppInstanceUserEndpoint is opted in to
     * receive messages. <code>ALL</code> indicates the endpoint receives all messages.
     * <code>NONE</code> indicates the endpoint receives no messages.</p>
     */
    inline const AllowMessages& GetAllowMessages() const{ return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(const AllowMessages& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline void SetAllowMessages(AllowMessages&& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = std::move(value); }
    inline RegisterAppInstanceUserEndpointRequest& WithAllowMessages(const AllowMessages& value) { SetAllowMessages(value); return *this;}
    inline RegisterAppInstanceUserEndpointRequest& WithAllowMessages(AllowMessages&& value) { SetAllowMessages(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    EndpointAttributes m_endpointAttributes;
    bool m_endpointAttributesHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    AllowMessages m_allowMessages;
    bool m_allowMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
