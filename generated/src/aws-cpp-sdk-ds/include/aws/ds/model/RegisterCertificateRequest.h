/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CertificateType.h>
#include <aws/ds/model/ClientCertAuthSettings.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class RegisterCertificateRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API RegisterCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificate"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    RegisterCertificateRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline const Aws::String& GetCertificateData() const { return m_certificateData; }
    inline bool CertificateDataHasBeenSet() const { return m_certificateDataHasBeenSet; }
    template<typename CertificateDataT = Aws::String>
    void SetCertificateData(CertificateDataT&& value) { m_certificateDataHasBeenSet = true; m_certificateData = std::forward<CertificateDataT>(value); }
    template<typename CertificateDataT = Aws::String>
    RegisterCertificateRequest& WithCertificateData(CertificateDataT&& value) { SetCertificateData(std::forward<CertificateDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline CertificateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RegisterCertificateRequest& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline const ClientCertAuthSettings& GetClientCertAuthSettings() const { return m_clientCertAuthSettings; }
    inline bool ClientCertAuthSettingsHasBeenSet() const { return m_clientCertAuthSettingsHasBeenSet; }
    template<typename ClientCertAuthSettingsT = ClientCertAuthSettings>
    void SetClientCertAuthSettings(ClientCertAuthSettingsT&& value) { m_clientCertAuthSettingsHasBeenSet = true; m_clientCertAuthSettings = std::forward<ClientCertAuthSettingsT>(value); }
    template<typename ClientCertAuthSettingsT = ClientCertAuthSettings>
    RegisterCertificateRequest& WithClientCertAuthSettings(ClientCertAuthSettingsT&& value) { SetClientCertAuthSettings(std::forward<ClientCertAuthSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_certificateData;
    bool m_certificateDataHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ClientCertAuthSettings m_clientCertAuthSettings;
    bool m_clientCertAuthSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
