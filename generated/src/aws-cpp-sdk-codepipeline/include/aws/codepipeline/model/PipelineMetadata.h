/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Information about a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineMetadata">AWS
   * API Reference</a></p>
   */
  class PipelineMetadata
  {
  public:
    AWS_CODEPIPELINE_API PipelineMetadata() = default;
    AWS_CODEPIPELINE_API PipelineMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineMetadata& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    PipelineMetadata& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const { return m_updated; }
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }
    template<typename UpdatedT = Aws::Utils::DateTime>
    void SetUpdated(UpdatedT&& value) { m_updatedHasBeenSet = true; m_updated = std::forward<UpdatedT>(value); }
    template<typename UpdatedT = Aws::Utils::DateTime>
    PipelineMetadata& WithUpdated(UpdatedT&& value) { SetUpdated(std::forward<UpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that polling for source changes (periodic checks) was
     * stopped for the pipeline, in timestamp format. </p>  <p>Pipelines
     * that are inactive for longer than 30 days will have polling disabled for the
     * pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#metadata.pollingDisabledAt">pollingDisabledAt</a>
     * in the pipeline structure reference. For the steps to migrate your pipeline from
     * polling to event-based change detection, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/update-change-detection.html">Migrate
     * polling pipelines to use event-based change detection</a>.</p> 
     * <p>You can migrate (update) a polling pipeline to use event-based change
     * detection. For example, for a pipeline with a CodeCommit source, we recommend
     * you migrate (update) your pipeline to use CloudWatch Events. To learn more, see
     * <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/update-change-detection.html">Migrate
     * polling pipelines to use event-based change detection</a> in the <i>CodePipeline
     * User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetPollingDisabledAt() const { return m_pollingDisabledAt; }
    inline bool PollingDisabledAtHasBeenSet() const { return m_pollingDisabledAtHasBeenSet; }
    template<typename PollingDisabledAtT = Aws::Utils::DateTime>
    void SetPollingDisabledAt(PollingDisabledAtT&& value) { m_pollingDisabledAtHasBeenSet = true; m_pollingDisabledAt = std::forward<PollingDisabledAtT>(value); }
    template<typename PollingDisabledAtT = Aws::Utils::DateTime>
    PipelineMetadata& WithPollingDisabledAt(PollingDisabledAtT&& value) { SetPollingDisabledAt(std::forward<PollingDisabledAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_updated{};
    bool m_updatedHasBeenSet = false;

    Aws::Utils::DateTime m_pollingDisabledAt{};
    bool m_pollingDisabledAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
