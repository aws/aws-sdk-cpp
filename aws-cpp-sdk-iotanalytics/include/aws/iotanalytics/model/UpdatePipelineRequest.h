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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/PipelineActivity.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API UpdatePipelineRequest : public IoTAnalyticsRequest
  {
  public:
    UpdatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline UpdatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline UpdatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline UpdatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline const Aws::Vector<PipelineActivity>& GetPipelineActivities() const{ return m_pipelineActivities; }

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline bool PipelineActivitiesHasBeenSet() const { return m_pipelineActivitiesHasBeenSet; }

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline void SetPipelineActivities(const Aws::Vector<PipelineActivity>& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities = value; }

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline void SetPipelineActivities(Aws::Vector<PipelineActivity>&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities = std::move(value); }

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline UpdatePipelineRequest& WithPipelineActivities(const Aws::Vector<PipelineActivity>& value) { SetPipelineActivities(value); return *this;}

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline UpdatePipelineRequest& WithPipelineActivities(Aws::Vector<PipelineActivity>&& value) { SetPipelineActivities(std::move(value)); return *this;}

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline UpdatePipelineRequest& AddPipelineActivities(const PipelineActivity& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities.push_back(value); return *this; }

    /**
     * <p>A list of "PipelineActivity" objects. Activities perform transformations on
     * your messages, such as removing, renaming or adding message attributes;
     * filtering messages based on attribute values; invoking your Lambda functions on
     * messages for advanced processing; or performing mathematical transformations to
     * normalize device data.</p> <p>The list can be 2-25 <b>PipelineActivity</b>
     * objects and must contain both a <code>channel</code> and a
     * <code>datastore</code> activity. Each entry in the list must contain only one
     * activity, for example:</p> <p> <code>pipelineActivities = [ { "channel": { ... }
     * }, { "lambda": { ... } }, ... ]</code> </p>
     */
    inline UpdatePipelineRequest& AddPipelineActivities(PipelineActivity&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::Vector<PipelineActivity> m_pipelineActivities;
    bool m_pipelineActivitiesHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
