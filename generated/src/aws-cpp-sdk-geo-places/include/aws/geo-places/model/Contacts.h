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
    AWS_GEOPLACES_API Contacts() = default;
    AWS_GEOPLACES_API Contacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Contacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of phone numbers for the results contact. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetPhones() const { return m_phones; }
    inline bool PhonesHasBeenSet() const { return m_phonesHasBeenSet; }
    template<typename PhonesT = Aws::Vector<ContactDetails>>
    void SetPhones(PhonesT&& value) { m_phonesHasBeenSet = true; m_phones = std::forward<PhonesT>(value); }
    template<typename PhonesT = Aws::Vector<ContactDetails>>
    Contacts& WithPhones(PhonesT&& value) { SetPhones(std::forward<PhonesT>(value)); return *this;}
    template<typename PhonesT = ContactDetails>
    Contacts& AddPhones(PhonesT&& value) { m_phonesHasBeenSet = true; m_phones.emplace_back(std::forward<PhonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of fax addresses for the result contact. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetFaxes() const { return m_faxes; }
    inline bool FaxesHasBeenSet() const { return m_faxesHasBeenSet; }
    template<typename FaxesT = Aws::Vector<ContactDetails>>
    void SetFaxes(FaxesT&& value) { m_faxesHasBeenSet = true; m_faxes = std::forward<FaxesT>(value); }
    template<typename FaxesT = Aws::Vector<ContactDetails>>
    Contacts& WithFaxes(FaxesT&& value) { SetFaxes(std::forward<FaxesT>(value)); return *this;}
    template<typename FaxesT = ContactDetails>
    Contacts& AddFaxes(FaxesT&& value) { m_faxesHasBeenSet = true; m_faxes.emplace_back(std::forward<FaxesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of website URLs that belong to the result. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetWebsites() const { return m_websites; }
    inline bool WebsitesHasBeenSet() const { return m_websitesHasBeenSet; }
    template<typename WebsitesT = Aws::Vector<ContactDetails>>
    void SetWebsites(WebsitesT&& value) { m_websitesHasBeenSet = true; m_websites = std::forward<WebsitesT>(value); }
    template<typename WebsitesT = Aws::Vector<ContactDetails>>
    Contacts& WithWebsites(WebsitesT&& value) { SetWebsites(std::forward<WebsitesT>(value)); return *this;}
    template<typename WebsitesT = ContactDetails>
    Contacts& AddWebsites(WebsitesT&& value) { m_websitesHasBeenSet = true; m_websites.emplace_back(std::forward<WebsitesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of emails for contacts of the result. </p>
     */
    inline const Aws::Vector<ContactDetails>& GetEmails() const { return m_emails; }
    inline bool EmailsHasBeenSet() const { return m_emailsHasBeenSet; }
    template<typename EmailsT = Aws::Vector<ContactDetails>>
    void SetEmails(EmailsT&& value) { m_emailsHasBeenSet = true; m_emails = std::forward<EmailsT>(value); }
    template<typename EmailsT = Aws::Vector<ContactDetails>>
    Contacts& WithEmails(EmailsT&& value) { SetEmails(std::forward<EmailsT>(value)); return *this;}
    template<typename EmailsT = ContactDetails>
    Contacts& AddEmails(EmailsT&& value) { m_emailsHasBeenSet = true; m_emails.emplace_back(std::forward<EmailsT>(value)); return *this; }
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
