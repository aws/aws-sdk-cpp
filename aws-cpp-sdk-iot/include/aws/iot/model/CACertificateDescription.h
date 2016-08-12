/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CACertificateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/AutoRegistrationStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a CA certificate.</p>
   */
  class AWS_IOT_API CACertificateDescription
  {
  public:
    CACertificateDescription();
    CACertificateDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    CACertificateDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(Aws::String&& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The CA certificate ARN.</p>
     */
    inline CACertificateDescription& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The CA certificate ID.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(Aws::String&& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The CA certificate ID.</p>
     */
    inline CACertificateDescription& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline const CACertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline void SetStatus(const CACertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline void SetStatus(CACertificateStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline CACertificateDescription& WithStatus(const CACertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a CA certificate.</p>
     */
    inline CACertificateDescription& WithStatus(CACertificateStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(Aws::String&& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The CA certificate data, in PEM format.</p>
     */
    inline CACertificateDescription& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(Aws::String&& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The owner of the CA certificate.</p>
     */
    inline CACertificateDescription& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline CACertificateDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the CA certificate was created.</p>
     */
    inline CACertificateDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline const AutoRegistrationStatus& GetAutoRegistrationStatus() const{ return m_autoRegistrationStatus; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline void SetAutoRegistrationStatus(const AutoRegistrationStatus& value) { m_autoRegistrationStatusHasBeenSet = true; m_autoRegistrationStatus = value; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline void SetAutoRegistrationStatus(AutoRegistrationStatus&& value) { m_autoRegistrationStatusHasBeenSet = true; m_autoRegistrationStatus = value; }

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline CACertificateDescription& WithAutoRegistrationStatus(const AutoRegistrationStatus& value) { SetAutoRegistrationStatus(value); return *this;}

    /**
     * <p>Whether the CA certificate configured for auto registration of device
     * certificates. Valid values are "ENABLE" and "DISABLE"</p>
     */
    inline CACertificateDescription& WithAutoRegistrationStatus(AutoRegistrationStatus&& value) { SetAutoRegistrationStatus(value); return *this;}

  private:
    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;
    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet;
    CACertificateStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;
    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    AutoRegistrationStatus m_autoRegistrationStatus;
    bool m_autoRegistrationStatusHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
