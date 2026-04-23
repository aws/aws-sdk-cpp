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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a definition.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DefinitionInformation">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API DefinitionInformation
  {
  public:
    DefinitionInformation();
    DefinitionInformation(Aws::Utils::Json::JsonView jsonValue);
    DefinitionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the definition.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the definition.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the definition.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the definition.
     */
    inline DefinitionInformation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the definition.
     */
    inline DefinitionInformation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the definition.
     */
    inline DefinitionInformation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline DefinitionInformation& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline DefinitionInformation& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline DefinitionInformation& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * The ID of the definition.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the definition.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the definition.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the definition.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the definition.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the definition.
     */
    inline DefinitionInformation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the definition.
     */
    inline DefinitionInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the definition.
     */
    inline DefinitionInformation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline DefinitionInformation& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline DefinitionInformation& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline DefinitionInformation& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}


    /**
     * The latest version of the definition.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * The latest version of the definition.
     */
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    /**
     * The latest version of the definition.
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * The latest version of the definition.
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::move(value); }

    /**
     * The latest version of the definition.
     */
    inline void SetLatestVersion(const char* value) { m_latestVersionHasBeenSet = true; m_latestVersion.assign(value); }

    /**
     * The latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * The latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * The latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * The ARN of the latest version of the definition.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }

    /**
     * The ARN of the latest version of the definition.
     */
    inline bool LatestVersionArnHasBeenSet() const { return m_latestVersionArnHasBeenSet; }

    /**
     * The ARN of the latest version of the definition.
     */
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = value; }

    /**
     * The ARN of the latest version of the definition.
     */
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = std::move(value); }

    /**
     * The ARN of the latest version of the definition.
     */
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn.assign(value); }

    /**
     * The ARN of the latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}

    /**
     * The ARN of the latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}

    /**
     * The ARN of the latest version of the definition.
     */
    inline DefinitionInformation& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}


    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the definition.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the definition.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the definition.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the definition.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the definition.
     */
    inline DefinitionInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the definition.
     */
    inline DefinitionInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the definition.
     */
    inline DefinitionInformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The tags for the definition.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The tags for the definition.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The tags for the definition.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The tags for the definition.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags for the definition.
     */
    inline DefinitionInformation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet;

    Aws::String m_latestVersionArn;
    bool m_latestVersionArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
