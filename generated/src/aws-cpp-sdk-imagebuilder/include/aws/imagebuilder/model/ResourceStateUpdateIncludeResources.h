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
   * <p>Specifies if the lifecycle policy should apply actions to selected
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ResourceStateUpdateIncludeResources">AWS
   * API Reference</a></p>
   */
  class ResourceStateUpdateIncludeResources
  {
  public:
    AWS_IMAGEBUILDER_API ResourceStateUpdateIncludeResources() = default;
    AWS_IMAGEBUILDER_API ResourceStateUpdateIncludeResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ResourceStateUpdateIncludeResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the lifecycle action should apply to distributed AMIs</p>
     */
    inline bool GetAmis() const { return m_amis; }
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }
    inline void SetAmis(bool value) { m_amisHasBeenSet = true; m_amis = value; }
    inline ResourceStateUpdateIncludeResources& WithAmis(bool value) { SetAmis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the lifecycle action should apply to snapshots associated
     * with distributed AMIs.</p>
     */
    inline bool GetSnapshots() const { return m_snapshots; }
    inline bool SnapshotsHasBeenSet() const { return m_snapshotsHasBeenSet; }
    inline void SetSnapshots(bool value) { m_snapshotsHasBeenSet = true; m_snapshots = value; }
    inline ResourceStateUpdateIncludeResources& WithSnapshots(bool value) { SetSnapshots(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the lifecycle action should apply to distributed
     * containers.</p>
     */
    inline bool GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(bool value) { m_containersHasBeenSet = true; m_containers = value; }
    inline ResourceStateUpdateIncludeResources& WithContainers(bool value) { SetContainers(value); return *this;}
    ///@}
  private:

    bool m_amis{false};
    bool m_amisHasBeenSet = false;

    bool m_snapshots{false};
    bool m_snapshotsHasBeenSet = false;

    bool m_containers{false};
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
