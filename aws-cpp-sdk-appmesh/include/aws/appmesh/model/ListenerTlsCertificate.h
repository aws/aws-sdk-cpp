/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ListenerTlsAcmCertificate.h>
#include <aws/appmesh/model/ListenerTlsFileCertificate.h>
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
  class AWS_APPMESH_API ListenerTlsCertificate
  {
  public:
    ListenerTlsCertificate();
    ListenerTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    ListenerTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline const ListenerTlsAcmCertificate& GetAcm() const{ return m_acm; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline void SetAcm(const ListenerTlsAcmCertificate& value) { m_acmHasBeenSet = true; m_acm = value; }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline void SetAcm(ListenerTlsAcmCertificate&& value) { m_acmHasBeenSet = true; m_acm = std::move(value); }

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline ListenerTlsCertificate& WithAcm(const ListenerTlsAcmCertificate& value) { SetAcm(value); return *this;}

    /**
     * <p>A reference to an object that represents an AWS Certicate Manager (ACM)
     * certificate.</p>
     */
    inline ListenerTlsCertificate& WithAcm(ListenerTlsAcmCertificate&& value) { SetAcm(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline const ListenerTlsFileCertificate& GetFile() const{ return m_file; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline void SetFile(const ListenerTlsFileCertificate& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline void SetFile(ListenerTlsFileCertificate&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline ListenerTlsCertificate& WithFile(const ListenerTlsFileCertificate& value) { SetFile(value); return *this;}

    /**
     * <p>A reference to an object that represents a local file certificate.</p>
     */
    inline ListenerTlsCertificate& WithFile(ListenerTlsFileCertificate&& value) { SetFile(std::move(value)); return *this;}

  private:

    ListenerTlsAcmCertificate m_acm;
    bool m_acmHasBeenSet;

    ListenerTlsFileCertificate m_file;
    bool m_fileHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
