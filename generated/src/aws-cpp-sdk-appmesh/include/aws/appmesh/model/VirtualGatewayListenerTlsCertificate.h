/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsAcmCertificate.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsFileCertificate.h>
#include <aws/appmesh/model/VirtualGatewayListenerTlsSdsCertificate.h>
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
  class VirtualGatewayListenerTlsCertificate
  {
  public:
    AWS_APPMESH_API VirtualGatewayListenerTlsCertificate() = default;
    AWS_APPMESH_API VirtualGatewayListenerTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayListenerTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents an Certificate Manager
     * certificate.</p>
     */
    inline const VirtualGatewayListenerTlsAcmCertificate& GetAcm() const { return m_acm; }
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }
    template<typename AcmT = VirtualGatewayListenerTlsAcmCertificate>
    void SetAcm(AcmT&& value) { m_acmHasBeenSet = true; m_acm = std::forward<AcmT>(value); }
    template<typename AcmT = VirtualGatewayListenerTlsAcmCertificate>
    VirtualGatewayListenerTlsCertificate& WithAcm(AcmT&& value) { SetAcm(std::forward<AcmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline const VirtualGatewayListenerTlsFileCertificate& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = VirtualGatewayListenerTlsFileCertificate>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = VirtualGatewayListenerTlsFileCertificate>
    VirtualGatewayListenerTlsCertificate& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a virtual gateway's listener's
     * Secret Discovery Service certificate.</p>
     */
    inline const VirtualGatewayListenerTlsSdsCertificate& GetSds() const { return m_sds; }
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }
    template<typename SdsT = VirtualGatewayListenerTlsSdsCertificate>
    void SetSds(SdsT&& value) { m_sdsHasBeenSet = true; m_sds = std::forward<SdsT>(value); }
    template<typename SdsT = VirtualGatewayListenerTlsSdsCertificate>
    VirtualGatewayListenerTlsCertificate& WithSds(SdsT&& value) { SetSds(std::forward<SdsT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayListenerTlsAcmCertificate m_acm;
    bool m_acmHasBeenSet = false;

    VirtualGatewayListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet = false;

    VirtualGatewayListenerTlsSdsCertificate m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
