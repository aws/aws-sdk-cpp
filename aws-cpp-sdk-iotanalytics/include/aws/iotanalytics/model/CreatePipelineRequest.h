﻿/*
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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/PipelineActivity.h>
#include <aws/iotanalytics/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API CreatePipelineRequest : public IoTAnalyticsRequest
  {
  public:
    CreatePipelineRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline const Aws::Vector<PipelineActivity>& GetPipelineActivities() const{ return m_pipelineActivities; }

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline void SetPipelineActivities(const Aws::Vector<PipelineActivity>& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities = value; }

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline void SetPipelineActivities(Aws::Vector<PipelineActivity>&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities = std::move(value); }

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline CreatePipelineRequest& WithPipelineActivities(const Aws::Vector<PipelineActivity>& value) { SetPipelineActivities(value); return *this;}

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline CreatePipelineRequest& WithPipelineActivities(Aws::Vector<PipelineActivity>&& value) { SetPipelineActivities(std::move(value)); return *this;}

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline CreatePipelineRequest& AddPipelineActivities(const PipelineActivity& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities.push_back(value); return *this; }

    /**
     * <p>A list of pipeline activities.</p> <p>The list can be 1-25
     * <b>PipelineActivity</b> objects. Activities perform transformations on your
     * messages, such as removing, renaming, or adding message attributes; filtering
     * messages based on attribute values; invoking your Lambda functions on messages
     * for advanced processing; or performing mathematical transformations to normalize
     * device data.</p>
     */
    inline CreatePipelineRequest& AddPipelineActivities(PipelineActivity&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline CreatePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline CreatePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline CreatePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the pipeline.</p>
     */
    inline CreatePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::Vector<PipelineActivity> m_pipelineActivities;
    bool m_pipelineActivitiesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
