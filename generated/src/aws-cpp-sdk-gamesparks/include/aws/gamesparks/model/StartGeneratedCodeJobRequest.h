/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/Generator.h>
#include <utility>

namespace Aws
{
namespace GameSparks
{
namespace Model
{

  /**
   */
  class StartGeneratedCodeJobRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API StartGeneratedCodeJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartGeneratedCodeJob"; }

    AWS_GAMESPARKS_API Aws::String SerializePayload() const override;


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
    inline StartGeneratedCodeJobRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline StartGeneratedCodeJobRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline StartGeneratedCodeJobRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline const Generator& GetGenerator() const{ return m_generator; }

    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline bool GeneratorHasBeenSet() const { return m_generatorHasBeenSet; }

    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline void SetGenerator(const Generator& value) { m_generatorHasBeenSet = true; m_generator = value; }

    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline void SetGenerator(Generator&& value) { m_generatorHasBeenSet = true; m_generator = std::move(value); }

    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline StartGeneratedCodeJobRequest& WithGenerator(const Generator& value) { SetGenerator(value); return *this;}

    /**
     * <p>Properties of the generator to use for the job.</p>
     */
    inline StartGeneratedCodeJobRequest& WithGenerator(Generator&& value) { SetGenerator(std::move(value)); return *this;}


    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline StartGeneratedCodeJobRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline StartGeneratedCodeJobRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot for which to generate code.</p>
     */
    inline StartGeneratedCodeJobRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Generator m_generator;
    bool m_generatorHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
