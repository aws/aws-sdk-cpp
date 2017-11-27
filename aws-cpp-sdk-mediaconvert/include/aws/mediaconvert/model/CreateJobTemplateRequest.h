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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/JobTemplateSettings.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API CreateJobTemplateRequest : public MediaConvertRequest
  {
  public:
    CreateJobTemplateRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * Optional. A category for the job template you are creating
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * Optional. A category for the job template you are creating
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * Optional. A category for the job template you are creating
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * Optional. A category for the job template you are creating
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * Optional. A category for the job template you are creating
     */
    inline CreateJobTemplateRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * Optional. A category for the job template you are creating
     */
    inline CreateJobTemplateRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * Optional. A category for the job template you are creating
     */
    inline CreateJobTemplateRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * Optional. A description of the job template you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Optional. A description of the job template you are creating.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Optional. A description of the job template you are creating.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Optional. A description of the job template you are creating.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Optional. A description of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Optional. A description of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Optional. A description of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the job template you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the job template you are creating.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the job template you are creating.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the job template you are creating.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the job template you are creating.
     */
    inline CreateJobTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline CreateJobTemplateRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline CreateJobTemplateRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline CreateJobTemplateRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    
    inline const JobTemplateSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const JobTemplateSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(JobTemplateSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline CreateJobTemplateRequest& WithSettings(const JobTemplateSettings& value) { SetSettings(value); return *this;}

    
    inline CreateJobTemplateRequest& WithSettings(JobTemplateSettings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_queue;
    bool m_queueHasBeenSet;

    JobTemplateSettings m_settings;
    bool m_settingsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
