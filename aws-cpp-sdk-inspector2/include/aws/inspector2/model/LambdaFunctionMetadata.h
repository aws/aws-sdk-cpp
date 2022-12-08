/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The AWS Lambda function metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionMetadata">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionMetadata
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionMetadata();
    AWS_INSPECTOR2_API LambdaFunctionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of a function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of a function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of a function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of a function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of a function.</p>
     */
    inline LambdaFunctionMetadata& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of a function.</p>
     */
    inline LambdaFunctionMetadata& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of a function.</p>
     */
    inline LambdaFunctionMetadata& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFunctionTags() const{ return m_functionTags; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline bool FunctionTagsHasBeenSet() const { return m_functionTagsHasBeenSet; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline void SetFunctionTags(const Aws::Map<Aws::String, Aws::String>& value) { m_functionTagsHasBeenSet = true; m_functionTags = value; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline void SetFunctionTags(Aws::Map<Aws::String, Aws::String>&& value) { m_functionTagsHasBeenSet = true; m_functionTags = std::move(value); }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& WithFunctionTags(const Aws::Map<Aws::String, Aws::String>& value) { SetFunctionTags(value); return *this;}

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& WithFunctionTags(Aws::Map<Aws::String, Aws::String>&& value) { SetFunctionTags(std::move(value)); return *this;}

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(const Aws::String& key, const Aws::String& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(key, value); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(Aws::String&& key, const Aws::String& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(const Aws::String& key, Aws::String&& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(Aws::String&& key, Aws::String&& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(const char* key, Aws::String&& value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(Aws::String&& key, const char* value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The resource tags on an AWS Lambda function.</p>
     */
    inline LambdaFunctionMetadata& AddFunctionTags(const char* key, const char* value) { m_functionTagsHasBeenSet = true; m_functionTags.emplace(key, value); return *this; }


    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayers() const{ return m_layers; }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline void SetLayers(const Aws::Vector<Aws::String>& value) { m_layersHasBeenSet = true; m_layers = value; }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline void SetLayers(Aws::Vector<Aws::String>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline LambdaFunctionMetadata& WithLayers(const Aws::Vector<Aws::String>& value) { SetLayers(value); return *this;}

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline LambdaFunctionMetadata& WithLayers(Aws::Vector<Aws::String>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline LambdaFunctionMetadata& AddLayers(const Aws::String& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline LambdaFunctionMetadata& AddLayers(Aws::String&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }

    /**
     * <p>The layers for an AWS Lambda function. A Lambda function can have up to five
     * layers.</p>
     */
    inline LambdaFunctionMetadata& AddLayers(const char* value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }


    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }

    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline LambdaFunctionMetadata& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}

    /**
     * <p>An AWS Lambda function's runtime.</p>
     */
    inline LambdaFunctionMetadata& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_functionTags;
    bool m_functionTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_layers;
    bool m_layersHasBeenSet = false;

    Runtime m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
