/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextAcmTrust.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextFileTrust.h>
#include <aws/appmesh/model/VirtualGatewayTlsValidationContextSdsTrust.h>
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
   * <p>An object that represents a Transport Layer Security (TLS) validation context
   * trust.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayTlsValidationContextTrust">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayTlsValidationContextTrust
  {
  public:
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust() = default;
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayTlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline const VirtualGatewayTlsValidationContextAcmTrust& GetAcm() const { return m_acm; }
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }
    template<typename AcmT = VirtualGatewayTlsValidationContextAcmTrust>
    void SetAcm(AcmT&& value) { m_acmHasBeenSet = true; m_acm = std::forward<AcmT>(value); }
    template<typename AcmT = VirtualGatewayTlsValidationContextAcmTrust>
    VirtualGatewayTlsValidationContextTrust& WithAcm(AcmT&& value) { SetAcm(std::forward<AcmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline const VirtualGatewayTlsValidationContextFileTrust& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = VirtualGatewayTlsValidationContextFileTrust>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = VirtualGatewayTlsValidationContextFileTrust>
    VirtualGatewayTlsValidationContextTrust& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a virtual gateway's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline const VirtualGatewayTlsValidationContextSdsTrust& GetSds() const { return m_sds; }
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }
    template<typename SdsT = VirtualGatewayTlsValidationContextSdsTrust>
    void SetSds(SdsT&& value) { m_sdsHasBeenSet = true; m_sds = std::forward<SdsT>(value); }
    template<typename SdsT = VirtualGatewayTlsValidationContextSdsTrust>
    VirtualGatewayTlsValidationContextTrust& WithSds(SdsT&& value) { SetSds(std::forward<SdsT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayTlsValidationContextAcmTrust m_acm;
    bool m_acmHasBeenSet = false;

    VirtualGatewayTlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet = false;

    VirtualGatewayTlsValidationContextSdsTrust m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
