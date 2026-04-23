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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Framework.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains information about the location of input model artifacts, the name
   * and shape of the expected data inputs, and the framework in which the model was
   * trained.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API InputConfig
  {
  public:
    InputConfig();
    InputConfig(Aws::Utils::Json::JsonView jsonValue);
    InputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline InputConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline InputConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline InputConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline const Aws::String& GetDataInputConfig() const{ return m_dataInputConfig; }

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline bool DataInputConfigHasBeenSet() const { return m_dataInputConfigHasBeenSet; }

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline void SetDataInputConfig(const Aws::String& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = value; }

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline void SetDataInputConfig(Aws::String&& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = std::move(value); }

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline void SetDataInputConfig(const char* value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig.assign(value); }

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline InputConfig& WithDataInputConfig(const Aws::String& value) { SetDataInputConfig(value); return *this;}

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline InputConfig& WithDataInputConfig(Aws::String&& value) { SetDataInputConfig(std::move(value)); return *this;}

    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. The data inputs are
     * <a>InputConfig$Framework</a> specific. </p> <ul> <li> <p>
     * <code>TensorFlow</code>: You must specify the name and shape (NHWC format) of
     * the expected data inputs using a dictionary format for your trained model. The
     * dictionary formats required for the console and CLI are different.</p> <ul> <li>
     * <p>Examples for one input:</p> <ul> <li> <p>If using the console,
     * <code>{"input":[1,1024,1024,3]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"input\":[1,1024,1024,3]}</code> </p> </li> </ul> </li> <li> <p>Examples
     * for two inputs:</p> <ul> <li> <p>If using the console, <code>{"data1":
     * [1,28,28,1], "data2":[1,28,28,1]}</code> </p> </li> <li> <p>If using the CLI,
     * <code>{\"data1\": [1,28,28,1], \"data2\":[1,28,28,1]}</code> </p> </li> </ul>
     * </li> </ul> </li> <li> <p> <code>MXNET/ONNX</code>: You must specify the name
     * and shape (NCHW format) of the expected data inputs in order using a dictionary
     * format for your trained model. The dictionary formats required for the console
     * and CLI are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li>
     * <p>If using the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li>
     * <p>If using the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul>
     * </li> <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"var1": [1,1,28,28], "var2":[1,1,28,28]} </code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"var1\": [1,1,28,28], \"var2\":[1,1,28,28]}</code> </p>
     * </li> </ul> </li> </ul> </li> <li> <p> <code>PyTorch</code>: You can either
     * specify the name and shape (NCHW format) of expected data inputs in order using
     * a dictionary format for your trained model or you can specify the shape only
     * using a list format. The dictionary formats required for the console and CLI are
     * different. The list formats for the console and CLI are the same.</p> <ul> <li>
     * <p>Examples for one input in dictionary format:</p> <ul> <li> <p>If using the
     * console, <code>{"input0":[1,3,224,224]}</code> </p> </li> <li> <p>If using the
     * CLI, <code>{\"input0\":[1,3,224,224]}</code> </p> </li> </ul> </li> <li>
     * <p>Example for one input in list format: <code>[[1,3,224,224]]</code> </p> </li>
     * <li> <p>Examples for two inputs in dictionary format:</p> <ul> <li> <p>If using
     * the console, <code>{"input0":[1,3,224,224], "input1":[1,3,224,224]}</code> </p>
     * </li> <li> <p>If using the CLI, <code>{\"input0\":[1,3,224,224],
     * \"input1\":[1,3,224,224]} </code> </p> </li> </ul> </li> <li> <p>Example for two
     * inputs in list format: <code>[[1,3,224,224], [1,3,224,224]]</code> </p> </li>
     * </ul> </li> <li> <p> <code>XGBOOST</code>: input data name and shape are not
     * needed.</p> </li> </ul>
     */
    inline InputConfig& WithDataInputConfig(const char* value) { SetDataInputConfig(value); return *this;}


    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline InputConfig& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p>Identifies the framework in which the model was trained. For example:
     * TENSORFLOW.</p>
     */
    inline InputConfig& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet;

    Framework m_framework;
    bool m_frameworkHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
