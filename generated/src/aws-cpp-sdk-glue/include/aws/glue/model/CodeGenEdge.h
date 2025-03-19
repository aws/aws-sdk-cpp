/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a directional edge in a directed acyclic graph
   * (DAG).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CodeGenEdge">AWS
   * API Reference</a></p>
   */
  class CodeGenEdge
  {
  public:
    AWS_GLUE_API CodeGenEdge() = default;
    AWS_GLUE_API CodeGenEdge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenEdge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CodeGenEdge& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    CodeGenEdge& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the edge.</p>
     */
    inline const Aws::String& GetTargetParameter() const { return m_targetParameter; }
    inline bool TargetParameterHasBeenSet() const { return m_targetParameterHasBeenSet; }
    template<typename TargetParameterT = Aws::String>
    void SetTargetParameter(TargetParameterT&& value) { m_targetParameterHasBeenSet = true; m_targetParameter = std::forward<TargetParameterT>(value); }
    template<typename TargetParameterT = Aws::String>
    CodeGenEdge& WithTargetParameter(TargetParameterT&& value) { SetTargetParameter(std::forward<TargetParameterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_targetParameter;
    bool m_targetParameterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
