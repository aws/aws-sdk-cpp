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
  class AWS_GLUE_API CodeGenEdge
  {
  public:
    CodeGenEdge();
    CodeGenEdge(Aws::Utils::Json::JsonView jsonValue);
    CodeGenEdge& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline CodeGenEdge& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline CodeGenEdge& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The ID of the node at which the edge starts.</p>
     */
    inline CodeGenEdge& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline CodeGenEdge& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline CodeGenEdge& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ID of the node at which the edge ends.</p>
     */
    inline CodeGenEdge& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The target of the edge.</p>
     */
    inline const Aws::String& GetTargetParameter() const{ return m_targetParameter; }

    /**
     * <p>The target of the edge.</p>
     */
    inline bool TargetParameterHasBeenSet() const { return m_targetParameterHasBeenSet; }

    /**
     * <p>The target of the edge.</p>
     */
    inline void SetTargetParameter(const Aws::String& value) { m_targetParameterHasBeenSet = true; m_targetParameter = value; }

    /**
     * <p>The target of the edge.</p>
     */
    inline void SetTargetParameter(Aws::String&& value) { m_targetParameterHasBeenSet = true; m_targetParameter = std::move(value); }

    /**
     * <p>The target of the edge.</p>
     */
    inline void SetTargetParameter(const char* value) { m_targetParameterHasBeenSet = true; m_targetParameter.assign(value); }

    /**
     * <p>The target of the edge.</p>
     */
    inline CodeGenEdge& WithTargetParameter(const Aws::String& value) { SetTargetParameter(value); return *this;}

    /**
     * <p>The target of the edge.</p>
     */
    inline CodeGenEdge& WithTargetParameter(Aws::String&& value) { SetTargetParameter(std::move(value)); return *this;}

    /**
     * <p>The target of the edge.</p>
     */
    inline CodeGenEdge& WithTargetParameter(const char* value) { SetTargetParameter(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;

    Aws::String m_targetParameter;
    bool m_targetParameterHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
