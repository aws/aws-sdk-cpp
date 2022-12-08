/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ClientPolicyTls.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ClientPolicy">AWS
   * API Reference</a></p>
   */
  class ClientPolicy
  {
  public:
    AWS_APPMESH_API ClientPolicy();
    AWS_APPMESH_API ClientPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API ClientPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline const ClientPolicyTls& GetTls() const{ return m_tls; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline void SetTls(const ClientPolicyTls& value) { m_tlsHasBeenSet = true; m_tls = value; }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline void SetTls(ClientPolicyTls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline ClientPolicy& WithTls(const ClientPolicyTls& value) { SetTls(value); return *this;}

    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * client policy.</p>
     */
    inline ClientPolicy& WithTls(ClientPolicyTls&& value) { SetTls(std::move(value)); return *this;}

  private:

    ClientPolicyTls m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
