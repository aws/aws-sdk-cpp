/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The certificate provider summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CertificateProviderSummary">AWS
   * API Reference</a></p>
   */
  class CertificateProviderSummary
  {
  public:
    AWS_IOT_API CertificateProviderSummary() = default;
    AWS_IOT_API CertificateProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CertificateProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const { return m_certificateProviderName; }
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }
    template<typename CertificateProviderNameT = Aws::String>
    void SetCertificateProviderName(CertificateProviderNameT&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::forward<CertificateProviderNameT>(value); }
    template<typename CertificateProviderNameT = Aws::String>
    CertificateProviderSummary& WithCertificateProviderName(CertificateProviderNameT&& value) { SetCertificateProviderName(std::forward<CertificateProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderArn() const { return m_certificateProviderArn; }
    inline bool CertificateProviderArnHasBeenSet() const { return m_certificateProviderArnHasBeenSet; }
    template<typename CertificateProviderArnT = Aws::String>
    void SetCertificateProviderArn(CertificateProviderArnT&& value) { m_certificateProviderArnHasBeenSet = true; m_certificateProviderArn = std::forward<CertificateProviderArnT>(value); }
    template<typename CertificateProviderArnT = Aws::String>
    CertificateProviderSummary& WithCertificateProviderArn(CertificateProviderArnT&& value) { SetCertificateProviderArn(std::forward<CertificateProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_certificateProviderArn;
    bool m_certificateProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
