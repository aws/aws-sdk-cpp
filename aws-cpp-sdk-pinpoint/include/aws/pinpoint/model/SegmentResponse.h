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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SegmentDimensions.h>
#include <aws/pinpoint/model/SegmentImportResource.h>
#include <aws/pinpoint/model/SegmentGroupList.h>
#include <aws/pinpoint/model/SegmentType.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the configuration, dimension, and other settings
   * for a segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SegmentResponse
  {
  public:
    SegmentResponse();
    SegmentResponse(Aws::Utils::Json::JsonView jsonValue);
    SegmentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline SegmentResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline SegmentResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the segment is associated
     * with.</p>
     */
    inline SegmentResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline SegmentResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline SegmentResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the segment.</p>
     */
    inline SegmentResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline SegmentResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline SegmentResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time when the segment was created.</p>
     */
    inline SegmentResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline const SegmentDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline void SetDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline void SetDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline SegmentResponse& WithDimensions(const SegmentDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimension settings for the segment.</p>
     */
    inline SegmentResponse& WithDimensions(SegmentDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline SegmentResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline SegmentResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline SegmentResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline const SegmentImportResource& GetImportDefinition() const{ return m_importDefinition; }

    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline bool ImportDefinitionHasBeenSet() const { return m_importDefinitionHasBeenSet; }

    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline void SetImportDefinition(const SegmentImportResource& value) { m_importDefinitionHasBeenSet = true; m_importDefinition = value; }

    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline void SetImportDefinition(SegmentImportResource&& value) { m_importDefinitionHasBeenSet = true; m_importDefinition = std::move(value); }

    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline SegmentResponse& WithImportDefinition(const SegmentImportResource& value) { SetImportDefinition(value); return *this;}

    /**
     * <p>The settings for the import job that's associated with the segment.</p>
     */
    inline SegmentResponse& WithImportDefinition(SegmentImportResource&& value) { SetImportDefinition(std::move(value)); return *this;}


    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline SegmentResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline SegmentResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date and time when the segment was last modified.</p>
     */
    inline SegmentResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the segment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline SegmentResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline SegmentResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline SegmentResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline const SegmentGroupList& GetSegmentGroups() const{ return m_segmentGroups; }

    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline bool SegmentGroupsHasBeenSet() const { return m_segmentGroupsHasBeenSet; }

    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline void SetSegmentGroups(const SegmentGroupList& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = value; }

    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline void SetSegmentGroups(SegmentGroupList&& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = std::move(value); }

    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline SegmentResponse& WithSegmentGroups(const SegmentGroupList& value) { SetSegmentGroups(value); return *this;}

    /**
     * <p>A list of one or more segment groups that apply to the segment. Each segment
     * group consists of zero or more base segments and the dimensions that are applied
     * to those base segments.</p>
     */
    inline SegmentResponse& WithSegmentGroups(SegmentGroupList&& value) { SetSegmentGroups(std::move(value)); return *this;}


    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline const SegmentType& GetSegmentType() const{ return m_segmentType; }

    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }

    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline void SetSegmentType(const SegmentType& value) { m_segmentTypeHasBeenSet = true; m_segmentType = value; }

    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline void SetSegmentType(SegmentType&& value) { m_segmentTypeHasBeenSet = true; m_segmentType = std::move(value); }

    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline SegmentResponse& WithSegmentType(const SegmentType& value) { SetSegmentType(value); return *this;}

    /**
     * <p>The segment type. Valid values are:</p> <ul><li><p>DIMENSIONAL - A dynamic
     * segment, which is a segment that uses selection criteria that you specify and is
     * based on endpoint data that's reported by your app. Dynamic segments can change
     * over time.</p></li> <li><p>IMPORT - A static segment, which is a segment that
     * uses selection criteria that you specify and is based on endpoint definitions
     * that you import from a file. Imported segments are static; they don't change
     * over time.</p></li></ul>
     */
    inline SegmentResponse& WithSegmentType(SegmentType&& value) { SetSegmentType(std::move(value)); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the segment. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline SegmentResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The version number of the segment.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the segment.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the segment.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the segment.</p>
     */
    inline SegmentResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    SegmentDimensions m_dimensions;
    bool m_dimensionsHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    SegmentImportResource m_importDefinition;
    bool m_importDefinitionHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    SegmentGroupList m_segmentGroups;
    bool m_segmentGroupsHasBeenSet;

    SegmentType m_segmentType;
    bool m_segmentTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
