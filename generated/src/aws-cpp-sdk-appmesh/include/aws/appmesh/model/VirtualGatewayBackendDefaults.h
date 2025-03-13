/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayClientPolicy.h>
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
   * <p>An object that represents the default properties for a backend.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayBackendDefaults">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayBackendDefaults
  {
  public:
    AWS_APPMESH_API VirtualGatewayBackendDefaults() = default;
    AWS_APPMESH_API VirtualGatewayBackendDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayBackendDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents a client policy.</p>
     */
    inline const VirtualGatewayClientPolicy& GetClientPolicy() const { return m_clientPolicy; }
    inline bool ClientPolicyHasBeenSet() const { return m_clientPolicyHasBeenSet; }
    template<typename ClientPolicyT = VirtualGatewayClientPolicy>
    void SetClientPolicy(ClientPolicyT&& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = std::forward<ClientPolicyT>(value); }
    template<typename ClientPolicyT = VirtualGatewayClientPolicy>
    VirtualGatewayBackendDefaults& WithClientPolicy(ClientPolicyT&& value) { SetClientPolicy(std::forward<ClientPolicyT>(value)); return *this;}
    ///@}
  private:

    VirtualGatewayClientPolicy m_clientPolicy;
    bool m_clientPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
