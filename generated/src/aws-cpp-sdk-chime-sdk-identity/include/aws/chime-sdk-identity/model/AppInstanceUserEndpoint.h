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


    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}


    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const AppInstanceUserEndpointType& GetType() const{ return m_type; }

    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetType(const AppInstanceUserEndpointType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetType(AppInstanceUserEndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithType(const AppInstanceUserEndpointType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithType(AppInstanceUserEndpointType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline AppInstanceUserEndpoint& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline AppInstanceUserEndpoint& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource to which the endpoint belongs.</p>
     */
    inline AppInstanceUserEndpoint& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline const EndpointAttributes& GetEndpointAttributes() const{ return m_endpointAttributes; }

    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline bool EndpointAttributesHasBeenSet() const { return m_endpointAttributesHasBeenSet; }

    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline void SetEndpointAttributes(const EndpointAttributes& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = value; }

    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline void SetEndpointAttributes(EndpointAttributes&& value) { m_endpointAttributesHasBeenSet = true; m_endpointAttributes = std::move(value); }

    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithEndpointAttributes(const EndpointAttributes& value) { SetEndpointAttributes(value); return *this;}

    /**
     * <p>The attributes of an <code>Endpoint</code>.</p>
     */
    inline AppInstanceUserEndpoint& WithEndpointAttributes(EndpointAttributes&& value) { SetEndpointAttributes(std::move(value)); return *this;}


    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline AppInstanceUserEndpoint& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was created.</p>
     */
    inline AppInstanceUserEndpoint& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline AppInstanceUserEndpoint& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which an <code>AppInstanceUserEndpoint</code> was last
     * updated.</p>
     */
    inline AppInstanceUserEndpoint& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline const AllowMessages& GetAllowMessages() const{ return m_allowMessages; }

    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline bool AllowMessagesHasBeenSet() const { return m_allowMessagesHasBeenSet; }

    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline void SetAllowMessages(const AllowMessages& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = value; }

    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline void SetAllowMessages(AllowMessages&& value) { m_allowMessagesHasBeenSet = true; m_allowMessages = std::move(value); }

    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline AppInstanceUserEndpoint& WithAllowMessages(const AllowMessages& value) { SetAllowMessages(value); return *this;}

    /**
     * <p>Boolean that controls whether the <code>AppInstanceUserEndpoint</code> is
     * opted in to receive messages. <code>ALL</code> indicates the endpoint will
     * receive all messages. <code>NONE</code> indicates the endpoint will receive no
     * messages.</p>
     */
    inline AppInstanceUserEndpoint& WithAllowMessages(AllowMessages&& value) { SetAllowMessages(std::move(value)); return *this;}


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
    inline bool EndpointStateHasBeenSet() const { return m_endpointStateHasBeenSet; }

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
    inline void SetEndpointState(const EndpointState& value) { m_endpointStateHasBeenSet = true; m_endpointState = value; }

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
    inline void SetEndpointState(EndpointState&& value) { m_endpointStateHasBeenSet = true; m_endpointState = std::move(value); }

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
    inline AppInstanceUserEndpoint& WithEndpointState(const EndpointState& value) { SetEndpointState(value); return *this;}

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
    inline AppInstanceUserEndpoint& WithEndpointState(EndpointState&& value) { SetEndpointState(std::move(value)); return *this;}

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
