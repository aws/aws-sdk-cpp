/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteCertificateProviderRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteCertificateProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCertificateProvider"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const{ return m_certificateProviderName; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const Aws::String& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = value; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(Aws::String&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::move(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const char* value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName.assign(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline DeleteCertificateProviderRequest& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline DeleteCertificateProviderRequest& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline DeleteCertificateProviderRequest& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}

  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
