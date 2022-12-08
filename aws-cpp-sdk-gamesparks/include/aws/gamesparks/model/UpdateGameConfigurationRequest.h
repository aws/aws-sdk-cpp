/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/GameSparksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamesparks/model/SectionModification.h>
#include <utility>

namespace Aws
{
namespace GameSparks
{
namespace Model
{

  /**
   */
  class UpdateGameConfigurationRequest : public GameSparksRequest
  {
  public:
    AWS_GAMESPARKS_API UpdateGameConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameConfiguration"; }

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
    inline UpdateGameConfigurationRequest& WithGameName(const Aws::String& value) { SetGameName(value); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateGameConfigurationRequest& WithGameName(Aws::String&& value) { SetGameName(std::move(value)); return *this;}

    /**
     * <p>The name of the game.</p>
     */
    inline UpdateGameConfigurationRequest& WithGameName(const char* value) { SetGameName(value); return *this;}


    /**
     * <p>The list of modifications to make.</p>
     */
    inline const Aws::Vector<SectionModification>& GetModifications() const{ return m_modifications; }

    /**
     * <p>The list of modifications to make.</p>
     */
    inline bool ModificationsHasBeenSet() const { return m_modificationsHasBeenSet; }

    /**
     * <p>The list of modifications to make.</p>
     */
    inline void SetModifications(const Aws::Vector<SectionModification>& value) { m_modificationsHasBeenSet = true; m_modifications = value; }

    /**
     * <p>The list of modifications to make.</p>
     */
    inline void SetModifications(Aws::Vector<SectionModification>&& value) { m_modificationsHasBeenSet = true; m_modifications = std::move(value); }

    /**
     * <p>The list of modifications to make.</p>
     */
    inline UpdateGameConfigurationRequest& WithModifications(const Aws::Vector<SectionModification>& value) { SetModifications(value); return *this;}

    /**
     * <p>The list of modifications to make.</p>
     */
    inline UpdateGameConfigurationRequest& WithModifications(Aws::Vector<SectionModification>&& value) { SetModifications(std::move(value)); return *this;}

    /**
     * <p>The list of modifications to make.</p>
     */
    inline UpdateGameConfigurationRequest& AddModifications(const SectionModification& value) { m_modificationsHasBeenSet = true; m_modifications.push_back(value); return *this; }

    /**
     * <p>The list of modifications to make.</p>
     */
    inline UpdateGameConfigurationRequest& AddModifications(SectionModification&& value) { m_modificationsHasBeenSet = true; m_modifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gameName;
    bool m_gameNameHasBeenSet = false;

    Aws::Vector<SectionModification> m_modifications;
    bool m_modificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
