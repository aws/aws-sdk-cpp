/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Item in a list of mission profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/MissionProfileListItem">AWS
   * API Reference</a></p>
   */
  class MissionProfileListItem
  {
  public:
    AWS_GROUNDSTATION_API MissionProfileListItem() = default;
    AWS_GROUNDSTATION_API MissionProfileListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API MissionProfileListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const { return m_missionProfileArn; }
    inline bool MissionProfileArnHasBeenSet() const { return m_missionProfileArnHasBeenSet; }
    template<typename MissionProfileArnT = Aws::String>
    void SetMissionProfileArn(MissionProfileArnT&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::forward<MissionProfileArnT>(value); }
    template<typename MissionProfileArnT = Aws::String>
    MissionProfileListItem& WithMissionProfileArn(MissionProfileArnT&& value) { SetMissionProfileArn(std::forward<MissionProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const { return m_missionProfileId; }
    inline bool MissionProfileIdHasBeenSet() const { return m_missionProfileIdHasBeenSet; }
    template<typename MissionProfileIdT = Aws::String>
    void SetMissionProfileId(MissionProfileIdT&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::forward<MissionProfileIdT>(value); }
    template<typename MissionProfileIdT = Aws::String>
    MissionProfileListItem& WithMissionProfileId(MissionProfileIdT&& value) { SetMissionProfileId(std::forward<MissionProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MissionProfileListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a mission profile.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    MissionProfileListItem& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::String m_missionProfileId;
    bool m_missionProfileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
