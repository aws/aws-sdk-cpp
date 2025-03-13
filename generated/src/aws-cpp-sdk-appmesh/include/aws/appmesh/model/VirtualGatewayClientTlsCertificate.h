/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object that represents the virtual gateway's client's Transport Layer
   * Security (TLS) certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayClientTlsCertificate">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayClientTlsCertificate
  {
  public:
    AWS_APPMESH_API VirtualGatewayClientTlsCertificate() = default;
    AWS_APPMESH_API VirtualGatewayClientTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayClientTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents a local file certificate. The certificate must meet
     * specific requirements and you must have proxy authorization enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html"> Transport
     * Layer Security (TLS) </a>.</p>
     */
    inline const VirtualGatewayListenerTlsFileCertificate& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = VirtualGatewayListenerTlsFileCertificate>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = VirtualGatewayListenerTlsFileCertificate>
    VirtualGatewayClientTlsCertificate& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a virtual gateway's client's Secret
     * Discovery Service certificate.</p>
     */
    inline const VirtualGatewayListenerTlsSdsCertificate& GetSds() const { return m_sds; }
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }
    template<typename SdsT = VirtualGatewayListenerTlsSdsCertificate>
    void SetSds(SdsT&& value) { m_sdsHasBeenSet = true; m_sds = std::forward<SdsT>(value); }
    template<typename SdsT = VirtualGatewayListenerTlsSdsCertificate>
    VirtualGatewayClientTlsCertificate& WithSds(SdsT&& value) { SetSds(std::forward<SdsT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet = false;

    VirtualGatewayListenerTlsSdsCertificate m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
