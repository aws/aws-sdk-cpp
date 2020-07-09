/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsAcmCertificate.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsFileCertificate.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a listener's Transport Layer Security (TLS)
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayListenerTlsCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API VirtualGatewayListenerTlsCertificate
  {
  public:
    VirtualGatewayListenerTlsCertificate();
    VirtualGatewayListenerTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    VirtualGatewayListenerTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline const VirtualGatewayListenerTlsAcmCertificate& GetAcm() const{ return m_acm; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline void SetAcm(const VirtualGatewayListenerTlsAcmCertificate& value) { m_acmHasBeenSet = true; m_acm = value; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline void SetAcm(VirtualGatewayListenerTlsAcmCertificate&& value) { m_acmHasBeenSet = true; m_acm = std::move(value); }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline VirtualGatewayListenerTlsCertificate& WithAcm(const VirtualGatewayListenerTlsAcmCertificate& value) { SetAcm(value); return *this;}

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline VirtualGatewayListenerTlsCertificate& WithAcm(VirtualGatewayListenerTlsAcmCertificate&& value) { SetAcm(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline const VirtualGatewayListenerTlsFileCertificate& GetFile() const{ return m_file; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline void SetFile(const VirtualGatewayListenerTlsFileCertificate& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline void SetFile(VirtualGatewayListenerTlsFileCertificate&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline VirtualGatewayListenerTlsCertificate& WithFile(const VirtualGatewayListenerTlsFileCertificate& value) { SetFile(value); return *this;}

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline VirtualGatewayListenerTlsCertificate& WithFile(VirtualGatewayListenerTlsFileCertificate&& value) { SetFile(std::move(value)); return *this;}

  private:

    VirtualGatewayListenerTlsAcmCertificate m_acm;
    bool m_acmHasBeenSet;

    VirtualGatewayListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
