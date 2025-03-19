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
    AWS_CODEPIPELINE_API ResolvedPipelineVariable() = default;
    AWS_CODEPIPELINE_API ResolvedPipelineVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ResolvedPipelineVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolvedPipelineVariable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resolved value of a pipeline-level variable.</p>
     */
    inline const Aws::String& GetResolvedValue() const { return m_resolvedValue; }
    inline bool ResolvedValueHasBeenSet() const { return m_resolvedValueHasBeenSet; }
    template<typename ResolvedValueT = Aws::String>
    void SetResolvedValue(ResolvedValueT&& value) { m_resolvedValueHasBeenSet = true; m_resolvedValue = std::forward<ResolvedValueT>(value); }
    template<typename ResolvedValueT = Aws::String>
    ResolvedPipelineVariable& WithResolvedValue(ResolvedValueT&& value) { SetResolvedValue(std::forward<ResolvedValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resolvedValue;
    bool m_resolvedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
