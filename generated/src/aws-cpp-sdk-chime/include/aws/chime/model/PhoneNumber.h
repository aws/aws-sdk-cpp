/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberType.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/chime/model/PhoneNumberStatus.h>
#include <aws/chime/model/PhoneNumberCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/CallingNameStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/PhoneNumberAssociation.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>A phone number used for Amazon Chime Business Calling or an Amazon Chime
   * Voice Connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PhoneNumber">AWS
   * API Reference</a></p>
   */
  class PhoneNumber
  {
  public:
    AWS_CHIME_API PhoneNumber() = default;
    AWS_CHIME_API PhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API PhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number ID.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    PhoneNumber& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetE164PhoneNumber() const { return m_e164PhoneNumber; }
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }
    template<typename E164PhoneNumberT = Aws::String>
    void SetE164PhoneNumber(E164PhoneNumberT&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::forward<E164PhoneNumberT>(value); }
    template<typename E164PhoneNumberT = Aws::String>
    PhoneNumber& WithE164PhoneNumber(E164PhoneNumberT&& value) { SetE164PhoneNumber(std::forward<E164PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number country. Format: ISO 3166-1 alpha-2.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    PhoneNumber& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number type.</p>
     */
    inline PhoneNumberType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PhoneNumberType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PhoneNumber& WithType(PhoneNumberType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number product type.</p>
     */
    inline PhoneNumberProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(PhoneNumberProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline PhoneNumber& WithProductType(PhoneNumberProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number status.</p>
     */
    inline PhoneNumberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PhoneNumberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PhoneNumber& WithStatus(PhoneNumberStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number capabilities.</p>
     */
    inline const PhoneNumberCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = PhoneNumberCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = PhoneNumberCapabilities>
    PhoneNumber& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number associations.</p>
     */
    inline const Aws::Vector<PhoneNumberAssociation>& GetAssociations() const { return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    template<typename AssociationsT = Aws::Vector<PhoneNumberAssociation>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<PhoneNumberAssociation>>
    PhoneNumber& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = PhoneNumberAssociation>
    PhoneNumber& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The outbound calling name associated with the phone number.</p>
     */
    inline const Aws::String& GetCallingName() const { return m_callingName; }
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }
    template<typename CallingNameT = Aws::String>
    void SetCallingName(CallingNameT&& value) { m_callingNameHasBeenSet = true; m_callingName = std::forward<CallingNameT>(value); }
    template<typename CallingNameT = Aws::String>
    PhoneNumber& WithCallingName(CallingNameT&& value) { SetCallingName(std::forward<CallingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound calling name status.</p>
     */
    inline CallingNameStatus GetCallingNameStatus() const { return m_callingNameStatus; }
    inline bool CallingNameStatusHasBeenSet() const { return m_callingNameStatusHasBeenSet; }
    inline void SetCallingNameStatus(CallingNameStatus value) { m_callingNameStatusHasBeenSet = true; m_callingNameStatus = value; }
    inline PhoneNumber& WithCallingNameStatus(CallingNameStatus value) { SetCallingNameStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    PhoneNumber& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    PhoneNumber& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTimestamp() const { return m_deletionTimestamp; }
    inline bool DeletionTimestampHasBeenSet() const { return m_deletionTimestampHasBeenSet; }
    template<typename DeletionTimestampT = Aws::Utils::DateTime>
    void SetDeletionTimestamp(DeletionTimestampT&& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = std::forward<DeletionTimestampT>(value); }
    template<typename DeletionTimestampT = Aws::Utils::DateTime>
    PhoneNumber& WithDeletionTimestamp(DeletionTimestampT&& value) { SetDeletionTimestamp(std::forward<DeletionTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    PhoneNumberType m_type{PhoneNumberType::NOT_SET};
    bool m_typeHasBeenSet = false;

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    PhoneNumberStatus m_status{PhoneNumberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PhoneNumberCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<PhoneNumberAssociation> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;

    CallingNameStatus m_callingNameStatus{CallingNameStatus::NOT_SET};
    bool m_callingNameStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTimestamp{};
    bool m_deletionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
