/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GameSparks
{
namespace Model
{

  /**
   */
  class GetStageDeploymentRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API GetStageDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStageDeployment"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;

    AWS_GAMESPARKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline GetStageDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline GetStageDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the stage deployment. <code>StartStageDeployment</code>
     * returns the identifier that you use here. </p>
     */
    inline GetStageDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The name of the game.</p>
     */
    inline const Aws::String& GetGameName() const{ return m_gameName; }

    /**
     * <p>The name of the game.</p>
     */
    inline bool GameNameHasBeenSet() const { return m_gameNameHasBeenSet; }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(const Aws::String& value) { m_gameNameHasBeenSet = true; m_gameName = value; }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(Aws::String&& value) { m_gameNameHasBeenSet = true; m_gameName = std::move(value); }

    /**
     * <p>The name of the game.</p>
     */
    inline void SetGameName(const char* value) { m_gameNameHasBeenSet = true; m_gameName.assign(value); }

    /**
     * <p>The name of the game.</p>
     */
    inline GetStageDeploymentRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline GetStageDeploymentRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline GetStageDeploymentRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline GetStageDeploymentRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline GetStageDeploymentRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline GetStageDeploymentRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
