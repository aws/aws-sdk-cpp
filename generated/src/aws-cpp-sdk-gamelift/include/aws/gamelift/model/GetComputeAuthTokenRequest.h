/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class GetComputeAuthTokenRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API GetComputeAuthTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComputeAuthToken"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline GetComputeAuthTokenRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline GetComputeAuthTokenRequest& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline GetComputeAuthTokenRequest& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute resource you are requesting the authentication token
     * for.</p>
     */
    inline GetComputeAuthTokenRequest& WithComputeName(const char* value) { SetComputeName(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
