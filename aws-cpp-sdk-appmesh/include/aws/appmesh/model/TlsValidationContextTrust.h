/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/TlsValidationContextAcmTrust.h>
#include <aws/appmesh/model/TlsValidationContextFileTrust.h>
#include <aws/appmesh/model/TlsValidationContextSdsTrust.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContextTrust">AWS
   * API Reference</a></p>
   */
  class TlsValidationContextTrust
  {
  public:
    AWS_APPMESH_API TlsValidationContextTrust();
    AWS_APPMESH_API TlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline const TlsValidationContextAcmTrust& GetAcm() const{ return m_acm; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline bool AcmHasBeenSet() const { return m_acmHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline void SetAcm(const TlsValidationContextAcmTrust& value) { m_acmHasBeenSet = true; m_acm = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline void SetAcm(TlsValidationContextAcmTrust&& value) { m_acmHasBeenSet = true; m_acm = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline TlsValidationContextTrust& WithAcm(const TlsValidationContextAcmTrust& value) { SetAcm(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * validation context trust for an Certificate Manager certificate.</p>
     */
    inline TlsValidationContextTrust& WithAcm(TlsValidationContextAcmTrust&& value) { SetAcm(std::move(value)); return *this;}


    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline const TlsValidationContextFileTrust& GetFile() const{ return m_file; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline void SetFile(const TlsValidationContextFileTrust& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline void SetFile(TlsValidationContextFileTrust&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline TlsValidationContextTrust& WithFile(const TlsValidationContextFileTrust& value) { SetFile(value); return *this;}

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline TlsValidationContextTrust& WithFile(TlsValidationContextFileTrust&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline const TlsValidationContextSdsTrust& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(const TlsValidationContextSdsTrust& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(TlsValidationContextSdsTrust&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline TlsValidationContextTrust& WithSds(const TlsValidationContextSdsTrust& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * Secret Discovery Service validation context trust.</p>
     */
    inline TlsValidationContextTrust& WithSds(TlsValidationContextSdsTrust&& value) { SetSds(std::move(value)); return *this;}

  private:

    TlsValidationContextAcmTrust m_acm;
    bool m_acmHasBeenSet = false;

    TlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet = false;

    TlsValidationContextSdsTrust m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
