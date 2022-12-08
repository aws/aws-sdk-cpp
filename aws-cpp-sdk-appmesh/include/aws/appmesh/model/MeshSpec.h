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
    AWS_APPMESH_API MeshSpec();
    AWS_APPMESH_API MeshSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API MeshSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline const EgressFilter& GetEgressFilter() const{ return m_egressFilter; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline bool EgressFilterHasBeenSet() const { return m_egressFilterHasBeenSet; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline void SetEgressFilter(const EgressFilter& value) { m_egressFilterHasBeenSet = true; m_egressFilter = value; }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline void SetEgressFilter(EgressFilter&& value) { m_egressFilterHasBeenSet = true; m_egressFilter = std::move(value); }

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline MeshSpec& WithEgressFilter(const EgressFilter& value) { SetEgressFilter(value); return *this;}

    /**
     * <p>The egress filter rules for the service mesh.</p>
     */
    inline MeshSpec& WithEgressFilter(EgressFilter&& value) { SetEgressFilter(std::move(value)); return *this;}


    
    inline const MeshServiceDiscovery& GetServiceDiscovery() const{ return m_serviceDiscovery; }

    
    inline bool ServiceDiscoveryHasBeenSet() const { return m_serviceDiscoveryHasBeenSet; }

    
    inline void SetServiceDiscovery(const MeshServiceDiscovery& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = value; }

    
    inline void SetServiceDiscovery(MeshServiceDiscovery&& value) { m_serviceDiscoveryHasBeenSet = true; m_serviceDiscovery = std::move(value); }

    
    inline MeshSpec& WithServiceDiscovery(const MeshServiceDiscovery& value) { SetServiceDiscovery(value); return *this;}

    
    inline MeshSpec& WithServiceDiscovery(MeshServiceDiscovery&& value) { SetServiceDiscovery(std::move(value)); return *this;}

  private:

    EgressFilter m_egressFilter;
    bool m_egressFilterHasBeenSet = false;

    MeshServiceDiscovery m_serviceDiscovery;
    bool m_serviceDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
