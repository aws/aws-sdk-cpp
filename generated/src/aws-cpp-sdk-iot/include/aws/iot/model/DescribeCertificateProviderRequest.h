﻿/**
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
  class DescribeCertificateProviderRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeCertificateProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCertificateProvider"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const { return m_certificateProviderName; }
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }
    template<typename CertificateProviderNameT = Aws::String>
    void SetCertificateProviderName(CertificateProviderNameT&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::forward<CertificateProviderNameT>(value); }
    template<typename CertificateProviderNameT = Aws::String>
    DescribeCertificateProviderRequest& WithCertificateProviderName(CertificateProviderNameT&& value) { SetCertificateProviderName(std::forward<CertificateProviderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
