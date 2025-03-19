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
   * <p>An object that represents a target and its relative weight. Traffic is
   * distributed across targets according to their relative weight. For example, a
   * weighted target with a relative weight of 50 receives five times as much traffic
   * as one with a relative weight of 10. The total weight for all targets combined
   * must be less than or equal to 100.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/WeightedTarget">AWS
   * API Reference</a></p>
   */
  class WeightedTarget
  {
  public:
    AWS_APPMESH_API WeightedTarget() = default;
    AWS_APPMESH_API WeightedTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API WeightedTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The targeted port of the weighted object.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline WeightedTarget& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline const Aws::String& GetVirtualNode() const { return m_virtualNode; }
    inline bool VirtualNodeHasBeenSet() const { return m_virtualNodeHasBeenSet; }
    template<typename VirtualNodeT = Aws::String>
    void SetVirtualNode(VirtualNodeT&& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = std::forward<VirtualNodeT>(value); }
    template<typename VirtualNodeT = Aws::String>
    WeightedTarget& WithVirtualNode(VirtualNodeT&& value) { SetVirtualNode(std::forward<VirtualNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative weight of the weighted target.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline WeightedTarget& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_virtualNode;
    bool m_virtualNodeHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
