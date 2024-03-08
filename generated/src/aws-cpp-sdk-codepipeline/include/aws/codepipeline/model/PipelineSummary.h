/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineType.h>
#include <aws/codepipeline/model/ExecutionMode.h>
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
   * <p>Returns a summary of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineSummary">AWS
   * API Reference</a></p>
   */
  class PipelineSummary
  {
  public:
    AWS_CODEPIPELINE_API PipelineSummary();
    AWS_CODEPIPELINE_API PipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version number of the pipeline.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the pipeline.</p>
     */
    inline PipelineSummary& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline const PipelineType& GetPipelineType() const{ return m_pipelineType; }

    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline bool PipelineTypeHasBeenSet() const { return m_pipelineTypeHasBeenSet; }

    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline void SetPipelineType(const PipelineType& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = value; }

    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline void SetPipelineType(PipelineType&& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = std::move(value); }

    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline PipelineSummary& WithPipelineType(const PipelineType& value) { SetPipelineType(value); return *this;}

    /**
     * <p>CodePipeline provides the following pipeline types, which differ in
     * characteristics and price, so that you can tailor your pipeline features and
     * cost to the needs of your applications.</p> <ul> <li> <p>V1 type pipelines have
     * a JSON structure that contains standard pipeline, stage, and action-level
     * parameters.</p> </li> <li> <p>V2 type pipelines have the same structure as a V1
     * type, along with additional parameters for release safety and trigger
     * configuration.</p> </li> </ul>  <p>Including V2 parameters, such as
     * triggers on Git tags, in the pipeline JSON when creating or updating a pipeline
     * will result in the pipeline having the V2 type of pipeline and the associated
     * costs.</p>  <p>For information about pricing for CodePipeline, see
     * <a href="http://aws.amazon.com/codepipeline/pricing/">Pricing</a>.</p> <p> For
     * information about which type of pipeline to choose, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types-planning.html">What
     * type of pipeline is right for me?</a>.</p>
     */
    inline PipelineSummary& WithPipelineType(PipelineType&& value) { SetPipelineType(std::move(value)); return *this;}


    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline const ExecutionMode& GetExecutionMode() const{ return m_executionMode; }

    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }

    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline void SetExecutionMode(const ExecutionMode& value) { m_executionModeHasBeenSet = true; m_executionMode = value; }

    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline void SetExecutionMode(ExecutionMode&& value) { m_executionModeHasBeenSet = true; m_executionMode = std::move(value); }

    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline PipelineSummary& WithExecutionMode(const ExecutionMode& value) { SetExecutionMode(value); return *this;}

    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline PipelineSummary& WithExecutionMode(ExecutionMode&& value) { SetExecutionMode(std::move(value)); return *this;}


    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updatedHasBeenSet = true; m_updated = value; }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updatedHasBeenSet = true; m_updated = std::move(value); }

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline PipelineSummary& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}

    /**
     * <p>The date and time of the last update to the pipeline, in timestamp
     * format.</p>
     */
    inline PipelineSummary& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    PipelineType m_pipelineType;
    bool m_pipelineTypeHasBeenSet = false;

    ExecutionMode m_executionMode;
    bool m_executionModeHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_updated;
    bool m_updatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
