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
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint() = default;
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceUserEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const { return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    template<typename AppInstanceUserArnT = Aws::String>
    void SetAppInstanceUserArn(AppInstanceUserArnT&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::forward<AppInstanceUserArnT>(value); }
    template<typename AppInstanceUserArnT = Aws::String>
    AppInstanceUserEndpoint& WithAppInstanceUserArn(AppInstanceUserArnT&& value) { SetAppInstanceUserArn(std::forward<AppInstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    AppInstanceUserEndpoint& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
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
    AppInstanceUserEndpoint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AppInstanceUserEndpointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AppInstanceUserEndpoint& WithType(AppInstanceUserEndpointType value) { SetType(value); return *this;}
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
    AppInstanceUserEndpoint& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
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
    AppInstanceUserEndpoint& WithEndpointAttributes(EndpointAttributesT&& value) { SetEndpointAttributes(std::forward<EndpointAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    AppInstanceUserEndpoint& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    AppInstanceUserEndpoint& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline AllowMessages GetAllowMessages() const { return m_allowMessages; }
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }
    inline void SetAllowMessages(AllowMessages value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }
    inline AppInstanceUserEndpoint& WithAllowMessages(AllowMessages value) { SetAllowMessages(value); return *this;}
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
    inline const EndpointState& GetEndpointState() const { return m_endpointState; }
    inline bool EndpointStateHasBeenSet() const { return m_endpointStateHasBeenSet; }
    template<typename EndpointStateT = EndpointState>
    void SetEndpointState(EndpointStateT&& value) { m_endpointStateHasBeenSet = true; m_endpointState = std::forward<EndpointStateT>(value); }
    template<typename EndpointStateT = EndpointState>
    AppInstanceUserEndpoint& WithEndpointState(EndpointStateT&& value) { SetEndpointState(std::forward<EndpointStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AppInstanceUserEndpointType m_type{AppInstanceUserEndpointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    EndpointAttributes m_endpointAttributes;
    bool m_endpointAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    AllowMessages m_allowMessages{AllowMessages::NOT_SET};
    bool m_allowMessagesHasBeenSet = false;

    EndpointState m_endpointState;
    bool m_endpointStateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
