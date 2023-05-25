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
    AWS_CODEPIPELINE_API PipelineMetadata();
    AWS_CODEPIPELINE_API PipelineMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineMetadata& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineMetadata& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineMetadata& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


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
    inline PipelineMetadata& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline PipelineMetadata& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline bool UpdatedHasBeenSet() const { return m_updatedHasBeenSet; }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updatedHasBeenSet = true; m_updated = value; }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updatedHasBeenSet = true; m_updated = std::move(value); }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline PipelineMetadata& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline PipelineMetadata& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_updated;
    bool m_updatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
