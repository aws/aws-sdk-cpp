/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/Reference.h>
#include <aws/connect/model/SegmentAttributeValue.h>
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
  class StartTaskContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartTaskContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTaskContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StartTaskContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StartTaskContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the previous chat, voice, or task contact. Any updates to
     * user-defined attributes to task contacts linked using the same
     * <code>PreviousContactID</code> will affect every contact in the chain. There can
     * be a maximum of 12 linked task contacts in a chain.</p>
     */
    inline const Aws::String& GetPreviousContactId() const{ return m_previousContactId; }
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }
    inline void SetPreviousContactId(const Aws::String& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = value; }
    inline void SetPreviousContactId(Aws::String&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::move(value); }
    inline void SetPreviousContactId(const char* value) { m_previousContactIdHasBeenSet = true; m_previousContactId.assign(value); }
    inline StartTaskContactRequest& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}
    inline StartTaskContactRequest& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow for initiating the tasks. To see the ContactFlowId
     * in the Amazon Connect admin website, on the navigation menu go to
     * <b>Routing</b>, <b>Flows</b>. Choose the flow. On the flow page, under the name
     * of the flow, choose <b>Show additional flow information</b>. The ContactFlowId
     * is the last part of the ARN, shown here in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }
    inline StartTaskContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline StartTaskContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in flows just like any other
     * contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across all
     * key-value pairs per contact. Attribute keys can include only alphanumeric, dash,
     * and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline StartTaskContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline StartTaskContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline StartTaskContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartTaskContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTaskContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline StartTaskContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartTaskContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartTaskContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel (CCP).
     * Tasks can have the following reference types at the time of creation:
     * <code>URL</code> | <code>NUMBER</code> | <code>STRING</code> | <code>DATE</code>
     * | <code>EMAIL</code>. <code>ATTACHMENT</code> is not a supported reference type
     * during task creation.</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline StartTaskContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}
    inline StartTaskContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}
    inline StartTaskContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    inline StartTaskContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }
    inline StartTaskContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTaskContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartTaskContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartTaskContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartTaskContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartTaskContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }
    inline StartTaskContactRequest& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}
    inline StartTaskContactRequest& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the task template. For more information about task
     * templates, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/task-templates.html">Create
     * task templates</a> in the <i>Amazon Connect Administrator Guide</i>. </p>
     */
    inline const Aws::String& GetTaskTemplateId() const{ return m_taskTemplateId; }
    inline bool TaskTemplateIdHasBeenSet() const { return m_taskTemplateIdHasBeenSet; }
    inline void SetTaskTemplateId(const Aws::String& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = value; }
    inline void SetTaskTemplateId(Aws::String&& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = std::move(value); }
    inline void SetTaskTemplateId(const char* value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId.assign(value); }
    inline StartTaskContactRequest& WithTaskTemplateId(const Aws::String& value) { SetTaskTemplateId(value); return *this;}
    inline StartTaskContactRequest& WithTaskTemplateId(Aws::String&& value) { SetTaskTemplateId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithTaskTemplateId(const char* value) { SetTaskTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the quick connect. Tasks that are created by using
     * <code>QuickConnectId</code> will use the flow that is defined on agent or queue
     * quick connect. For more information about quick connects, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/quick-connects.html">Create
     * quick connects</a>.</p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = value; }
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::move(value); }
    inline void SetQuickConnectId(const char* value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId.assign(value); }
    inline StartTaskContactRequest& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}
    inline StartTaskContactRequest& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId that is <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/tasks.html#linked-tasks">related</a>
     * to this contact. Linking tasks together by using <code>RelatedContactID</code>
     * copies over contact attributes from the related task contact to the new task
     * contact. All updates to user-defined attributes in the new task contact are
     * limited to the individual contact ID, unlike what happens when tasks are linked
     * by using <code>PreviousContactID</code>. There are no limits to the number of
     * contacts that can be linked by using <code>RelatedContactId</code>. </p>
     */
    inline const Aws::String& GetRelatedContactId() const{ return m_relatedContactId; }
    inline bool RelatedContactIdHasBeenSet() const { return m_relatedContactIdHasBeenSet; }
    inline void SetRelatedContactId(const Aws::String& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = value; }
    inline void SetRelatedContactId(Aws::String&& value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId = std::move(value); }
    inline void SetRelatedContactId(const char* value) { m_relatedContactIdHasBeenSet = true; m_relatedContactId.assign(value); }
    inline StartTaskContactRequest& WithRelatedContactId(const Aws::String& value) { SetRelatedContactId(value); return *this;}
    inline StartTaskContactRequest& WithRelatedContactId(Aws::String&& value) { SetRelatedContactId(std::move(value)); return *this;}
    inline StartTaskContactRequest& WithRelatedContactId(const char* value) { SetRelatedContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of system defined key-value pairs stored on individual contact segments
     * (unique contact ID) using an attribute map. The attributes are standard Amazon
     * Connect attributes. They can be accessed in flows.</p> <p>Attribute keys can
     * include only alphanumeric, -, and _.</p> <p>This field can be used to set
     * Contact Expiry as a duration in minutes and set a UserId for the User who
     * created a task.</p>  <p>To set contact expiry, a ValueMap must be
     * specified containing the integer number of minutes the contact will be active
     * for before expiring, with <code>SegmentAttributes</code> like { <code>
     * "connect:ContactExpiry": {"ValueMap" : { "ExpiryDuration": { "ValueInteger":
     * 135}}}}</code>. </p> <p>To set the created by user, a valid AgentResourceId must
     * be supplied, with <code>SegmentAttributes</code> like {
     * <code>"connect:CreatedByUser" { "ValueString":
     * "arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/agent/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx"}}}</code>.
     * </p> 
     */
    inline const Aws::Map<Aws::String, SegmentAttributeValue>& GetSegmentAttributes() const{ return m_segmentAttributes; }
    inline bool SegmentAttributesHasBeenSet() const { return m_segmentAttributesHasBeenSet; }
    inline void SetSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = value; }
    inline void SetSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes = std::move(value); }
    inline StartTaskContactRequest& WithSegmentAttributes(const Aws::Map<Aws::String, SegmentAttributeValue>& value) { SetSegmentAttributes(value); return *this;}
    inline StartTaskContactRequest& WithSegmentAttributes(Aws::Map<Aws::String, SegmentAttributeValue>&& value) { SetSegmentAttributes(std::move(value)); return *this;}
    inline StartTaskContactRequest& AddSegmentAttributes(const Aws::String& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    inline StartTaskContactRequest& AddSegmentAttributes(Aws::String&& key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), value); return *this; }
    inline StartTaskContactRequest& AddSegmentAttributes(const Aws::String& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddSegmentAttributes(Aws::String&& key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTaskContactRequest& AddSegmentAttributes(const char* key, SegmentAttributeValue&& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, std::move(value)); return *this; }
    inline StartTaskContactRequest& AddSegmentAttributes(const char* key, const SegmentAttributeValue& value) { m_segmentAttributesHasBeenSet = true; m_segmentAttributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::String m_taskTemplateId;
    bool m_taskTemplateIdHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;

    Aws::String m_relatedContactId;
    bool m_relatedContactIdHasBeenSet = false;

    Aws::Map<Aws::String, SegmentAttributeValue> m_segmentAttributes;
    bool m_segmentAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
