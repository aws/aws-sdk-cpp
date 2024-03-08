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
    AWS_IOT_API CertificateProviderSummary();
    AWS_IOT_API CertificateProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CertificateProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline CertificateProviderSummary& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline CertificateProviderSummary& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline CertificateProviderSummary& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}


    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderArn() const{ return m_certificateProviderArn; }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline bool CertificateProviderArnHasBeenSet() const { return m_certificateProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(const Aws::String& value) { m_certificateProviderArnHasBeenSet = true; m_certificateProviderArn = value; }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(Aws::String&& value) { m_certificateProviderArnHasBeenSet = true; m_certificateProviderArn = std::move(value); }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(const char* value) { m_certificateProviderArnHasBeenSet = true; m_certificateProviderArn.assign(value); }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline CertificateProviderSummary& WithCertificateProviderArn(const Aws::String& value) { SetCertificateProviderArn(value); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline CertificateProviderSummary& WithCertificateProviderArn(Aws::String&& value) { SetCertificateProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline CertificateProviderSummary& WithCertificateProviderArn(const char* value) { SetCertificateProviderArn(value); return *this;}

  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_certificateProviderArn;
    bool m_certificateProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
