/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/Address.h>
#include <aws/identitystore/model/Email.h>
#include <aws/identitystore/model/ExternalId.h>
#include <aws/identitystore/model/Name.h>
#include <aws/identitystore/model/PhoneNumber.h>
#include <aws/identitystore/model/Photo.h>
#include <aws/identitystore/model/UserStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IdentityStore {
namespace Model {

/**
 * <p>A user object that contains the metadata and attributes for a specified
 * user.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/User">AWS
 * API Reference</a></p>
 */
class User {
 public:
  AWS_IDENTITYSTORE_API User() = default;
  AWS_IDENTITYSTORE_API User(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  User& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a user in the identity store.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  User& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique string used to identify the user. The length limit is 128
   * characters. This value can consist of letters, accented characters, symbols,
   * numbers, and punctuation. This value is specified at the time the user is
   * created and stored as an attribute of the user object in the identity store.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  User& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>ExternalId</code> objects that contains the identifiers
   * issued to this resource by an external identity provider.</p>
   */
  inline const Aws::Vector<ExternalId>& GetExternalIds() const { return m_externalIds; }
  inline bool ExternalIdsHasBeenSet() const { return m_externalIdsHasBeenSet; }
  template <typename ExternalIdsT = Aws::Vector<ExternalId>>
  void SetExternalIds(ExternalIdsT&& value) {
    m_externalIdsHasBeenSet = true;
    m_externalIds = std::forward<ExternalIdsT>(value);
  }
  template <typename ExternalIdsT = Aws::Vector<ExternalId>>
  User& WithExternalIds(ExternalIdsT&& value) {
    SetExternalIds(std::forward<ExternalIdsT>(value));
    return *this;
  }
  template <typename ExternalIdsT = ExternalId>
  User& AddExternalIds(ExternalIdsT&& value) {
    m_externalIdsHasBeenSet = true;
    m_externalIds.emplace_back(std::forward<ExternalIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object containing the name of the user.</p>
   */
  inline const Name& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Name>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Name>
  User& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the name of the user that is formatted for display when
   * the user is referenced. For example, "John Doe."</p> <p>Prefix search supports a
   * maximum of 1,000 characters for the string.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  User& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing an alternate name for the user.</p>
   */
  inline const Aws::String& GetNickName() const { return m_nickName; }
  inline bool NickNameHasBeenSet() const { return m_nickNameHasBeenSet; }
  template <typename NickNameT = Aws::String>
  void SetNickName(NickNameT&& value) {
    m_nickNameHasBeenSet = true;
    m_nickName = std::forward<NickNameT>(value);
  }
  template <typename NickNameT = Aws::String>
  User& WithNickName(NickNameT&& value) {
    SetNickName(std::forward<NickNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing a URL that might be associated with the user.</p>
   */
  inline const Aws::String& GetProfileUrl() const { return m_profileUrl; }
  inline bool ProfileUrlHasBeenSet() const { return m_profileUrlHasBeenSet; }
  template <typename ProfileUrlT = Aws::String>
  void SetProfileUrl(ProfileUrlT&& value) {
    m_profileUrlHasBeenSet = true;
    m_profileUrl = std::forward<ProfileUrlT>(value);
  }
  template <typename ProfileUrlT = Aws::String>
  User& WithProfileUrl(ProfileUrlT&& value) {
    SetProfileUrl(std::forward<ProfileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>Email</code> objects containing email addresses associated
   * with the user.</p>
   */
  inline const Aws::Vector<Email>& GetEmails() const { return m_emails; }
  inline bool EmailsHasBeenSet() const { return m_emailsHasBeenSet; }
  template <typename EmailsT = Aws::Vector<Email>>
  void SetEmails(EmailsT&& value) {
    m_emailsHasBeenSet = true;
    m_emails = std::forward<EmailsT>(value);
  }
  template <typename EmailsT = Aws::Vector<Email>>
  User& WithEmails(EmailsT&& value) {
    SetEmails(std::forward<EmailsT>(value));
    return *this;
  }
  template <typename EmailsT = Email>
  User& AddEmails(EmailsT&& value) {
    m_emailsHasBeenSet = true;
    m_emails.emplace_back(std::forward<EmailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>Address</code> objects containing addresses associated with
   * the user.</p>
   */
  inline const Aws::Vector<Address>& GetAddresses() const { return m_addresses; }
  inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
  template <typename AddressesT = Aws::Vector<Address>>
  void SetAddresses(AddressesT&& value) {
    m_addressesHasBeenSet = true;
    m_addresses = std::forward<AddressesT>(value);
  }
  template <typename AddressesT = Aws::Vector<Address>>
  User& WithAddresses(AddressesT&& value) {
    SetAddresses(std::forward<AddressesT>(value));
    return *this;
  }
  template <typename AddressesT = Address>
  User& AddAddresses(AddressesT&& value) {
    m_addressesHasBeenSet = true;
    m_addresses.emplace_back(std::forward<AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>PhoneNumber</code> objects containing phone numbers
   * associated with the user.</p>
   */
  inline const Aws::Vector<PhoneNumber>& GetPhoneNumbers() const { return m_phoneNumbers; }
  inline bool PhoneNumbersHasBeenSet() const { return m_phoneNumbersHasBeenSet; }
  template <typename PhoneNumbersT = Aws::Vector<PhoneNumber>>
  void SetPhoneNumbers(PhoneNumbersT&& value) {
    m_phoneNumbersHasBeenSet = true;
    m_phoneNumbers = std::forward<PhoneNumbersT>(value);
  }
  template <typename PhoneNumbersT = Aws::Vector<PhoneNumber>>
  User& WithPhoneNumbers(PhoneNumbersT&& value) {
    SetPhoneNumbers(std::forward<PhoneNumbersT>(value));
    return *this;
  }
  template <typename PhoneNumbersT = PhoneNumber>
  User& AddPhoneNumbers(PhoneNumbersT&& value) {
    m_phoneNumbersHasBeenSet = true;
    m_phoneNumbers.emplace_back(std::forward<PhoneNumbersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string indicating the type of user. Possible values are left unspecified.
   * The value can vary based on your specific use case.</p>
   */
  inline const Aws::String& GetUserType() const { return m_userType; }
  inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
  template <typename UserTypeT = Aws::String>
  void SetUserType(UserTypeT&& value) {
    m_userTypeHasBeenSet = true;
    m_userType = std::forward<UserTypeT>(value);
  }
  template <typename UserTypeT = Aws::String>
  User& WithUserType(UserTypeT&& value) {
    SetUserType(std::forward<UserTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the title of the user. Possible values are left
   * unspecified. The value can vary based on your specific use case.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  User& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the preferred language of the user. For example,
   * "American English" or "en-us."</p>
   */
  inline const Aws::String& GetPreferredLanguage() const { return m_preferredLanguage; }
  inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }
  template <typename PreferredLanguageT = Aws::String>
  void SetPreferredLanguage(PreferredLanguageT&& value) {
    m_preferredLanguageHasBeenSet = true;
    m_preferredLanguage = std::forward<PreferredLanguageT>(value);
  }
  template <typename PreferredLanguageT = Aws::String>
  User& WithPreferredLanguage(PreferredLanguageT&& value) {
    SetPreferredLanguage(std::forward<PreferredLanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the geographical region or location of the user.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  User& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the time zone of the user.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  User& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the user account.</p>
   */
  inline UserStatus GetUserStatus() const { return m_userStatus; }
  inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
  inline void SetUserStatus(UserStatus value) {
    m_userStatusHasBeenSet = true;
    m_userStatus = value;
  }
  inline User& WithUserStatus(UserStatus value) {
    SetUserStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of photos associated with the user. Users can have up to 3 photos with
   * metadata including type, display name, and primary designation.</p>
   */
  inline const Aws::Vector<Photo>& GetPhotos() const { return m_photos; }
  inline bool PhotosHasBeenSet() const { return m_photosHasBeenSet; }
  template <typename PhotosT = Aws::Vector<Photo>>
  void SetPhotos(PhotosT&& value) {
    m_photosHasBeenSet = true;
    m_photos = std::forward<PhotosT>(value);
  }
  template <typename PhotosT = Aws::Vector<Photo>>
  User& WithPhotos(PhotosT&& value) {
    SetPhotos(std::forward<PhotosT>(value));
    return *this;
  }
  template <typename PhotosT = Photo>
  User& AddPhotos(PhotosT&& value) {
    m_photosHasBeenSet = true;
    m_photos.emplace_back(std::forward<PhotosT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user's personal website or blog URL. This field stores website
   * information for personal or professional use.</p>
   */
  inline const Aws::String& GetWebsite() const { return m_website; }
  inline bool WebsiteHasBeenSet() const { return m_websiteHasBeenSet; }
  template <typename WebsiteT = Aws::String>
  void SetWebsite(WebsiteT&& value) {
    m_websiteHasBeenSet = true;
    m_website = std::forward<WebsiteT>(value);
  }
  template <typename WebsiteT = Aws::String>
  User& WithWebsite(WebsiteT&& value) {
    SetWebsite(std::forward<WebsiteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user's birthdate in YYYY-MM-DD format. This field stores personal
   * birthdate information for the user.</p>
   */
  inline const Aws::String& GetBirthdate() const { return m_birthdate; }
  inline bool BirthdateHasBeenSet() const { return m_birthdateHasBeenSet; }
  template <typename BirthdateT = Aws::String>
  void SetBirthdate(BirthdateT&& value) {
    m_birthdateHasBeenSet = true;
    m_birthdate = std::forward<BirthdateT>(value);
  }
  template <typename BirthdateT = Aws::String>
  User& WithBirthdate(BirthdateT&& value) {
    SetBirthdate(std::forward<BirthdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the user was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  User& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created the user.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  User& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the user was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  User& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last updated the user.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  User& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  Aws::String m_userId;

  Aws::String m_userName;

  Aws::Vector<ExternalId> m_externalIds;

  Name m_name;

  Aws::String m_displayName;

  Aws::String m_nickName;

  Aws::String m_profileUrl;

  Aws::Vector<Email> m_emails;

  Aws::Vector<Address> m_addresses;

  Aws::Vector<PhoneNumber> m_phoneNumbers;

  Aws::String m_userType;

  Aws::String m_title;

  Aws::String m_preferredLanguage;

  Aws::String m_locale;

  Aws::String m_timezone;

  UserStatus m_userStatus{UserStatus::NOT_SET};

  Aws::Vector<Photo> m_photos;

  Aws::String m_website;

  Aws::String m_birthdate;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_userNameHasBeenSet = false;
  bool m_externalIdsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_nickNameHasBeenSet = false;
  bool m_profileUrlHasBeenSet = false;
  bool m_emailsHasBeenSet = false;
  bool m_addressesHasBeenSet = false;
  bool m_phoneNumbersHasBeenSet = false;
  bool m_userTypeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_preferredLanguageHasBeenSet = false;
  bool m_localeHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_userStatusHasBeenSet = false;
  bool m_photosHasBeenSet = false;
  bool m_websiteHasBeenSet = false;
  bool m_birthdateHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
