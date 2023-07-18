/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/HttpPackageConfiguration.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>VOD source configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/VodSource">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API VodSource
  {
  public:
    VodSource();
    VodSource(Aws::Utils::Json::JsonView jsonValue);
    VodSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline VodSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline VodSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the VOD source.</p>
     */
    inline VodSource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline VodSource& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp that indicates when the VOD source was created.</p>
     */
    inline VodSource& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline const Aws::Vector<HttpPackageConfiguration>& GetHttpPackageConfigurations() const{ return m_httpPackageConfigurations; }

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline bool HttpPackageConfigurationsHasBeenSet() const { return m_httpPackageConfigurationsHasBeenSet; }

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline void SetHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = value; }

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline void SetHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations = std::move(value); }

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline VodSource& WithHttpPackageConfigurations(const Aws::Vector<HttpPackageConfiguration>& value) { SetHttpPackageConfigurations(value); return *this;}

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline VodSource& WithHttpPackageConfigurations(Aws::Vector<HttpPackageConfiguration>&& value) { SetHttpPackageConfigurations(std::move(value)); return *this;}

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline VodSource& AddHttpPackageConfigurations(const HttpPackageConfiguration& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(value); return *this; }

    /**
     * <p>The HTTP package configurations for the VOD source.</p>
     */
    inline VodSource& AddHttpPackageConfigurations(HttpPackageConfiguration&& value) { m_httpPackageConfigurationsHasBeenSet = true; m_httpPackageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline VodSource& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp that indicates when the VOD source was last modified.</p>
     */
    inline VodSource& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline VodSource& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline VodSource& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location that the VOD source is associated with.</p>
     */
    inline VodSource& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the VOD source.</p>
     */
    inline VodSource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline VodSource& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name of the VOD source.</p>
     */
    inline VodSource& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VOD source.</p>
     */
    inline VodSource& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Vector<HttpPackageConfiguration> m_httpPackageConfigurations;
    bool m_httpPackageConfigurationsHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
