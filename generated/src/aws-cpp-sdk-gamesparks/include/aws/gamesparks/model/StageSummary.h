/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/StageState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The summary of the properties of a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StageSummary">AWS
   * API Reference</a></p>
   */
  class StageSummary
  {
  public:
    AWS_GAMESPARKS_API StageSummary();
    AWS_GAMESPARKS_API StageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API StageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline StageSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline StageSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline StageSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline const Aws::String& GetGameKey() const{ return m_gameKey; }

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline bool GameKeyHasBeenSet() const { return m_gameKeyHasBeenSet; }

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline void SetGameKey(const Aws::String& value) { m_gameKeyHasBeenSet = true; m_gameKey = value; }

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline void SetGameKey(Aws::String&& value) { m_gameKeyHasBeenSet = true; m_gameKey = std::move(value); }

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline void SetGameKey(const char* value) { m_gameKeyHasBeenSet = true; m_gameKey.assign(value); }

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline StageSummary& WithGameKey(const Aws::String& value) { SetGameKey(value); return *this;}

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline StageSummary& WithGameKey(Aws::String&& value) { SetGameKey(std::move(value)); return *this;}

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline StageSummary& WithGameKey(const char* value) { SetGameKey(value); return *this;}


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the stage.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline StageSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the stage.</p>
     */
    inline const StageState& GetState() const{ return m_state; }

    /**
     * <p>The state of the stage.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetState(const StageState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetState(StageState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the stage.</p>
     */
    inline StageSummary& WithState(const StageState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageSummary& WithState(StageState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the stage.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_gameKey;
    bool m_gameKeyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
