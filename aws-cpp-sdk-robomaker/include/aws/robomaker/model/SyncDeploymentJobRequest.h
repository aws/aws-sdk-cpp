/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API SyncDeploymentJobRequest : public RoboMakerRequest
  {
  public:
    SyncDeploymentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SyncDeploymentJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline SyncDeploymentJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline SyncDeploymentJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline SyncDeploymentJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline SyncDeploymentJobRequest& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline SyncDeploymentJobRequest& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The target fleet for the synchronization.</p>
     */
    inline SyncDeploymentJobRequest& WithFleet(const char* value) { SetFleet(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
