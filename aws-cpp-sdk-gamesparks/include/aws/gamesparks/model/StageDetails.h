/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Properties that provide details of a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/StageDetails">AWS
   * API Reference</a></p>
   */
  class StageDetails
  {
  public:
    AWS_GAMESPARKS_API StageDetails();
    AWS_GAMESPARKS_API StageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API StageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline StageDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline StageDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stage.</p>
     */
    inline StageDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline StageDetails& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The timestamp of when the stage was created.</p>
     */
    inline StageDetails& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


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
    inline StageDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline StageDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the stage.</p>
     */
    inline StageDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline StageDetails& WithGameKey(const Aws::String& value) { SetGameKey(value); return *this;}

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline StageDetails& WithGameKey(Aws::String&& value) { SetGameKey(std::move(value)); return *this;}

    /**
     * <p>The game key associated with the stage.</p> <p> The game key is a unique
     * identifier that the game client uses to connect to the GameSparks backend. </p>
     */
    inline StageDetails& WithGameKey(const char* value) { SetGameKey(value); return *this;}


    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline StageDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The timestamp of when the stage was last updated.</p>
     */
    inline StageDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline StageDetails& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline StageDetails& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The Amazon CloudWatch log group for game runtimes deployed to the stage.</p>
     */
    inline StageDetails& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}


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
    inline StageDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline StageDetails& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline StageDetails& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role used to run the game runtimes
     * deployed to the stage.</p>
     */
    inline StageDetails& WithRole(const char* value) { SetRole(value); return *this;}


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
    inline StageDetails& WithState(const StageState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageDetails& WithState(StageState&& value) { SetState(std::move(value)); return *this;}


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
    inline StageDetails& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the stage.</p>
     */
    inline StageDetails& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_gameKey;
    bool m_gameKeyHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    StageState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
