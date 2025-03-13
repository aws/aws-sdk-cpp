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
   */
  class DescribeEphemerisRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API DescribeEphemerisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEphemeris"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
    inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
    template<typename EphemerisIdT = Aws::String>
    void SetEphemerisId(EphemerisIdT&& value) { m_ephemerisIdHasBeenSet = true; m_ephemerisId = std::forward<EphemerisIdT>(value); }
    template<typename EphemerisIdT = Aws::String>
    DescribeEphemerisRequest& WithEphemerisId(EphemerisIdT&& value) { SetEphemerisId(std::forward<EphemerisIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ephemerisId;
    bool m_ephemerisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
