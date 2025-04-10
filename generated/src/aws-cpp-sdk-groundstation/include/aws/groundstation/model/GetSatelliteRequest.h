﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatelliteRequest">AWS
   * API Reference</a></p>
   */
  class GetSatelliteRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API GetSatelliteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSatellite"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteId() const { return m_satelliteId; }
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }
    template<typename SatelliteIdT = Aws::String>
    void SetSatelliteId(SatelliteIdT&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::forward<SatelliteIdT>(value); }
    template<typename SatelliteIdT = Aws::String>
    GetSatelliteRequest& WithSatelliteId(SatelliteIdT&& value) { SetSatelliteId(std::forward<SatelliteIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
