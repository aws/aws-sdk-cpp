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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The pipeline configuration for a resolver of kind
   * <code>PIPELINE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/PipelineConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API PipelineConfig
  {
  public:
    PipelineConfig();
    PipelineConfig(Aws::Utils::Json::JsonView jsonValue);
    PipelineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctions() const{ return m_functions; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline void SetFunctions(const Aws::Vector<Aws::String>& value) { m_functionsHasBeenSet = true; m_functions = value; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline void SetFunctions(Aws::Vector<Aws::String>&& value) { m_functionsHasBeenSet = true; m_functions = std::move(value); }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline PipelineConfig& WithFunctions(const Aws::Vector<Aws::String>& value) { SetFunctions(value); return *this;}

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline PipelineConfig& WithFunctions(Aws::Vector<Aws::String>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline PipelineConfig& AddFunctions(const Aws::String& value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline PipelineConfig& AddFunctions(Aws::String&& value) { m_functionsHasBeenSet = true; m_functions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline PipelineConfig& AddFunctions(const char* value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_functions;
    bool m_functionsHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
