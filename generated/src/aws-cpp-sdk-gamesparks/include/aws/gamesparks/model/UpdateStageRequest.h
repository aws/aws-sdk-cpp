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
namespace GameSparks
{
namespace Model
{

  /**
   */
  class UpdateStageRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API UpdateStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStage"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the stage.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the stage.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline UpdateStageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateStageRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateStageRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateStageRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline UpdateStageRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline UpdateStageRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role to use for the game snapshots
     * deployed to this stage.</p>
     */
    inline UpdateStageRequest& WithRole(const char* value) { SetRole(value); return *this;}


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
    inline UpdateStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline UpdateStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline UpdateStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
