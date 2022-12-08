/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CertificateState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ds/model/CertificateType.h>
#include <aws/ds/model/ClientCertAuthSettings.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Information about the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Certificate">AWS API
   * Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_DIRECTORYSERVICE_API Certificate();
    AWS_DIRECTORYSERVICE_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const Aws::String& value) { m_certificateIdHasBeenSet = true; m_certificateId = value; }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(Aws::String&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::move(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline void SetCertificateId(const char* value) { m_certificateIdHasBeenSet = true; m_certificateId.assign(value); }

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate.</p>
     */
    inline Certificate& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}


    /**
     * <p>The state of the certificate.</p>
     */
    inline const CertificateState& GetState() const{ return m_state; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(const CertificateState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the certificate.</p>
     */
    inline void SetState(CertificateState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the certificate.</p>
     */
    inline Certificate& WithState(const CertificateState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the certificate.</p>
     */
    inline Certificate& WithState(CertificateState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>Describes a state change for the certificate.</p>
     */
    inline Certificate& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The common name for the certificate.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}

    /**
     * <p>The common name for the certificate.</p>
     */
    inline Certificate& WithCommonName(const char* value) { SetCommonName(value); return *this;}


    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredDateTime() const{ return m_registeredDateTime; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline bool RegisteredDateTimeHasBeenSet() const { return m_registeredDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline void SetRegisteredDateTime(const Aws::Utils::DateTime& value) { m_registeredDateTimeHasBeenSet = true; m_registeredDateTime = value; }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline void SetRegisteredDateTime(Aws::Utils::DateTime&& value) { m_registeredDateTimeHasBeenSet = true; m_registeredDateTime = std::move(value); }

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline Certificate& WithRegisteredDateTime(const Aws::Utils::DateTime& value) { SetRegisteredDateTime(value); return *this;}

    /**
     * <p>The date and time that the certificate was registered.</p>
     */
    inline Certificate& WithRegisteredDateTime(Aws::Utils::DateTime&& value) { SetRegisteredDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryDateTime() const{ return m_expiryDateTime; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline bool ExpiryDateTimeHasBeenSet() const { return m_expiryDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline void SetExpiryDateTime(const Aws::Utils::DateTime& value) { m_expiryDateTimeHasBeenSet = true; m_expiryDateTime = value; }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline void SetExpiryDateTime(Aws::Utils::DateTime&& value) { m_expiryDateTimeHasBeenSet = true; m_expiryDateTime = std::move(value); }

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline Certificate& WithExpiryDateTime(const Aws::Utils::DateTime& value) { SetExpiryDateTime(value); return *this;}

    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline Certificate& WithExpiryDateTime(Aws::Utils::DateTime&& value) { SetExpiryDateTime(std::move(value)); return *this;}


    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline Certificate& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline Certificate& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline const ClientCertAuthSettings& GetClientCertAuthSettings() const{ return m_clientCertAuthSettings; }

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline bool ClientCertAuthSettingsHasBeenSet() const { return m_clientCertAuthSettingsHasBeenSet; }

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline void SetClientCertAuthSettings(const ClientCertAuthSettings& value) { m_clientCertAuthSettingsHasBeenSet = true; m_clientCertAuthSettings = value; }

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline void SetClientCertAuthSettings(ClientCertAuthSettings&& value) { m_clientCertAuthSettingsHasBeenSet = true; m_clientCertAuthSettings = std::move(value); }

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline Certificate& WithClientCertAuthSettings(const ClientCertAuthSettings& value) { SetClientCertAuthSettings(value); return *this;}

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline Certificate& WithClientCertAuthSettings(ClientCertAuthSettings&& value) { SetClientCertAuthSettings(std::move(value)); return *this;}

  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    Aws::Utils::DateTime m_registeredDateTime;
    bool m_registeredDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expiryDateTime;
    bool m_expiryDateTimeHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    ClientCertAuthSettings m_clientCertAuthSettings;
    bool m_clientCertAuthSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
