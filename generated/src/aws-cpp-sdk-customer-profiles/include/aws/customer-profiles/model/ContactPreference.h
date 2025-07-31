/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ContactType.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Object that defines users contact preference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ContactPreference">AWS
   * API Reference</a></p>
   */
  class ContactPreference
  {
  public:
    AWS_CUSTOMERPROFILES_API ContactPreference() = default;
    AWS_CUSTOMERPROFILES_API ContactPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ContactPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A searchable, unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    ContactPreference& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key value used to look up profile based off the keyName.</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    ContactPreference& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a customer profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    ContactPreference& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact type used for engagement. For example: HomePhoneNumber,
     * PersonalEmailAddress.</p>
     */
    inline ContactType GetContactType() const { return m_contactType; }
    inline bool ContactTypeHasBeenSet() const { return m_contactTypeHasBeenSet; }
    inline void SetContactType(ContactType value) { m_contactTypeHasBeenSet = true; m_contactType = value; }
    inline ContactPreference& WithContactType(ContactType value) { SetContactType(value); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    ContactType m_contactType{ContactType::NOT_SET};
    bool m_contactTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
