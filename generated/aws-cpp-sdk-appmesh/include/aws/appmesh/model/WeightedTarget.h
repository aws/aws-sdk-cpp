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
  class AWS_APPMESH_API WeightedTarget
  {
  public:
    WeightedTarget();
    WeightedTarget(Aws::Utils::Json::JsonView jsonValue);
    WeightedTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline const Aws::String& GetVirtualNode() const{ return m_virtualNode; }

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline bool VirtualNodeHasBeenSet() const { return m_virtualNodeHasBeenSet; }

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline void SetVirtualNode(const Aws::String& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = value; }

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline void SetVirtualNode(Aws::String&& value) { m_virtualNodeHasBeenSet = true; m_virtualNode = std::move(value); }

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline void SetVirtualNode(const char* value) { m_virtualNodeHasBeenSet = true; m_virtualNode.assign(value); }

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline WeightedTarget& WithVirtualNode(const Aws::String& value) { SetVirtualNode(value); return *this;}

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline WeightedTarget& WithVirtualNode(Aws::String&& value) { SetVirtualNode(std::move(value)); return *this;}

    /**
     * <p>The virtual node to associate with the weighted target.</p>
     */
    inline WeightedTarget& WithVirtualNode(const char* value) { SetVirtualNode(value); return *this;}


    /**
     * <p>The relative weight of the weighted target.</p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The relative weight of the weighted target.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The relative weight of the weighted target.</p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The relative weight of the weighted target.</p>
     */
    inline WeightedTarget& WithWeight(int value) { SetWeight(value); return *this;}

  private:

    Aws::String m_virtualNode;
    bool m_virtualNodeHasBeenSet;

    int m_weight;
    bool m_weightHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
