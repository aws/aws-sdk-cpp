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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/ReprocessingSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A summary of information about a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PipelineSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API PipelineSummary
  {
  public:
    PipelineSummary();
    PipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    PipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

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
    inline PipelineSummary& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline const Aws::Vector<ReprocessingSummary>& GetReprocessingSummaries() const{ return m_reprocessingSummaries; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline bool ReprocessingSummariesHasBeenSet() const { return m_reprocessingSummariesHasBeenSet; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline void SetReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = value; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline void SetReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries = std::move(value); }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline PipelineSummary& WithReprocessingSummaries(const Aws::Vector<ReprocessingSummary>& value) { SetReprocessingSummaries(value); return *this;}

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline PipelineSummary& WithReprocessingSummaries(Aws::Vector<ReprocessingSummary>&& value) { SetReprocessingSummaries(std::move(value)); return *this;}

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline PipelineSummary& AddReprocessingSummaries(const ReprocessingSummary& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(value); return *this; }

    /**
     * <p>A summary of information about the pipeline reprocessing.</p>
     */
    inline PipelineSummary& AddReprocessingSummaries(ReprocessingSummary&& value) { m_reprocessingSummariesHasBeenSet = true; m_reprocessingSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>When the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the pipeline was created.</p>
     */
    inline PipelineSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the pipeline was created.</p>
     */
    inline PipelineSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline PipelineSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>When the pipeline was last updated.</p>
     */
    inline PipelineSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::Vector<ReprocessingSummary> m_reprocessingSummaries;
    bool m_reprocessingSummariesHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
