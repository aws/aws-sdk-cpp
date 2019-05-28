/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/PhoneNumberType.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/chime/model/PhoneNumberStatus.h>
#include <aws/chime/model/PhoneNumberCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CHIME_API PhoneNumber
  {
  public:
    PhoneNumber();
    PhoneNumber(Aws::Utils::Json::JsonView jsonValue);
    PhoneNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone number ID.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The phone number ID.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>The phone number ID.</p>
     */
    inline PhoneNumber& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline PhoneNumber& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The phone number ID.</p>
     */
    inline PhoneNumber& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline const Aws::String& GetE164PhoneNumber() const{ return m_e164PhoneNumber; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline bool E164PhoneNumberHasBeenSet() const { return m_e164PhoneNumberHasBeenSet; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(const Aws::String& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = value; }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(Aws::String&& value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber = std::move(value); }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline void SetE164PhoneNumber(const char* value) { m_e164PhoneNumberHasBeenSet = true; m_e164PhoneNumber.assign(value); }

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline PhoneNumber& WithE164PhoneNumber(const Aws::String& value) { SetE164PhoneNumber(value); return *this;}

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline PhoneNumber& WithE164PhoneNumber(Aws::String&& value) { SetE164PhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number, in E.164 format.</p>
     */
    inline PhoneNumber& WithE164PhoneNumber(const char* value) { SetE164PhoneNumber(value); return *this;}


    /**
     * <p>The phone number type.</p>
     */
    inline const PhoneNumberType& GetType() const{ return m_type; }

    /**
     * <p>The phone number type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The phone number type.</p>
     */
    inline void SetType(const PhoneNumberType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The phone number type.</p>
     */
    inline void SetType(PhoneNumberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The phone number type.</p>
     */
    inline PhoneNumber& WithType(const PhoneNumberType& value) { SetType(value); return *this;}

    /**
     * <p>The phone number type.</p>
     */
    inline PhoneNumber& WithType(PhoneNumberType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The phone number product type.</p>
     */
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The phone number product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The phone number product type.</p>
     */
    inline PhoneNumber& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The phone number product type.</p>
     */
    inline PhoneNumber& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>The phone number status.</p>
     */
    inline const PhoneNumberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The phone number status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(const PhoneNumberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(PhoneNumberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The phone number status.</p>
     */
    inline PhoneNumber& WithStatus(const PhoneNumberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The phone number status.</p>
     */
    inline PhoneNumber& WithStatus(PhoneNumberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The phone number capabilities.</p>
     */
    inline const PhoneNumberCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The phone number capabilities.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The phone number capabilities.</p>
     */
    inline void SetCapabilities(const PhoneNumberCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The phone number capabilities.</p>
     */
    inline void SetCapabilities(PhoneNumberCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The phone number capabilities.</p>
     */
    inline PhoneNumber& WithCapabilities(const PhoneNumberCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The phone number capabilities.</p>
     */
    inline PhoneNumber& WithCapabilities(PhoneNumberCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>The phone number associations.</p>
     */
    inline const Aws::Vector<PhoneNumberAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The phone number associations.</p>
     */
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }

    /**
     * <p>The phone number associations.</p>
     */
    inline void SetAssociations(const Aws::Vector<PhoneNumberAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    /**
     * <p>The phone number associations.</p>
     */
    inline void SetAssociations(Aws::Vector<PhoneNumberAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    /**
     * <p>The phone number associations.</p>
     */
    inline PhoneNumber& WithAssociations(const Aws::Vector<PhoneNumberAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The phone number associations.</p>
     */
    inline PhoneNumber& WithAssociations(Aws::Vector<PhoneNumberAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The phone number associations.</p>
     */
    inline PhoneNumber& AddAssociations(const PhoneNumberAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    /**
     * <p>The phone number associations.</p>
     */
    inline PhoneNumber& AddAssociations(PhoneNumberAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The phone number creation timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The updated phone number timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTimestamp() const{ return m_deletionTimestamp; }

    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline bool DeletionTimestampHasBeenSet() const { return m_deletionTimestampHasBeenSet; }

    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline void SetDeletionTimestamp(const Aws::Utils::DateTime& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = value; }

    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline void SetDeletionTimestamp(Aws::Utils::DateTime&& value) { m_deletionTimestampHasBeenSet = true; m_deletionTimestamp = std::move(value); }

    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithDeletionTimestamp(const Aws::Utils::DateTime& value) { SetDeletionTimestamp(value); return *this;}

    /**
     * <p>The deleted phone number timestamp, in ISO 8601 format.</p>
     */
    inline PhoneNumber& WithDeletionTimestamp(Aws::Utils::DateTime&& value) { SetDeletionTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet;

    Aws::String m_e164PhoneNumber;
    bool m_e164PhoneNumberHasBeenSet;

    PhoneNumberType m_type;
    bool m_typeHasBeenSet;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet;

    PhoneNumberStatus m_status;
    bool m_statusHasBeenSet;

    PhoneNumberCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet;

    Aws::Vector<PhoneNumberAssociation> m_associations;
    bool m_associationsHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet;

    Aws::Utils::DateTime m_deletionTimestamp;
    bool m_deletionTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
