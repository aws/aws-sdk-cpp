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
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ResolvedPipelineVariable">AWS
   * API Reference</a></p>
   */
  class ResolvedPipelineVariable
  {
  public:
    AWS_CODEPIPELINE_API ResolvedPipelineVariable();
    AWS_CODEPIPELINE_API ResolvedPipelineVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ResolvedPipelineVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ResolvedPipelineVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline ResolvedPipelineVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline ResolvedPipelineVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetResolvedValue() const{ return m_resolvedValue; }

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline bool ResolvedValueHasBeenSet() const { return m_resolvedValueHasBeenSet; }

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline void SetResolvedValue(const Aws::String& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = value; }

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline void SetResolvedValue(Aws::String&& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = std::move(value); }

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline void SetResolvedValue(const char* value) { m_resolvedValueHasBeenSet = true; m_resolvedValue.assign(value); }

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline ResolvedPipelineVariable& WithResolvedValue(const Aws::String& value) { SetResolvedValue(value); return *this;}

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline ResolvedPipelineVariable& WithResolvedValue(Aws::String&& value) { SetResolvedValue(std::move(value)); return *this;}

    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline ResolvedPipelineVariable& WithResolvedValue(const char* value) { SetResolvedValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resolvedValue;
    bool m_resolvedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
