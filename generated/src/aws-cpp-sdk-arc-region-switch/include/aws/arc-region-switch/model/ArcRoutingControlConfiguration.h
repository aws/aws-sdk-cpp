/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/ArcRoutingControlState.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for ARC routing controls used in a Region switch plan. Routing
   * controls are simple on/off switches that you can use to shift traffic away from
   * an impaired Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ArcRoutingControlConfiguration">AWS
   * API Reference</a></p>
   */
  class ArcRoutingControlConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API ArcRoutingControlConfiguration() = default;
    AWS_ARCREGIONSWITCH_API ArcRoutingControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ArcRoutingControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timeout value specified for the configuration.</p>
     */
    inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
    inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
    inline void SetTimeoutMinutes(int value) { m_timeoutMinutesHasBeenSet = true; m_timeoutMinutes = value; }
    inline ArcRoutingControlConfiguration& WithTimeoutMinutes(int value) { SetTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cross account role for the configuration.</p>
     */
    inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
    inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
    template<typename CrossAccountRoleT = Aws::String>
    void SetCrossAccountRole(CrossAccountRoleT&& value) { m_crossAccountRoleHasBeenSet = true; m_crossAccountRole = std::forward<CrossAccountRoleT>(value); }
    template<typename CrossAccountRoleT = Aws::String>
    ArcRoutingControlConfiguration& WithCrossAccountRole(CrossAccountRoleT&& value) { SetCrossAccountRole(std::forward<CrossAccountRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID (secret key) for the configuration.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    ArcRoutingControlConfiguration& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region and ARC routing controls for the configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ArcRoutingControlState>>& GetRegionAndRoutingControls() const { return m_regionAndRoutingControls; }
    inline bool RegionAndRoutingControlsHasBeenSet() const { return m_regionAndRoutingControlsHasBeenSet; }
    template<typename RegionAndRoutingControlsT = Aws::Map<Aws::String, Aws::Vector<ArcRoutingControlState>>>
    void SetRegionAndRoutingControls(RegionAndRoutingControlsT&& value) { m_regionAndRoutingControlsHasBeenSet = true; m_regionAndRoutingControls = std::forward<RegionAndRoutingControlsT>(value); }
    template<typename RegionAndRoutingControlsT = Aws::Map<Aws::String, Aws::Vector<ArcRoutingControlState>>>
    ArcRoutingControlConfiguration& WithRegionAndRoutingControls(RegionAndRoutingControlsT&& value) { SetRegionAndRoutingControls(std::forward<RegionAndRoutingControlsT>(value)); return *this;}
    template<typename RegionAndRoutingControlsKeyT = Aws::String, typename RegionAndRoutingControlsValueT = Aws::Vector<ArcRoutingControlState>>
    ArcRoutingControlConfiguration& AddRegionAndRoutingControls(RegionAndRoutingControlsKeyT&& key, RegionAndRoutingControlsValueT&& value) {
      m_regionAndRoutingControlsHasBeenSet = true; m_regionAndRoutingControls.emplace(std::forward<RegionAndRoutingControlsKeyT>(key), std::forward<RegionAndRoutingControlsValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_timeoutMinutes{0};
    bool m_timeoutMinutesHasBeenSet = false;

    Aws::String m_crossAccountRole;
    bool m_crossAccountRoleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ArcRoutingControlState>> m_regionAndRoutingControls;
    bool m_regionAndRoutingControlsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
