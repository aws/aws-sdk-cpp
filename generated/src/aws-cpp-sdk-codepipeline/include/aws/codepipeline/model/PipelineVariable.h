/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A pipeline-level variable used for a pipeline execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineVariable">AWS
   * API Reference</a></p>
   */
  class PipelineVariable
  {
  public:
    AWS_CODEPIPELINE_API PipelineVariable();
    AWS_CODEPIPELINE_API PipelineVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a pipeline-level variable.</p>
     */
    inline PipelineVariable& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
