/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetConfiguration.h>
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
  class UpdateFleetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleet"; }

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
    inline UpdateFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The fleet configuration to update.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The fleet configuration to update.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The fleet configuration to update.</p>
     */
    inline void SetConfiguration(const FleetConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The fleet configuration to update.</p>
     */
    inline void SetConfiguration(FleetConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The fleet configuration to update.</p>
     */
    inline UpdateFleetRequest& WithConfiguration(const FleetConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The fleet configuration to update.</p>
     */
    inline UpdateFleetRequest& WithConfiguration(FleetConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description of the fleet to update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the fleet to update.</p>
     */
    inline UpdateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateFleetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateFleetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateFleetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The fleet ID to update.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID to update.</p>
     */
    inline UpdateFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The maximum number of workers in the fleet.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }

    /**
     * <p>The maximum number of workers in the fleet.</p>
     */
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }

    /**
     * <p>The maximum number of workers in the fleet.</p>
     */
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }

    /**
     * <p>The maximum number of workers in the fleet.</p>
     */
    inline UpdateFleetRequest& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}


    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }

    /**
     * <p>The minimum number of workers in the fleet.</p>
     */
    inline UpdateFleetRequest& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}


    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline UpdateFleetRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline UpdateFleetRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN that the fleet's workers assume while running jobs.</p>
     */
    inline UpdateFleetRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FleetConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    int m_maxWorkerCount;
    bool m_maxWorkerCountHasBeenSet = false;

    int m_minWorkerCount;
    bool m_minWorkerCountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
