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
    AWS_DIRECTORYSERVICE_API RegisterCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificate"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegisterCertificateRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegisterCertificateRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline RegisterCertificateRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline const Aws::String& GetCertificateData() const{ return m_certificateData; }

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline bool CertificateDataHasBeenSet() const { return m_certificateDataHasBeenSet; }

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline void SetCertificateData(const Aws::String& value) { m_certificateDataHasBeenSet = true; m_certificateData = value; }

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline void SetCertificateData(Aws::String&& value) { m_certificateDataHasBeenSet = true; m_certificateData = std::move(value); }

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline void SetCertificateData(const char* value) { m_certificateDataHasBeenSet = true; m_certificateData.assign(value); }

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline RegisterCertificateRequest& WithCertificateData(const Aws::String& value) { SetCertificateData(value); return *this;}

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline RegisterCertificateRequest& WithCertificateData(Aws::String&& value) { SetCertificateData(std::move(value)); return *this;}

    /**
     * <p>The certificate PEM string that needs to be registered.</p>
     */
    inline RegisterCertificateRequest& WithCertificateData(const char* value) { SetCertificateData(value); return *this;}


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
    inline RegisterCertificateRequest& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline RegisterCertificateRequest& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


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
    inline RegisterCertificateRequest& WithClientCertAuthSettings(const ClientCertAuthSettings& value) { SetClientCertAuthSettings(value); return *this;}

    /**
     * <p>A <code>ClientCertAuthSettings</code> object that contains client certificate
     * authentication settings.</p>
     */
    inline RegisterCertificateRequest& WithClientCertAuthSettings(ClientCertAuthSettings&& value) { SetClientCertAuthSettings(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_certificateData;
    bool m_certificateDataHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    ClientCertAuthSettings m_clientCertAuthSettings;
    bool m_clientCertAuthSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
