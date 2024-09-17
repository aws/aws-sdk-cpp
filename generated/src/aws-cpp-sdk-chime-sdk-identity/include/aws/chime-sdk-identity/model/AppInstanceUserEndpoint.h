/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/AppInstanceUserEndpointType.h>
#include <aws/chime-sdk-identity/model/EndpointAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-identity/model/AllowMessages.h>
#include <aws/chime-sdk-identity/model/EndpointState.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>An endpoint under an Amazon Chime <code>AppInstanceUser</code> that receives
   * messages for a user. For push notifications, the endpoint is a mobile device
   * used to receive mobile push notifications for a user.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceUserEndpoint">AWS
   * API Reference</a></p>
   */
  class AppInstanceUserEndpoint
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint();
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
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
    inline AppInstanceUserEndpoint& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline AppInstanceUserEndpoint& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline AppInstanceUserEndpoint& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
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
    inline AppInstanceUserEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppInstanceUserEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppInstanceUserEndpoint& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const AppInstanceUserEndpointType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AppInstanceUserEndpointType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AppInstanceUserEndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AppInstanceUserEndpoint& WithType(const AppInstanceUserEndpointType& value) { SetType(value); return *this;}
    inline AppInstanceUserEndpoint& WithType(AppInstanceUserEndpointType&& value) { SetType(std::move(value)); return *this;}
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
    inline AppInstanceUserEndpoint& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline AppInstanceUserEndpoint& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline AppInstanceUserEndpoint& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline const EndpointAttributes& GetEndpointAttributes() const{ return m_endpointAttributes; }
    inline bool EndpointAttributesHasBeenSet() const { return m_endpointAttributesHasBeenSet; }
    inline void SetEndpointAttributes(const EndpointAttributes& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = value; }
    inline void SetEndpointAttributes(EndpointAttributes&& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = std::move(value); }
    inline AppInstanceUserEndpoint& WithEndpointAttributes(const EndpointAttributes& value) { SetEndpointAttributes(value); return *this;}
    inline AppInstanceUserEndpoint& WithEndpointAttributes(EndpointAttributes&& value) { SetEndpointAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AppInstanceUserEndpoint& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AppInstanceUserEndpoint& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline AppInstanceUserEndpoint& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline AppInstanceUserEndpoint& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
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
    inline AppInstanceUserEndpoint& WithAllowMessages(const AllowMessages& value) { SetAllowMessages(value); return *this;}
    inline AppInstanceUserEndpoint& WithAllowMessages(AllowMessages&& value) { SetAllowMessages(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A read-only field that represents the state of an
     * <code>AppInstanceUserEndpoint</code>. Supported values:</p> <ul> <li> <p>
     * <code>ACTIVE</code>: The <code>AppInstanceUserEndpoint</code> is active and able
     * to receive messages. When <code>ACTIVE</code>, the
     * <code>EndpointStatusReason</code> remains empty.</p> </li> <li> <p>
     * <code>INACTIVE</code>: The <code>AppInstanceUserEndpoint</code> is inactive and
     * can't receive message. When <code>INACTIVE</code>, the corresponding reason will
     * be conveyed through <code>EndpointStatusReason</code>.</p> </li> <li> <p>
     * <code>INVALID_DEVICE_TOKEN</code> indicates that an
     * <code>AppInstanceUserEndpoint</code> is <code>INACTIVE</code> due to invalid
     * device token</p> </li> <li> <p> <code>INVALID_PINPOINT_ARN</code> indicates that
     * an <code>AppInstanceUserEndpoint</code> is <code>INACTIVE</code> due to an
     * invalid pinpoint ARN that was input through the <code>ResourceArn</code>
     * field.</p> </li> </ul>
     */
    inline const EndpointState& GetEndpointState() const{ return m_endpointState; }
    inline bool EndpointStateHasBeenSet() const { return m_endpointStateHasBeenSet; }
    inline void SetEndpointState(const EndpointState& value) { m_endpointStateHasBeenSet = true; m_endpointState = value; }
    inline void SetEndpointState(EndpointState&& value) { m_endpointStateHasBeenSet = true; m_endpointState = std::move(value); }
    inline AppInstanceUserEndpoint& WithEndpointState(const EndpointState& value) { SetEndpointState(value); return *this;}
    inline AppInstanceUserEndpoint& WithEndpointState(EndpointState&& value) { SetEndpointState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    EndpointAttributes m_endpointAttributes;
    bool m_endpointAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    AllowMessages m_allowMessages;
    bool m_allowMessagesHasBeenSet = false;

    EndpointState m_endpointState;
    bool m_endpointStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
