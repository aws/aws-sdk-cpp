/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DefinitionInformation
  {
  public:
    AWS_GREENGRASS_API DefinitionInformation();
    AWS_GREENGRASS_API DefinitionInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API DefinitionInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the definition.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DefinitionInformation& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DefinitionInformation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DefinitionInformation& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline void SetCreationTimestamp(const char* value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp.assign(value); }
    inline DefinitionInformation& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}
    inline DefinitionInformation& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    inline DefinitionInformation& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the definition.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DefinitionInformation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DefinitionInformation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DefinitionInformation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp.assign(value); }
    inline DefinitionInformation& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline DefinitionInformation& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    inline DefinitionInformation& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::move(value); }
    inline void SetLatestVersion(const char* value) { m_latestVersionHasBeenSet = true; m_latestVersion.assign(value); }
    inline DefinitionInformation& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}
    inline DefinitionInformation& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}
    inline DefinitionInformation& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }
    inline bool LatestVersionArnHasBeenSet() const { return m_latestVersionArnHasBeenSet; }
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = value; }
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn = std::move(value); }
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArnHasBeenSet = true; m_latestVersionArn.assign(value); }
    inline DefinitionInformation& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}
    inline DefinitionInformation& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}
    inline DefinitionInformation& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DefinitionInformation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DefinitionInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DefinitionInformation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Tag(s) attached to the resource arn.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DefinitionInformation& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DefinitionInformation& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DefinitionInformation& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline DefinitionInformation& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DefinitionInformation& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DefinitionInformation& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DefinitionInformation& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DefinitionInformation& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DefinitionInformation& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::String m_latestVersionArn;
    bool m_latestVersionArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
