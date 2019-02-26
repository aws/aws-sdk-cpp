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
#include <aws/mediaconvert/model/AccelerationSettings.h>
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
  class AWS_MEDIACONVERT_API UpdateJobTemplateRequest : public MediaConvertRequest
  {
  public:
    UpdateJobTemplateRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline UpdateJobTemplateRequest& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}

    /**
     * This is a beta feature. If you are interested in using this feature, please
     * contact AWS customer support.
     */
    inline UpdateJobTemplateRequest& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}


    /**
     * The new category for the job template, if you are changing it.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * The new description for the job template, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the job template you are modifying
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The new queue for the job template, if you are changing it.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    
    inline const JobTemplateSettings& GetSettings() const{ return m_settings; }

    
    inline void SetSettings(const JobTemplateSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    
    inline void SetSettings(JobTemplateSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    
    inline UpdateJobTemplateRequest& WithSettings(const JobTemplateSettings& value) { SetSettings(value); return *this;}

    
    inline UpdateJobTemplateRequest& WithSettings(JobTemplateSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline long long GetStatusUpdateIntervalInSecs() const{ return m_statusUpdateIntervalInSecs; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline void SetStatusUpdateIntervalInSecs(long long value) { m_statusUpdateIntervalInSecsHasBeenSet = true; m_statusUpdateIntervalInSecs = value; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline UpdateJobTemplateRequest& WithStatusUpdateIntervalInSecs(long long value) { SetStatusUpdateIntervalInSecs(value); return *this;}

  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet;

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

    long long m_statusUpdateIntervalInSecs;
    bool m_statusUpdateIntervalInSecsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
