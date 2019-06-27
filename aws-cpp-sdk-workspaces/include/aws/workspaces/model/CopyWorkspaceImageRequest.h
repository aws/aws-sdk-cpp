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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API CopyWorkspaceImageRequest : public WorkSpacesRequest
  {
  public:
    CopyWorkspaceImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyWorkspaceImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the source image.</p>
     */
    inline const Aws::String& GetSourceImageId() const{ return m_sourceImageId; }

    /**
     * <p>The identifier of the source image.</p>
     */
    inline bool SourceImageIdHasBeenSet() const { return m_sourceImageIdHasBeenSet; }

    /**
     * <p>The identifier of the source image.</p>
     */
    inline void SetSourceImageId(const Aws::String& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = value; }

    /**
     * <p>The identifier of the source image.</p>
     */
    inline void SetSourceImageId(Aws::String&& value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId = std::move(value); }

    /**
     * <p>The identifier of the source image.</p>
     */
    inline void SetSourceImageId(const char* value) { m_sourceImageIdHasBeenSet = true; m_sourceImageId.assign(value); }

    /**
     * <p>The identifier of the source image.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceImageId(const Aws::String& value) { SetSourceImageId(value); return *this;}

    /**
     * <p>The identifier of the source image.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceImageId(Aws::String&& value) { SetSourceImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source image.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceImageId(const char* value) { SetSourceImageId(value); return *this;}


    /**
     * <p>The identifier of the source Region.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source Region.</p>
     */
    inline CopyWorkspaceImageRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The tags for the image.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the image.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the image.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the image.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the image.</p>
     */
    inline CopyWorkspaceImageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the image.</p>
     */
    inline CopyWorkspaceImageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the image.</p>
     */
    inline CopyWorkspaceImageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_sourceImageId;
    bool m_sourceImageIdHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
