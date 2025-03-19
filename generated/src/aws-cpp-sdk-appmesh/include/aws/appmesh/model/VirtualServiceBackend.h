/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/ClientPolicy.h>
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
   * <p>An object that represents a virtual service backend for a virtual
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualServiceBackend">AWS
   * API Reference</a></p>
   */
  class VirtualServiceBackend
  {
  public:
    AWS_APPMESH_API VirtualServiceBackend() = default;
    AWS_APPMESH_API VirtualServiceBackend(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualServiceBackend& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an object that represents the client policy for a backend.</p>
     */
    inline const ClientPolicy& GetClientPolicy() const { return m_clientPolicy; }
    inline bool ClientPolicyHasBeenSet() const { return m_clientPolicyHasBeenSet; }
    template<typename ClientPolicyT = ClientPolicy>
    void SetClientPolicy(ClientPolicyT&& value) { m_clientPolicyHasBeenSet = true; m_clientPolicy = std::forward<ClientPolicyT>(value); }
    template<typename ClientPolicyT = ClientPolicy>
    VirtualServiceBackend& WithClientPolicy(ClientPolicyT&& value) { SetClientPolicy(std::forward<ClientPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual service that is acting as a virtual node backend.</p>
     */
    inline const Aws::String& GetVirtualServiceName() const { return m_virtualServiceName; }
    inline bool VirtualServiceNameHasBeenSet() const { return m_virtualServiceNameHasBeenSet; }
    template<typename VirtualServiceNameT = Aws::String>
    void SetVirtualServiceName(VirtualServiceNameT&& value) { m_virtualServiceNameHasBeenSet = true; m_virtualServiceName = std::forward<VirtualServiceNameT>(value); }
    template<typename VirtualServiceNameT = Aws::String>
    VirtualServiceBackend& WithVirtualServiceName(VirtualServiceNameT&& value) { SetVirtualServiceName(std::forward<VirtualServiceNameT>(value)); return *this;}
    ///@}
  private:

    ClientPolicy m_clientPolicy;
    bool m_clientPolicyHasBeenSet = false;

    Aws::String m_virtualServiceName;
    bool m_virtualServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
