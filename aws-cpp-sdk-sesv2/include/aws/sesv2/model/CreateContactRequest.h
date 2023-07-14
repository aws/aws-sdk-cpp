﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/TopicPreference.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class AWS_SESV2_API CreateContactRequest : public SESV2Request
  {
  public:
    CreateContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContact"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline CreateContactRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline CreateContactRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact list to which the contact should be added.</p>
     */
    inline CreateContactRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}


    /**
     * <p>The contact's email address.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The contact's email address.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The contact's email address.</p>
     */
    inline CreateContactRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline CreateContactRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The contact's email address.</p>
     */
    inline CreateContactRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline const Aws::Vector<TopicPreference>& GetTopicPreferences() const{ return m_topicPreferences; }

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline bool TopicPreferencesHasBeenSet() const { return m_topicPreferencesHasBeenSet; }

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline void SetTopicPreferences(const Aws::Vector<TopicPreference>& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = value; }

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline void SetTopicPreferences(Aws::Vector<TopicPreference>&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences = std::move(value); }

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline CreateContactRequest& WithTopicPreferences(const Aws::Vector<TopicPreference>& value) { SetTopicPreferences(value); return *this;}

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline CreateContactRequest& WithTopicPreferences(Aws::Vector<TopicPreference>&& value) { SetTopicPreferences(std::move(value)); return *this;}

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline CreateContactRequest& AddTopicPreferences(const TopicPreference& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(value); return *this; }

    /**
     * <p>The contact's preferences for being opted-in to or opted-out of topics.</p>
     */
    inline CreateContactRequest& AddTopicPreferences(TopicPreference&& value) { m_topicPreferencesHasBeenSet = true; m_topicPreferences.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool GetUnsubscribeAll() const{ return m_unsubscribeAll; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline bool UnsubscribeAllHasBeenSet() const { return m_unsubscribeAllHasBeenSet; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline void SetUnsubscribeAll(bool value) { m_unsubscribeAllHasBeenSet = true; m_unsubscribeAll = value; }

    /**
     * <p>A boolean value status noting if the contact is unsubscribed from all contact
     * list topics.</p>
     */
    inline CreateContactRequest& WithUnsubscribeAll(bool value) { SetUnsubscribeAll(value); return *this;}


    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline const Aws::String& GetAttributesData() const{ return m_attributesData; }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline bool AttributesDataHasBeenSet() const { return m_attributesDataHasBeenSet; }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(const Aws::String& value) { m_attributesDataHasBeenSet = true; m_attributesData = value; }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(Aws::String&& value) { m_attributesDataHasBeenSet = true; m_attributesData = std::move(value); }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline void SetAttributesData(const char* value) { m_attributesDataHasBeenSet = true; m_attributesData.assign(value); }

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline CreateContactRequest& WithAttributesData(const Aws::String& value) { SetAttributesData(value); return *this;}

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline CreateContactRequest& WithAttributesData(Aws::String&& value) { SetAttributesData(std::move(value)); return *this;}

    /**
     * <p>The attribute data attached to a contact.</p>
     */
    inline CreateContactRequest& WithAttributesData(const char* value) { SetAttributesData(value); return *this;}

  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet;

    Aws::Vector<TopicPreference> m_topicPreferences;
    bool m_topicPreferencesHasBeenSet;

    bool m_unsubscribeAll;
    bool m_unsubscribeAllHasBeenSet;

    Aws::String m_attributesData;
    bool m_attributesDataHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
