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
    AWS_CHIMESDKIDENTITY_API RegisterAppInstanceUserEndpointRequest() = default;

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
    inline const Aws::String& GetAppInstanceUserArn() const { return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    template<typename AppInstanceUserArnT = Aws::String>
    void SetAppInstanceUserArn(AppInstanceUserArnT&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::forward<AppInstanceUserArnT>(value); }
    template<typename AppInstanceUserArnT = Aws::String>
    RegisterAppInstanceUserEndpointRequest& WithAppInstanceUserArn(AppInstanceUserArnT&& value) { SetAppInstanceUserArn(std::forward<AppInstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegisterAppInstanceUserEndpointRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline AppInstanceUserEndpointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AppInstanceUserEndpointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RegisterAppInstanceUserEndpointRequest& WithType(AppInstanceUserEndpointType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    RegisterAppInstanceUserEndpointRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline const EndpointAttributes& GetEndpointAttributes() const { return m_endpointAttributes; }
    inline bool EndpointAttributesHasBeenSet() const { return m_endpointAttributesHasBeenSet; }
    template<typename EndpointAttributesT = EndpointAttributes>
    void SetEndpointAttributes(EndpointAttributesT&& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = std::forward<EndpointAttributesT>(value); }
    template<typename EndpointAttributesT = EndpointAttributes>
    RegisterAppInstanceUserEndpointRequest& WithEndpointAttributes(EndpointAttributesT&& value) { SetEndpointAttributes(std::forward<EndpointAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID assigned to the request. Use different tokens to register other
     * endpoints.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    RegisterAppInstanceUserEndpointRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that controls whether the AppInstanceUserEndpoint is opted in to
     * receive messages. <code>ALL</code> indicates the endpoint receives all messages.
     * <code>NONE</code> indicates the endpoint receives no messages.</p>
     */
    inline AllowMessages GetAllowMessages() const { return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(AllowMessages value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline RegisterAppInstanceUserEndpointRequest& WithAllowMessages(AllowMessages value) { SetAllowMessages(value); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type{AppInstanceUserEndpointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    EndpointAttributes m_endpointAttributes;
    bool m_endpointAttributesHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    AllowMessages m_allowMessages{AllowMessages::NOT_SET};
    bool m_allowMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
