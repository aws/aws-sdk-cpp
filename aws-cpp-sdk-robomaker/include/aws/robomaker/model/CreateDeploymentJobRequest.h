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
#include <aws/robomaker/model/DeploymentConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/DeploymentApplicationConfig.h>
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
  class AWS_ROBOMAKER_API CreateDeploymentJobRequest : public RoboMakerRequest
  {
  public:
    CreateDeploymentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeploymentJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The requested deployment configuration.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }

    /**
     * <p>The requested deployment configuration.</p>
     */
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }

    /**
     * <p>The requested deployment configuration.</p>
     */
    inline void SetDeploymentConfig(const DeploymentConfig& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = value; }

    /**
     * <p>The requested deployment configuration.</p>
     */
    inline void SetDeploymentConfig(DeploymentConfig&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::move(value); }

    /**
     * <p>The requested deployment configuration.</p>
     */
    inline CreateDeploymentJobRequest& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    /**
     * <p>The requested deployment configuration.</p>
     */
    inline CreateDeploymentJobRequest& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


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
    inline CreateDeploymentJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateDeploymentJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateDeploymentJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleetHasBeenSet = true; m_fleet = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline void SetFleet(const char* value) { m_fleetHasBeenSet = true; m_fleet.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline CreateDeploymentJobRequest& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline CreateDeploymentJobRequest& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet to deploy.</p>
     */
    inline CreateDeploymentJobRequest& WithFleet(const char* value) { SetFleet(value); return *this;}


    /**
     * <p>The deployment application configuration.</p>
     */
    inline const Aws::Vector<DeploymentApplicationConfig>& GetDeploymentApplicationConfigs() const{ return m_deploymentApplicationConfigs; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline bool DeploymentApplicationConfigsHasBeenSet() const { return m_deploymentApplicationConfigsHasBeenSet; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline void SetDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs = value; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline void SetDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs = std::move(value); }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobRequest& WithDeploymentApplicationConfigs(const Aws::Vector<DeploymentApplicationConfig>& value) { SetDeploymentApplicationConfigs(value); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobRequest& WithDeploymentApplicationConfigs(Aws::Vector<DeploymentApplicationConfig>&& value) { SetDeploymentApplicationConfigs(std::move(value)); return *this;}

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobRequest& AddDeploymentApplicationConfigs(const DeploymentApplicationConfig& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs.push_back(value); return *this; }

    /**
     * <p>The deployment application configuration.</p>
     */
    inline CreateDeploymentJobRequest& AddDeploymentApplicationConfigs(DeploymentApplicationConfig&& value) { m_deploymentApplicationConfigsHasBeenSet = true; m_deploymentApplicationConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job.</p>
     */
    inline CreateDeploymentJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    DeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_fleet;
    bool m_fleetHasBeenSet;

    Aws::Vector<DeploymentApplicationConfig> m_deploymentApplicationConfigs;
    bool m_deploymentApplicationConfigsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
