/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AllowedCapabilities.h>
#include <aws/connect/model/ParticipantDetails.h>
#include <aws/connect/model/Reference.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartWebRTCContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartWebRTCContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWebRTCContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, -,
     * and _ characters.</p>
     */
    inline StartWebRTCContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline StartWebRTCContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline StartWebRTCContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p> <p>The token is valid for 7 days
     * after creation. If a contact is already started, the contact ID is returned.</p>
     */
    inline StartWebRTCContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartWebRTCContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartWebRTCContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow for the call. To see the ContactFlowId in the
     * Amazon Connect admin website, on the navigation menu go to <b>Routing</b>,
     * <b>Contact Flows</b>. Choose the flow. On the flow page, under the name of the
     * flow, choose <b>Show additional flow information</b>. The ContactFlowId is the
     * last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartWebRTCContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartWebRTCContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartWebRTCContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StartWebRTCContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline const AllowedCapabilities& GetAllowedCapabilities() const{ return m_allowedCapabilities; }

    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline bool AllowedCapabilitiesHasBeenSet() const { return m_allowedCapabilitiesHasBeenSet; }

    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline void SetAllowedCapabilities(const AllowedCapabilities& value) { m_allowedCapabilitiesHasBeenSet = true; m_allowedCapabilities = value; }

    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline void SetAllowedCapabilities(AllowedCapabilities&& value) { m_allowedCapabilitiesHasBeenSet = true; m_allowedCapabilities = std::move(value); }

    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline StartWebRTCContactRequest& WithAllowedCapabilities(const AllowedCapabilities& value) { SetAllowedCapabilities(value); return *this;}

    /**
     * <p>Information about the video sharing capabilities of the participants
     * (customer, agent).</p>
     */
    inline StartWebRTCContactRequest& WithAllowedCapabilities(AllowedCapabilities&& value) { SetAllowedCapabilities(std::move(value)); return *this;}


    
    inline const ParticipantDetails& GetParticipantDetails() const{ return m_participantDetails; }

    
    inline bool ParticipantDetailsHasBeenSet() const { return m_participantDetailsHasBeenSet; }

    
    inline void SetParticipantDetails(const ParticipantDetails& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = value; }

    
    inline void SetParticipantDetails(ParticipantDetails&& value) { m_participantDetailsHasBeenSet = true; m_participantDetails = std::move(value); }

    
    inline StartWebRTCContactRequest& WithParticipantDetails(const ParticipantDetails& value) { SetParticipantDetails(value); return *this;}

    
    inline StartWebRTCContactRequest& WithParticipantDetails(ParticipantDetails&& value) { SetParticipantDetails(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline StartWebRTCContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline StartWebRTCContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for an Amazon Connect contact. This identifier is
     * related to the contact starting.</p>
     */
    inline StartWebRTCContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}


    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline StartWebRTCContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }


    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline StartWebRTCContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline StartWebRTCContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline StartWebRTCContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    AllowedCapabilities m_allowedCapabilities;
    bool m_allowedCapabilitiesHasBeenSet = false;

    ParticipantDetails m_participantDetails;
    bool m_participantDetailsHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
