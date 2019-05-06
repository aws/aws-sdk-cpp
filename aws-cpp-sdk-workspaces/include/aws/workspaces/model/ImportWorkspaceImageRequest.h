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
#include <aws/workspaces/model/WorkspaceImageIngestionProcess.h>
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
  class AWS_WORKSPACES_API ImportWorkspaceImageRequest : public WorkSpacesRequest
  {
  public:
    ImportWorkspaceImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportWorkspaceImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline const Aws::String& GetEc2ImageId() const{ return m_ec2ImageId; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline bool Ec2ImageIdHasBeenSet() const { return m_ec2ImageIdHasBeenSet; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(const Aws::String& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = value; }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(Aws::String&& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = std::move(value); }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline void SetEc2ImageId(const char* value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId.assign(value); }

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const Aws::String& value) { SetEc2ImageId(value); return *this;}

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(Aws::String&& value) { SetEc2ImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline ImportWorkspaceImageRequest& WithEc2ImageId(const char* value) { SetEc2ImageId(value); return *this;}


    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline const WorkspaceImageIngestionProcess& GetIngestionProcess() const{ return m_ingestionProcess; }

    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline bool IngestionProcessHasBeenSet() const { return m_ingestionProcessHasBeenSet; }

    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline void SetIngestionProcess(const WorkspaceImageIngestionProcess& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = value; }

    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline void SetIngestionProcess(WorkspaceImageIngestionProcess&& value) { m_ingestionProcessHasBeenSet = true; m_ingestionProcess = std::move(value); }

    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline ImportWorkspaceImageRequest& WithIngestionProcess(const WorkspaceImageIngestionProcess& value) { SetIngestionProcess(value); return *this;}

    /**
     * <p>The ingestion process to be used when importing the image.</p>
     */
    inline ImportWorkspaceImageRequest& WithIngestionProcess(WorkspaceImageIngestionProcess&& value) { SetIngestionProcess(std::move(value)); return *this;}


    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline const Aws::String& GetImageDescription() const{ return m_imageDescription; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline bool ImageDescriptionHasBeenSet() const { return m_imageDescriptionHasBeenSet; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(const Aws::String& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = value; }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(Aws::String&& value) { m_imageDescriptionHasBeenSet = true; m_imageDescription = std::move(value); }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline void SetImageDescription(const char* value) { m_imageDescriptionHasBeenSet = true; m_imageDescription.assign(value); }

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(const Aws::String& value) { SetImageDescription(value); return *this;}

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(Aws::String&& value) { SetImageDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the WorkSpace image.</p>
     */
    inline ImportWorkspaceImageRequest& WithImageDescription(const char* value) { SetImageDescription(value); return *this;}


    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline ImportWorkspaceImageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ec2ImageId;
    bool m_ec2ImageIdHasBeenSet;

    WorkspaceImageIngestionProcess m_ingestionProcess;
    bool m_ingestionProcessHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;

    Aws::String m_imageDescription;
    bool m_imageDescriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
