/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListenerTlsAcmCertificate.h>
#include <aws/appmesh/model/ListenerTlsFileCertificate.h>
#include <aws/appmesh/model/ListenerTlsSdsCertificate.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTlsCertificate">AWS
   * API Reference</a></p>
   */
  class ListenerTlsCertificate
  {
  public:
    AWS_APPMESH_API ListenerTlsCertificate() = default;
    AWS_APPMESH_API ListenerTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents an Certificate Manager
     * certificate.</p>
     */
    inline const ListenerTlsAcmCertificate& GetAcm() const { return m_acm; }
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }
    template<typename AcmT = ListenerTlsAcmCertificate>
    void SetAcm(AcmT&& value) { m_acmHasBeenSet = true; m_acm = std::forward<AcmT>(value); }
    template<typename AcmT = ListenerTlsAcmCertificate>
    ListenerTlsCertificate& WithAcm(AcmT&& value) { SetAcm(std::forward<AcmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline const ListenerTlsFileCertificate& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = ListenerTlsFileCertificate>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = ListenerTlsFileCertificate>
    ListenerTlsCertificate& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a listener's Secret Discovery
     * Service certificate.</p>
     */
    inline const ListenerTlsSdsCertificate& GetSds() const { return m_sds; }
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }
    template<typename SdsT = ListenerTlsSdsCertificate>
    void SetSds(SdsT&& value) { m_sdsHasBeenSet = true; m_sds = std::forward<SdsT>(value); }
    template<typename SdsT = ListenerTlsSdsCertificate>
    ListenerTlsCertificate& WithSds(SdsT&& value) { SetSds(std::forward<SdsT>(value)); return *this;}
    ///@}
  private:

    ListenerTlsAcmCertificate m_acm;
    bool m_acmHasBeenSet = false;

    ListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet = false;

    ListenerTlsSdsCertificate m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
