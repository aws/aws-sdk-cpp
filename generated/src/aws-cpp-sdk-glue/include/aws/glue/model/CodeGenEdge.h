﻿/**
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
    AWS_GLUE_API CodeGenEdge();
    AWS_GLUE_API CodeGenEdge(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenEdge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CodeGenEdge& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CodeGenEdge& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CodeGenEdge& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline CodeGenEdge& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline CodeGenEdge& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline CodeGenEdge& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the edge.</p>
     */
    inline const Aws::String& GetTargetParameter() const{ return m_targetParameter; }
    inline bool TargetParameterHasBeenSet() const { return m_targetParameterHasBeenSet; }
    inline void SetTargetParameter(const Aws::String& value) { m_targetParameterHasBeenSet = true; m_targetParameter = value; }
    inline void SetTargetParameter(Aws::String&& value) { m_targetParameterHasBeenSet = true; m_targetParameter = std::move(value); }
    inline void SetTargetParameter(const char* value) { m_targetParameterHasBeenSet = true; m_targetParameter.assign(value); }
    inline CodeGenEdge& WithTargetParameter(const Aws::String& value) { SetTargetParameter(value); return *this;}
    inline CodeGenEdge& WithTargetParameter(Aws::String&& value) { SetTargetParameter(std::move(value)); return *this;}
    inline CodeGenEdge& WithTargetParameter(const char* value) { SetTargetParameter(value); return *this;}
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
