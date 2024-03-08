/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Specifies how the lifecycle policy should apply actions to selected
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetailActionIncludeResources">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetailActionIncludeResources
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailActionIncludeResources();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailActionIncludeResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetailActionIncludeResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the lifecycle action should apply to distributed AMIs.</p>
     */
    inline bool GetAmis() const{ return m_amis; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed AMIs.</p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed AMIs.</p>
     */
    inline void SetAmis(bool value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed AMIs.</p>
     */
    inline LifecyclePolicyDetailActionIncludeResources& WithAmis(bool value) { SetAmis(value); return *this;}


    /**
     * <p>Specifies whether the lifecycle action should apply to snapshots associated
     * with distributed AMIs.</p>
     */
    inline bool GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>Specifies whether the lifecycle action should apply to snapshots associated
     * with distributed AMIs.</p>
     */
    inline bool SnapshotsHasBeenSet() const { return m_snapshotsHasBeenSet; }

    /**
     * <p>Specifies whether the lifecycle action should apply to snapshots associated
     * with distributed AMIs.</p>
     */
    inline void SetSnapshots(bool value) { m_snapshotsHasBeenSet = true; m_snapshots = value; }

    /**
     * <p>Specifies whether the lifecycle action should apply to snapshots associated
     * with distributed AMIs.</p>
     */
    inline LifecyclePolicyDetailActionIncludeResources& WithSnapshots(bool value) { SetSnapshots(value); return *this;}


    /**
     * <p>Specifies whether the lifecycle action should apply to distributed
     * containers.</p>
     */
    inline bool GetContainers() const{ return m_containers; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed
     * containers.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed
     * containers.</p>
     */
    inline void SetContainers(bool value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>Specifies whether the lifecycle action should apply to distributed
     * containers.</p>
     */
    inline LifecyclePolicyDetailActionIncludeResources& WithContainers(bool value) { SetContainers(value); return *this;}

  private:

    bool m_amis;
    bool m_amisHasBeenSet = false;

    bool m_snapshots;
    bool m_snapshotsHasBeenSet = false;

    bool m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
