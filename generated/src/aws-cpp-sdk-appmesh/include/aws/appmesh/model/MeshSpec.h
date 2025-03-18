/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/EgressFilter.h>
#include <aws/appmesh/model/MeshServiceDiscovery.h>
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
   * <p>An object that represents the specification of a service mesh.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/MeshSpec">AWS
   * API Reference</a></p>
   */
  class MeshSpec
  {
  public:
    AWS_APPMESH_API MeshSpec() = default;
    AWS_APPMESH_API MeshSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API MeshSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline const EgressFilter& GetEgressFilter() const { return m_egressFilter; }
    inline bool EgressFilterHasBeenSet() const { return m_egressFilterHasBeenSet; }
    template<typename EgressFilterT = EgressFilter>
    void SetEgressFilter(EgressFilterT&& value) { m_egressFilterHasBeenSet = true; m_egressFilter = std::forward<EgressFilterT>(value); }
    template<typename EgressFilterT = EgressFilter>
    MeshSpec& WithEgressFilter(EgressFilterT&& value) { SetEgressFilter(std::forward<EgressFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MeshServiceDiscovery& GetServiceDiscovery() const { return m_serviceDiscovery; }
    inline bool ServiceDiscoveryHasBeenSet() const { return m_serviceDiscoveryHasBeenSet; }
    template<typename ServiceDiscoveryT = MeshServiceDiscovery>
    void SetServiceDiscovery(ServiceDiscoveryT&& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = std::forward<ServiceDiscoveryT>(value); }
    template<typename ServiceDiscoveryT = MeshServiceDiscovery>
    MeshSpec& WithServiceDiscovery(ServiceDiscoveryT&& value) { SetServiceDiscovery(std::forward<ServiceDiscoveryT>(value)); return *this;}
    ///@}
  private:

    EgressFilter m_egressFilter;
    bool m_egressFilterHasBeenSet = false;

    MeshServiceDiscovery m_serviceDiscovery;
    bool m_serviceDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
