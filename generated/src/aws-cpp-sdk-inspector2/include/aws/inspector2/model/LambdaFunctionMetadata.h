/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Runtime.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Lambda function metadata.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionMetadata">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionMetadata
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionMetadata() = default;
    AWS_INSPECTOR2_API LambdaFunctionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource tags on an Amazon Web Services Lambda function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFunctionTags() const { return m_functionTags; }
    inline bool FunctionTagsHasBeenSet() const { return m_functionTagsHasBeenSet; }
    template<typename FunctionTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetFunctionTags(FunctionTagsT&& value) { m_functionTagsHasBeenSet = true; m_functionTags = std::forward<FunctionTagsT>(value); }
    template<typename FunctionTagsT = Aws::Map<Aws::String, Aws::String>>
    LambdaFunctionMetadata& WithFunctionTags(FunctionTagsT&& value) { SetFunctionTags(std::forward<FunctionTagsT>(value)); return *this;}
    template<typename FunctionTagsKeyT = Aws::String, typename FunctionTagsValueT = Aws::String>
    LambdaFunctionMetadata& AddFunctionTags(FunctionTagsKeyT&& key, FunctionTagsValueT&& value) {
      m_functionTagsHasBeenSet = true; m_functionTags.emplace(std::forward<FunctionTagsKeyT>(key), std::forward<FunctionTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The layers for an Amazon Web Services Lambda function. A Lambda function can
     * have up to five layers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayers() const { return m_layers; }
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
    template<typename LayersT = Aws::Vector<Aws::String>>
    void SetLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers = std::forward<LayersT>(value); }
    template<typename LayersT = Aws::Vector<Aws::String>>
    LambdaFunctionMetadata& WithLayers(LayersT&& value) { SetLayers(std::forward<LayersT>(value)); return *this;}
    template<typename LayersT = Aws::String>
    LambdaFunctionMetadata& AddLayers(LayersT&& value) { m_layersHasBeenSet = true; m_layers.emplace_back(std::forward<LayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a function.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    LambdaFunctionMetadata& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Lambda function's runtime.</p>
     */
    inline Runtime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(Runtime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline LambdaFunctionMetadata& WithRuntime(Runtime value) { SetRuntime(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_functionTags;
    bool m_functionTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_layers;
    bool m_layersHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Runtime m_runtime{Runtime::NOT_SET};
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
