/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetSnapshotRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API GetSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSnapshot"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;

    AWS_GAMESPARKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline GetSnapshotRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline GetSnapshotRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline GetSnapshotRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSections() const{ return m_sections; }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline bool SectionsHasBeenSet() const { return m_sectionsHasBeenSet; }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline void SetSections(const Aws::Vector<Aws::String>& value) { m_sectionsHasBeenSet = true; m_sections = value; }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline void SetSections(Aws::Vector<Aws::String>&& value) { m_sectionsHasBeenSet = true; m_sections = std::move(value); }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline GetSnapshotRequest& WithSections(const Aws::Vector<Aws::String>& value) { SetSections(value); return *this;}

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline GetSnapshotRequest& WithSections(Aws::Vector<Aws::String>&& value) { SetSections(std::move(value)); return *this;}

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline GetSnapshotRequest& AddSections(const Aws::String& value) { m_sectionsHasBeenSet = true; m_sections.push_back(value); return *this; }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline GetSnapshotRequest& AddSections(Aws::String&& value) { m_sectionsHasBeenSet = true; m_sections.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of game configuration sections to be described.</p>
     */
    inline GetSnapshotRequest& AddSections(const char* value) { m_sectionsHasBeenSet = true; m_sections.push_back(value); return *this; }


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
    inline GetSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline GetSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot.</p>
     */
    inline GetSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_sections;
    bool m_sectionsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
