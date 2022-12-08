/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object that represents a listener's Transport Layer Security (TLS)
   * validation context trust.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTlsValidationContextTrust">AWS
   * API Reference</a></p>
   */
  class ListenerTlsValidationContextTrust
  {
  public:
    AWS_APPMESH_API ListenerTlsValidationContextTrust();
    AWS_APPMESH_API ListenerTlsValidationContextTrust(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTlsValidationContextTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ListenerTlsValidationContextTrust& WithFile(const TlsValidationContextFileTrust& value) { SetFile(value); return *this;}

    /**
     * <p>An object that represents a Transport Layer Security (TLS) validation context
     * trust for a local file.</p>
     */
    inline ListenerTlsValidationContextTrust& WithFile(TlsValidationContextFileTrust&& value) { SetFile(std::move(value)); return *this;}


    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline const TlsValidationContextSdsTrust& GetSds() const{ return m_sds; }

    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline bool SdsHasBeenSet() const { return m_sdsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(const TlsValidationContextSdsTrust& value) { m_sdsHasBeenSet = true; m_sds = value; }

    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline void SetSds(TlsValidationContextSdsTrust&& value) { m_sdsHasBeenSet = true; m_sds = std::move(value); }

    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline ListenerTlsValidationContextTrust& WithSds(const TlsValidationContextSdsTrust& value) { SetSds(value); return *this;}

    /**
     * <p>A reference to an object that represents a listener's Transport Layer
     * Security (TLS) Secret Discovery Service validation context trust.</p>
     */
    inline ListenerTlsValidationContextTrust& WithSds(TlsValidationContextSdsTrust&& value) { SetSds(std::move(value)); return *this;}

  private:

    TlsValidationContextFileTrust m_file;
    bool m_fileHasBeenSet = false;

    TlsValidationContextSdsTrust m_sds;
    bool m_sdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
