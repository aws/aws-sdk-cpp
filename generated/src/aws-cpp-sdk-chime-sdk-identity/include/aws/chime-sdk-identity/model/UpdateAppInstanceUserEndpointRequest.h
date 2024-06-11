/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class UpdateAppInstanceUserEndpointRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceUserEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppInstanceUserEndpoint"; }

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
    inline UpdateAppInstanceUserEndpointRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline UpdateAppInstanceUserEndpointRequest& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
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
    inline UpdateAppInstanceUserEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline const AllowMessages& GetAllowMessages() const{ return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(const AllowMessages& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline void SetAllowMessages(AllowMessages&& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = std::move(value); }
    inline UpdateAppInstanceUserEndpointRequest& WithAllowMessages(const AllowMessages& value) { SetAllowMessages(value); return *this;}
    inline UpdateAppInstanceUserEndpointRequest& WithAllowMessages(AllowMessages&& value) { SetAllowMessages(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AllowMessages m_allowMessages;
    bool m_allowMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
