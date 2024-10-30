/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/ContactDetails.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>A list of potential contact methods for the result/place.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Contacts">AWS
   * API Reference</a></p>
   */
  class Contacts
  {
  public:
    AWS_GEOPLACES_API Contacts();
    AWS_GEOPLACES_API Contacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Contacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of phone numbers for the results contact. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetPhones() const{ return m_phones; }
    inline bool PhonesHasBeenSet() const { return m_phonesHasBeenSet; }
    inline void SetPhones(const Aws::Vector<ContactDetails>& value) { m_phonesHasBeenSet = true; m_phones = value; }
    inline void SetPhones(Aws::Vector<ContactDetails>&& value) { m_phonesHasBeenSet = true; m_phones = std::move(value); }
    inline Contacts& WithPhones(const Aws::Vector<ContactDetails>& value) { SetPhones(value); return *this;}
    inline Contacts& WithPhones(Aws::Vector<ContactDetails>&& value) { SetPhones(std::move(value)); return *this;}
    inline Contacts& AddPhones(const ContactDetails& value) { m_phonesHasBeenSet = true; m_phones.push_back(value); return *this; }
    inline Contacts& AddPhones(ContactDetails&& value) { m_phonesHasBeenSet = true; m_phones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of fax addresses for the result contact. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetFaxes() const{ return m_faxes; }
    inline bool FaxesHasBeenSet() const { return m_faxesHasBeenSet; }
    inline void SetFaxes(const Aws::Vector<ContactDetails>& value) { m_faxesHasBeenSet = true; m_faxes = value; }
    inline void SetFaxes(Aws::Vector<ContactDetails>&& value) { m_faxesHasBeenSet = true; m_faxes = std::move(value); }
    inline Contacts& WithFaxes(const Aws::Vector<ContactDetails>& value) { SetFaxes(value); return *this;}
    inline Contacts& WithFaxes(Aws::Vector<ContactDetails>&& value) { SetFaxes(std::move(value)); return *this;}
    inline Contacts& AddFaxes(const ContactDetails& value) { m_faxesHasBeenSet = true; m_faxes.push_back(value); return *this; }
    inline Contacts& AddFaxes(ContactDetails&& value) { m_faxesHasBeenSet = true; m_faxes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of website URLs that belong to the result. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetWebsites() const{ return m_websites; }
    inline bool WebsitesHasBeenSet() const { return m_websitesHasBeenSet; }
    inline void SetWebsites(const Aws::Vector<ContactDetails>& value) { m_websitesHasBeenSet = true; m_websites = value; }
    inline void SetWebsites(Aws::Vector<ContactDetails>&& value) { m_websitesHasBeenSet = true; m_websites = std::move(value); }
    inline Contacts& WithWebsites(const Aws::Vector<ContactDetails>& value) { SetWebsites(value); return *this;}
    inline Contacts& WithWebsites(Aws::Vector<ContactDetails>&& value) { SetWebsites(std::move(value)); return *this;}
    inline Contacts& AddWebsites(const ContactDetails& value) { m_websitesHasBeenSet = true; m_websites.push_back(value); return *this; }
    inline Contacts& AddWebsites(ContactDetails&& value) { m_websitesHasBeenSet = true; m_websites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of emails for contacts of the result. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetEmails() const{ return m_emails; }
    inline bool EmailsHasBeenSet() const { return m_emailsHasBeenSet; }
    inline void SetEmails(const Aws::Vector<ContactDetails>& value) { m_emailsHasBeenSet = true; m_emails = value; }
    inline void SetEmails(Aws::Vector<ContactDetails>&& value) { m_emailsHasBeenSet = true; m_emails = std::move(value); }
    inline Contacts& WithEmails(const Aws::Vector<ContactDetails>& value) { SetEmails(value); return *this;}
    inline Contacts& WithEmails(Aws::Vector<ContactDetails>&& value) { SetEmails(std::move(value)); return *this;}
    inline Contacts& AddEmails(const ContactDetails& value) { m_emailsHasBeenSet = true; m_emails.push_back(value); return *this; }
    inline Contacts& AddEmails(ContactDetails&& value) { m_emailsHasBeenSet = true; m_emails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ContactDetails> m_phones;
    bool m_phonesHasBeenSet = false;

    Aws::Vector<ContactDetails> m_faxes;
    bool m_faxesHasBeenSet = false;

    Aws::Vector<ContactDetails> m_websites;
    bool m_websitesHasBeenSet = false;

    Aws::Vector<ContactDetails> m_emails;
    bool m_emailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
