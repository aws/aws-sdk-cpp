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
  class UpdateSnapshotRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API UpdateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSnapshot"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateSnapshotRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateSnapshotRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateSnapshotRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
