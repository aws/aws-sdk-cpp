/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PipelineConfig
  {
  public:
    AWS_APPSYNC_API PipelineConfig() = default;
    AWS_APPSYNC_API PipelineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API PipelineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>Function</code> objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFunctions() const { return m_functions; }
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }
    template<typename FunctionsT = Aws::Vector<Aws::String>>
    void SetFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions = std::forward<FunctionsT>(value); }
    template<typename FunctionsT = Aws::Vector<Aws::String>>
    PipelineConfig& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsT = Aws::String>
    PipelineConfig& AddFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions.emplace_back(std::forward<FunctionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
