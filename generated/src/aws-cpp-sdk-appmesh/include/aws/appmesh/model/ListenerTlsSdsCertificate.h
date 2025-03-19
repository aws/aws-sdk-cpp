/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
   * <p>An object that represents the listener's Secret Discovery Service
   * certificate. The proxy must be configured with a local SDS provider via a Unix
   * Domain Socket. See App Mesh <a
   * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/tls.html">TLS
   * documentation</a> for more info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListenerTlsSdsCertificate">AWS
   * API Reference</a></p>
   */
  class ListenerTlsSdsCertificate
  {
  public:
    AWS_APPMESH_API ListenerTlsSdsCertificate() = default;
    AWS_APPMESH_API ListenerTlsSdsCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ListenerTlsSdsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the name of the secret requested
     * from the Secret Discovery Service provider representing Transport Layer Security
     * (TLS) materials like a certificate or certificate chain.</p>
     */
    inline const Aws::String& GetSecretName() const { return m_secretName; }
    inline bool SecretNameHasBeenSet() const { return m_secretNameHasBeenSet; }
    template<typename SecretNameT = Aws::String>
    void SetSecretName(SecretNameT&& value) { m_secretNameHasBeenSet = true; m_secretName = std::forward<SecretNameT>(value); }
    template<typename SecretNameT = Aws::String>
    ListenerTlsSdsCertificate& WithSecretName(SecretNameT&& value) { SetSecretName(std::forward<SecretNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretName;
    bool m_secretNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
