/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/ImportGameConfigurationSource.h>
#include <utility>

namespace Aws
{
namespace GameSparks
{
namespace Model
{

  /**
   */
  class ImportGameConfigurationRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API ImportGameConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportGameConfiguration"; }

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
    inline ImportGameConfigurationRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline ImportGameConfigurationRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline ImportGameConfigurationRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline const ImportGameConfigurationSource& GetImportSource() const{ return m_importSource; }

    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline bool ImportSourceHasBeenSet() const { return m_importSourceHasBeenSet; }

    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline void SetImportSource(const ImportGameConfigurationSource& value) { m_importSourceHasBeenSet = true; m_importSource = value; }

    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline void SetImportSource(ImportGameConfigurationSource&& value) { m_importSourceHasBeenSet = true; m_importSource = std::move(value); }

    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline ImportGameConfigurationRequest& WithImportSource(const ImportGameConfigurationSource& value) { SetImportSource(value); return *this;}

    /**
     * <p>The source used to import configuration sections.</p>
     */
    inline ImportGameConfigurationRequest& WithImportSource(ImportGameConfigurationSource&& value) { SetImportSource(std::move(value)); return *this;}

  private:

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    ImportGameConfigurationSource m_importSource;
    bool m_importSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
