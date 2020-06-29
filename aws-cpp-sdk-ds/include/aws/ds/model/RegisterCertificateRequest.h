/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API RegisterCertificateRequest : public DirectoryServiceRequest
  {
  public:
    RegisterCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_certificateData;
    bool m_certificateDataHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
