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
   * Segment definition.<p><h3>See Also:</h3>   <a
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
     * The ID of the application that the segment applies to.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application that the segment applies to.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application that the segment applies to.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application that the segment applies to.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application that the segment applies to.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application that the segment applies to.
     */
    inline SegmentResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application that the segment applies to.
     */
    inline SegmentResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application that the segment applies to.
     */
    inline SegmentResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The arn for the segment.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The arn for the segment.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The arn for the segment.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The arn for the segment.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The arn for the segment.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The arn for the segment.
     */
    inline SegmentResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The arn for the segment.
     */
    inline SegmentResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The arn for the segment.
     */
    inline SegmentResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The date and time when the segment was created.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date and time when the segment was created.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date and time when the segment was created.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date and time when the segment was created.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date and time when the segment was created.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date and time when the segment was created.
     */
    inline SegmentResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date and time when the segment was created.
     */
    inline SegmentResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date and time when the segment was created.
     */
    inline SegmentResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The segment dimensions attributes.
     */
    inline const SegmentDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * The segment dimensions attributes.
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(const SegmentDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * The segment dimensions attributes.
     */
    inline void SetDimensions(SegmentDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * The segment dimensions attributes.
     */
    inline SegmentResponse& WithDimensions(const SegmentDimensions& value) { SetDimensions(value); return *this;}

    /**
     * The segment dimensions attributes.
     */
    inline SegmentResponse& WithDimensions(SegmentDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * The unique segment ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique segment ID.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique segment ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique segment ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique segment ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique segment ID.
     */
    inline SegmentResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique segment ID.
     */
    inline SegmentResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique segment ID.
     */
    inline SegmentResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The import job settings.
     */
    inline const SegmentImportResource& GetImportDefinition() const{ return m_importDefinition; }

    /**
     * The import job settings.
     */
    inline bool ImportDefinitionHasBeenSet() const { return m_importDefinitionHasBeenSet; }

    /**
     * The import job settings.
     */
    inline void SetImportDefinition(const SegmentImportResource& value) { m_importDefinitionHasBeenSet = true; m_importDefinition = value; }

    /**
     * The import job settings.
     */
    inline void SetImportDefinition(SegmentImportResource&& value) { m_importDefinitionHasBeenSet = true; m_importDefinition = std::move(value); }

    /**
     * The import job settings.
     */
    inline SegmentResponse& WithImportDefinition(const SegmentImportResource& value) { SetImportDefinition(value); return *this;}

    /**
     * The import job settings.
     */
    inline SegmentResponse& WithImportDefinition(SegmentImportResource&& value) { SetImportDefinition(std::move(value)); return *this;}


    /**
     * The date and time when the segment was last modified.
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date and time when the segment was last modified.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date and time when the segment was last modified.
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date and time when the segment was last modified.
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date and time when the segment was last modified.
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * The date and time when the segment was last modified.
     */
    inline SegmentResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date and time when the segment was last modified.
     */
    inline SegmentResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * The date and time when the segment was last modified.
     */
    inline SegmentResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The name of the segment.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the segment.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the segment.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the segment.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the segment.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the segment.
     */
    inline SegmentResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the segment.
     */
    inline SegmentResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the segment.
     */
    inline SegmentResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline const SegmentGroupList& GetSegmentGroups() const{ return m_segmentGroups; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline bool SegmentGroupsHasBeenSet() const { return m_segmentGroupsHasBeenSet; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline void SetSegmentGroups(const SegmentGroupList& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = value; }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline void SetSegmentGroups(SegmentGroupList&& value) { m_segmentGroupsHasBeenSet = true; m_segmentGroups = std::move(value); }

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline SegmentResponse& WithSegmentGroups(const SegmentGroupList& value) { SetSegmentGroups(value); return *this;}

    /**
     * A segment group, which consists of zero or more source segments, plus dimensions
     * that are applied to those source segments.
     */
    inline SegmentResponse& WithSegmentGroups(SegmentGroupList&& value) { SetSegmentGroups(std::move(value)); return *this;}


    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline const SegmentType& GetSegmentType() const{ return m_segmentType; }

    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }

    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline void SetSegmentType(const SegmentType& value) { m_segmentTypeHasBeenSet = true; m_segmentType = value; }

    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline void SetSegmentType(SegmentType&& value) { m_segmentTypeHasBeenSet = true; m_segmentType = std::move(value); }

    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline SegmentResponse& WithSegmentType(const SegmentType& value) { SetSegmentType(value); return *this;}

    /**
     * The segment type:
DIMENSIONAL - A dynamic segment built from selection criteria
     * based on endpoint data reported by your app. You create this type of segment by
     * using the segment builder in the Amazon Pinpoint console or by making a POST
     * request to the segments resource.
IMPORT - A static segment built from an
     * imported set of endpoint definitions. You create this type of segment by
     * importing a segment in the Amazon Pinpoint console or by making a POST request
     * to the jobs/import resource.
     */
    inline SegmentResponse& WithSegmentType(SegmentType&& value) { SetSegmentType(std::move(value)); return *this;}


    /**
     * The Tags for the segment.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The Tags for the segment.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The Tags for the segment.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The Tags for the segment.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the segment.
     */
    inline SegmentResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * The segment version number.
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * The segment version number.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * The segment version number.
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * The segment version number.
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
