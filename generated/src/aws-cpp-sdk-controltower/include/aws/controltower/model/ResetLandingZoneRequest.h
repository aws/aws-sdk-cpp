/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class ResetLandingZoneRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API ResetLandingZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetLandingZone"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline const Aws::String& GetLandingZoneIdentifier() const{ return m_landingZoneIdentifier; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline bool LandingZoneIdentifierHasBeenSet() const { return m_landingZoneIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(const Aws::String& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = value; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(Aws::String&& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(const char* value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline ResetLandingZoneRequest& WithLandingZoneIdentifier(const Aws::String& value) { SetLandingZoneIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline ResetLandingZoneRequest& WithLandingZoneIdentifier(Aws::String&& value) { SetLandingZoneIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline ResetLandingZoneRequest& WithLandingZoneIdentifier(const char* value) { SetLandingZoneIdentifier(value); return *this;}

  private:

    Aws::String m_landingZoneIdentifier;
    bool m_landingZoneIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
