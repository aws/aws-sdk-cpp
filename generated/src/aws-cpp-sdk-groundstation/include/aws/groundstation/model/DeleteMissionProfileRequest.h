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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfileRequest">AWS
   * API Reference</a></p>
   */
  class DeleteMissionProfileRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API DeleteMissionProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMissionProfile"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const { return m_missionProfileId; }
    inline bool MissionProfileIdHasBeenSet() const { return m_missionProfileIdHasBeenSet; }
    template<typename MissionProfileIdT = Aws::String>
    void SetMissionProfileId(MissionProfileIdT&& value) { m_missionProfileIdHasBeenSet = true; m_missionProfileId = std::forward<MissionProfileIdT>(value); }
    template<typename MissionProfileIdT = Aws::String>
    DeleteMissionProfileRequest& WithMissionProfileId(MissionProfileIdT&& value) { SetMissionProfileId(std::forward<MissionProfileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_missionProfileId;
    bool m_missionProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
