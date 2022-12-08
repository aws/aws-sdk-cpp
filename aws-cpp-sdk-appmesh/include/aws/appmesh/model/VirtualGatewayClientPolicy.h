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
    AWS_APPMESH_API VirtualGatewayClientPolicy();
    AWS_APPMESH_API VirtualGatewayClientPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayClientPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline const VirtualGatewayClientPolicyTls& GetTls() const{ return m_tls; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline void SetTls(const VirtualGatewayClientPolicyTls& value) { m_tlsHasBeenSet = true; m_tls = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline void SetTls(VirtualGatewayClientPolicyTls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline VirtualGatewayClientPolicy& WithTls(const VirtualGatewayClientPolicyTls& value) { SetTls(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline VirtualGatewayClientPolicy& WithTls(VirtualGatewayClientPolicyTls&& value) { SetTls(std::move(value)); return *this;}

  private:

    VirtualGatewayClientPolicyTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
