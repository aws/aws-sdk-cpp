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

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline UpdateContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline UpdateContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with your contact center.</p>
     */
    inline UpdateContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The name of the contact.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact.</p>
     */
    inline UpdateContactRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline UpdateContactRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact.</p>
     */
    inline UpdateContactRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the contact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the contact.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the contact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the contact.</p>
     */
    inline UpdateContactRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the contact.</p>
     */
    inline UpdateContactRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the contact.</p>
     */
    inline UpdateContactRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::Map<Aws::String, Reference>& GetReferences() const{ return m_references; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline void SetReferences(const Aws::Map<Aws::String, Reference>& value) { m_referencesHasBeenSet = true; m_references = value; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline void SetReferences(Aws::Map<Aws::String, Reference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& WithReferences(const Aws::Map<Aws::String, Reference>& value) { SetReferences(value); return *this;}

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& WithReferences(Aws::Map<Aws::String, Reference>&& value) { SetReferences(std::move(value)); return *this;}

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(const Aws::String& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(Aws::String&& key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), value); return *this; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(const Aws::String& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(Aws::String&& key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(const char* key, Reference&& value) { m_referencesHasBeenSet = true; m_references.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Well-formed data on contact, shown to agents on Contact Control Panel
     * (CCP).</p>
     */
    inline UpdateContactRequest& AddReferences(const char* key, const Reference& value) { m_referencesHasBeenSet = true; m_references.emplace(key, value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Reference> m_references;
    bool m_referencesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
