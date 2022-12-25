/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfileRequest">AWS
   * API Reference</a></p>
   */
  class GetMissionProfileRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API GetMissionProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMissionProfile"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline bool MissionProfileIdHasBeenSet() const { return m_missionProfileIdHasBeenSet; }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = value; }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::move(value); }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const char* value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId.assign(value); }

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline GetMissionProfileRequest& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline GetMissionProfileRequest& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}

    /**
     * <p>UUID of a mission profile.</p>
     */
    inline GetMissionProfileRequest& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}

  private:

    Aws::String m_missionProfileId;
    bool m_missionProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
