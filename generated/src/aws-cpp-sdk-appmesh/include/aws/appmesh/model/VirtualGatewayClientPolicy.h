/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayClientPolicyTls.h>
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
   * <p>An object that represents a client policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayClientPolicy">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayClientPolicy
  {
  public:
    AWS_APPMESH_API VirtualGatewayClientPolicy() = default;
    AWS_APPMESH_API VirtualGatewayClientPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayClientPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline const VirtualGatewayClientPolicyTls& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = VirtualGatewayClientPolicyTls>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = VirtualGatewayClientPolicyTls>
    VirtualGatewayClientPolicy& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayClientPolicyTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
