/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVIDENTLY_API UpdateProjectRequest : public CloudWatchEvidentlyRequest
  {
  public:
    UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>An optional description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project to update.</p>
     */
    inline UpdateProjectRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_project;
    bool m_projectHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
