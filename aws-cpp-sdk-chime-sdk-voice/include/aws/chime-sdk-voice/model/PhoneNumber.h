/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberType.h>
#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
#include <aws/chime-sdk-voice/model/PhoneNumberStatus.h>
#include <aws/chime-sdk-voice/model/PhoneNumberCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/CallingNameStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-voice/model/PhoneNumberAssociation.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class PhoneNumber
  {
  public:
    AWS_CHIMESDKVOICE_API PhoneNumber();
    AWS_CHIMESDKVOICE_API PhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API PhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    
    inline PhoneNumber& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    
    inline PhoneNumber& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    
    inline PhoneNumber& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    
    inline const Aws::String& GetE164PhoneNumber() const{ return m_e164PhoneNumber; }

    
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }

    
    inline void SetE164PhoneNumber(const Aws::String& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = value; }

    
    inline void SetE164PhoneNumber(Aws::String&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::move(value); }

    
    inline void SetE164PhoneNumber(const char* value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber.assign(value); }

    
    inline PhoneNumber& WithE164PhoneNumber(const Aws::String& value) { SetE164PhoneNumber(value); return *this;}

    
    inline PhoneNumber& WithE164PhoneNumber(Aws::String&& value) { SetE164PhoneNumber(std::move(value)); return *this;}

    
    inline PhoneNumber& WithE164PhoneNumber(const char* value) { SetE164PhoneNumber(value); return *this;}


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline PhoneNumber& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline PhoneNumber& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline PhoneNumber& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const PhoneNumberType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const PhoneNumberType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(PhoneNumberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline PhoneNumber& WithType(const PhoneNumberType& value) { SetType(value); return *this;}

    
    inline PhoneNumber& WithType(PhoneNumberType&& value) { SetType(std::move(value)); return *this;}


    
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    
    inline PhoneNumber& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    
    inline PhoneNumber& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    
    inline const PhoneNumberStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const PhoneNumberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(PhoneNumberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline PhoneNumber& WithStatus(const PhoneNumberStatus& value) { SetStatus(value); return *this;}

    
    inline PhoneNumber& WithStatus(PhoneNumberStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const PhoneNumberCapabilities& GetCapabilities() const{ return m_capabilities; }

    
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    
    inline void SetCapabilities(const PhoneNumberCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    
    inline void SetCapabilities(PhoneNumberCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    
    inline PhoneNumber& WithCapabilities(const PhoneNumberCapabilities& value) { SetCapabilities(value); return *this;}

    
    inline PhoneNumber& WithCapabilities(PhoneNumberCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    
    inline const Aws::Vector<PhoneNumberAssociation>& GetAssociations() const{ return m_associations; }

    
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }

    
    inline void SetAssociations(const Aws::Vector<PhoneNumberAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    
    inline void SetAssociations(Aws::Vector<PhoneNumberAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    
    inline PhoneNumber& WithAssociations(const Aws::Vector<PhoneNumberAssociation>& value) { SetAssociations(value); return *this;}

    
    inline PhoneNumber& WithAssociations(Aws::Vector<PhoneNumberAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    
    inline PhoneNumber& AddAssociations(const PhoneNumberAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    
    inline PhoneNumber& AddAssociations(PhoneNumberAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    
    inline bool CallingNameHasBeenSet() const { return m_callingNameHasBeenSet; }

    
    inline void SetCallingName(const Aws::String& value) { m_callingNameHasBeenSet = true; m_callingName = value; }

    
    inline void SetCallingName(Aws::String&& value) { m_callingNameHasBeenSet = true; m_callingName = std::move(value); }

    
    inline void SetCallingName(const char* value) { m_callingNameHasBeenSet = true; m_callingName.assign(value); }

    
    inline PhoneNumber& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    
    inline PhoneNumber& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    
    inline PhoneNumber& WithCallingName(const char* value) { SetCallingName(value); return *this;}


    
    inline const CallingNameStatus& GetCallingNameStatus() const{ return m_callingNameStatus; }

    
    inline bool CallingNameStatusHasBeenSet() const { return m_callingNameStatusHasBeenSet; }

    
    inline void SetCallingNameStatus(const CallingNameStatus& value) { m_callingNameStatusHasBeenSet = true; m_callingNameStatus = value; }

    
    inline void SetCallingNameStatus(CallingNameStatus&& value) { m_callingNameStatusHasBeenSet = true; m_callingNameStatus = std::move(value); }

    
    inline PhoneNumber& WithCallingNameStatus(const CallingNameStatus& value) { SetCallingNameStatus(value); return *this;}

    
    inline PhoneNumber& WithCallingNameStatus(CallingNameStatus&& value) { SetCallingNameStatus(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    
    inline PhoneNumber& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    
    inline PhoneNumber& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    
    inline PhoneNumber& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    
    inline PhoneNumber& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetDeletionTimestamp() const{ return m_deletionTimestamp; }

    
    inline bool DeletionTimestampHasBeenSet() const { return m_deletionTimestampHasBeenSet; }

    
    inline void SetDeletionTimestamp(const Aws::Utils::DateTime& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = value; }

    
    inline void SetDeletionTimestamp(Aws::Utils::DateTime&& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = std::move(value); }

    
    inline PhoneNumber& WithDeletionTimestamp(const Aws::Utils::DateTime& value) { SetDeletionTimestamp(value); return *this;}

    
    inline PhoneNumber& WithDeletionTimestamp(Aws::Utils::DateTime&& value) { SetDeletionTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    
    inline PhoneNumber& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    
    inline PhoneNumber& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    
    inline PhoneNumber& WithOrderId(const char* value) { SetOrderId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    PhoneNumberType m_type;
    bool m_typeHasBeenSet = false;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    PhoneNumberStatus m_status;
    bool m_statusHasBeenSet = false;

    PhoneNumberCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<PhoneNumberAssociation> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_callingName;
    bool m_callingNameHasBeenSet = false;

    CallingNameStatus m_callingNameStatus;
    bool m_callingNameStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTimestamp;
    bool m_deletionTimestampHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
