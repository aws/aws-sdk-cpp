/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a Transport Layer Security (TLS) validation context
   * trust for an Certificate Manager certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContextAcmTrust">AWS
   * API Reference</a></p>
   */
  class TlsValidationContextAcmTrust
  {
  public:
    AWS_APPMESH_API TlsValidationContextAcmTrust();
    AWS_APPMESH_API TlsValidationContextAcmTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TlsValidationContextAcmTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAuthorityArns() const{ return m_certificateAuthorityArns; }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline bool CertificateAuthorityArnsHasBeenSet() const { return m_certificateAuthorityArnsHasBeenSet; }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline void SetCertificateAuthorityArns(const Aws::Vector<Aws::String>& value) { m_certificateAuthorityArnsHasBeenSet = true; m_certificateAuthorityArns = value; }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline void SetCertificateAuthorityArns(Aws::Vector<Aws::String>&& value) { m_certificateAuthorityArnsHasBeenSet = true; m_certificateAuthorityArns = std::move(value); }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline TlsValidationContextAcmTrust& WithCertificateAuthorityArns(const Aws::Vector<Aws::String>& value) { SetCertificateAuthorityArns(value); return *this;}

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline TlsValidationContextAcmTrust& WithCertificateAuthorityArns(Aws::Vector<Aws::String>&& value) { SetCertificateAuthorityArns(std::move(value)); return *this;}

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline TlsValidationContextAcmTrust& AddCertificateAuthorityArns(const Aws::String& value) { m_certificateAuthorityArnsHasBeenSet = true; m_certificateAuthorityArns.push_back(value); return *this; }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline TlsValidationContextAcmTrust& AddCertificateAuthorityArns(Aws::String&& value) { m_certificateAuthorityArnsHasBeenSet = true; m_certificateAuthorityArns.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more ACM Amazon Resource Name (ARN)s.</p>
     */
    inline TlsValidationContextAcmTrust& AddCertificateAuthorityArns(const char* value) { m_certificateAuthorityArnsHasBeenSet = true; m_certificateAuthorityArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_certificateAuthorityArns;
    bool m_certificateAuthorityArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
