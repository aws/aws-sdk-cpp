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
    AWS_GROUNDSTATION_API MissionProfileListItem();
    AWS_GROUNDSTATION_API MissionProfileListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API MissionProfileListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }
    inline bool MissionProfileArnHasBeenSet() const { return m_missionProfileArnHasBeenSet; }
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = value; }
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::move(value); }
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn.assign(value); }
    inline MissionProfileListItem& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}
    inline MissionProfileListItem& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}
    inline MissionProfileListItem& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }
    inline bool MissionProfileIdHasBeenSet() const { return m_missionProfileIdHasBeenSet; }
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = value; }
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::move(value); }
    inline void SetMissionProfileId(const char* value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId.assign(value); }
    inline MissionProfileListItem& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}
    inline MissionProfileListItem& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}
    inline MissionProfileListItem& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MissionProfileListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MissionProfileListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MissionProfileListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a mission profile.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline MissionProfileListItem& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline MissionProfileListItem& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline MissionProfileListItem& WithRegion(const char* value) { SetRegion(value); return *this;}
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
