/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/FleetConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateFleetRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

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
    inline CreateFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline const FleetConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline void SetConfiguration(const FleetConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline void SetConfiguration(FleetConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline CreateFleetRequest& WithConfiguration(const FleetConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the fleet. Customer managed fleets are
     * self-managed. Service managed Amazon EC2 fleets are managed by Deadline
     * Cloud.</p>
     */
    inline CreateFleetRequest& WithConfiguration(FleetConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the fleet.</p>
     */
    inline CreateFleetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the fleet.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the fleet.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the fleet.</p>
     */
    inline CreateFleetRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the fleet.</p>
     */
    inline CreateFleetRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline CreateFleetRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline CreateFleetRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID of the farm to connect to the fleet.</p>
     */
    inline CreateFleetRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The maximum number of workers for the fleet.</p>
     */
    inline int GetMaxWorkerCount() const{ return m_maxWorkerCount; }

    /**
     * <p>The maximum number of workers for the fleet.</p>
     */
    inline bool MaxWorkerCountHasBeenSet() const { return m_maxWorkerCountHasBeenSet; }

    /**
     * <p>The maximum number of workers for the fleet.</p>
     */
    inline void SetMaxWorkerCount(int value) { m_maxWorkerCountHasBeenSet = true; m_maxWorkerCount = value; }

    /**
     * <p>The maximum number of workers for the fleet.</p>
     */
    inline CreateFleetRequest& WithMaxWorkerCount(int value) { SetMaxWorkerCount(value); return *this;}


    /**
     * <p>The minimum number of workers for the fleet.</p>
     */
    inline int GetMinWorkerCount() const{ return m_minWorkerCount; }

    /**
     * <p>The minimum number of workers for the fleet.</p>
     */
    inline bool MinWorkerCountHasBeenSet() const { return m_minWorkerCountHasBeenSet; }

    /**
     * <p>The minimum number of workers for the fleet.</p>
     */
    inline void SetMinWorkerCount(int value) { m_minWorkerCountHasBeenSet = true; m_minWorkerCount = value; }

    /**
     * <p>The minimum number of workers for the fleet.</p>
     */
    inline CreateFleetRequest& WithMinWorkerCount(int value) { SetMinWorkerCount(value); return *this;}


    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline CreateFleetRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline CreateFleetRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN for the role that the fleet's workers will use.</p>
     */
    inline CreateFleetRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a tag key and a tag value. Tag keys and values are both
     * required, but tag values can be empty strings.</p>
     */
    inline CreateFleetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    int m_maxWorkerCount;
    bool m_maxWorkerCountHasBeenSet = false;

    int m_minWorkerCount;
    bool m_minWorkerCountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
