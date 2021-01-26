/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_CONNECT_API StartTaskContactRequest : public ConnectRequest
  {
  public:
    StartTaskContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTaskContact"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartTaskContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartTaskContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline StartTaskContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline const Aws::String& GetPreviousContactId() const{ return m_previousContactId; }

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline bool PreviousContactIdHasBeenSet() const { return m_previousContactIdHasBeenSet; }

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline void SetPreviousContactId(const Aws::String& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = value; }

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline void SetPreviousContactId(Aws::String&& value) { m_previousContactIdHasBeenSet = true; m_previousContactId = std::move(value); }

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline void SetPreviousContactId(const char* value) { m_previousContactIdHasBeenSet = true; m_previousContactId.assign(value); }

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline StartTaskContactRequest& WithPreviousContactId(const Aws::String& value) { SetPreviousContactId(value); return *this;}

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline StartTaskContactRequest& WithPreviousContactId(Aws::String&& value) { SetPreviousContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the previous chat, voice, or task contact. </p>
     */
    inline StartTaskContactRequest& WithPreviousContactId(const char* value) { SetPreviousContactId(value); return *this;}


    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartTaskContactRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartTaskContactRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact flow for initiating the tasks. To see the
     * ContactFlowId in the Amazon Connect console user interface, on the navigation
     * menu go to <b>Routing</b>, <b>Contact Flows</b>. Choose the contact flow. On the
     * contact flow page, under the name of the contact flow, choose <b>Show additional
     * flow information</b>. The ContactFlowId is the last part of the ARN, shown here
     * in bold: </p>
     * <p>arn:aws:connect:us-west-2:xxxxxxxxxxxx:instance/xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx/contact-flow/<b>846ec553-a005-41c0-8341-xxxxxxxxxxxx</b>
     * </p>
     */
    inline StartTaskContactRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A custom key-value pair using an attribute map. The attributes are standard
     * Amazon Connect attributes, and can be accessed in contact flows just like any
     * other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes across
     * all key-value pairs per contact. Attribute keys can include only alphanumeric,
     * dash, and underscore characters.</p>
     */
    inline StartTaskContactRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a task that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A formatted URL that is shown to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline StartTaskContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }


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
    inline StartTaskContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline StartTaskContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task that is shown to an agent in the Contact Control
     * Panel (CCP).</p>
     */
    inline StartTaskContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartTaskContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartTaskContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline StartTaskContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_previousContactId;
    bool m_previousContactIdHasBeenSet;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
