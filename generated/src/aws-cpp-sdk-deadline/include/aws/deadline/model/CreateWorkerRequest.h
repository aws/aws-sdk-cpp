/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class CreateWorkerRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateWorkerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorker"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateWorkerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateWorkerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateWorkerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID to connect to the worker.</p>
     */
    inline CreateWorkerRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline const HostPropertiesRequest& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }

    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline void SetHostProperties(const HostPropertiesRequest& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = value; }

    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline void SetHostProperties(HostPropertiesRequest&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::move(value); }

    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline CreateWorkerRequest& WithHostProperties(const HostPropertiesRequest& value) { SetHostProperties(value); return *this;}

    /**
     * <p>The IP address and host name of the worker.</p>
     */
    inline CreateWorkerRequest& WithHostProperties(HostPropertiesRequest&& value) { SetHostProperties(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    HostPropertiesRequest m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
