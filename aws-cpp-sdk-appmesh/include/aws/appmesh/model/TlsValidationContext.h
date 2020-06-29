/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/TlsValidationContextTrust.h>
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
   * <p>An object that represents a Transport Layer Security (TLS) validation
   * context.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContext">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API TlsValidationContext
  {
  public:
    TlsValidationContext();
    TlsValidationContext(Aws::Utils::Json::JsonView jsonValue);
    TlsValidationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline const TlsValidationContextTrust& GetTrust() const{ return m_trust; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline bool TrustHasBeenSet() const { return m_trustHasBeenSet; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline void SetTrust(const TlsValidationContextTrust& value) { m_trustHasBeenSet = true; m_trust = value; }

    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline void SetTrust(TlsValidationContextTrust&& value) { m_trustHasBeenSet = true; m_trust = std::move(value); }

    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline TlsValidationContext& WithTrust(const TlsValidationContextTrust& value) { SetTrust(value); return *this;}

    /**
     * <p>A reference to an object that represents a TLS validation context trust.</p>
     */
    inline TlsValidationContext& WithTrust(TlsValidationContextTrust&& value) { SetTrust(std::move(value)); return *this;}

  private:

    TlsValidationContextTrust m_trust;
    bool m_trustHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
