/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InputConfig
  {
  public:
    AWS_SAGEMAKER_API InputConfig();
    AWS_SAGEMAKER_API InputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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
     * </li> </ul> </li> <li> <p> <code>KERAS</code>: You must specify the name and
     * shape (NCHW format) of expected data inputs using a dictionary format for your
     * trained model. Note that while Keras model artifacts should be uploaded in NHWC
     * (channel-last) format, <code>DataInputConfig</code> should be specified in NCHW
     * (channel-first) format. The dictionary formats required for the console and CLI
     * are different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If
     * using the console, <code>{"input_1":[1,3,224,224]}</code> </p> </li> <li> <p>If
     * using the CLI, <code>{\"input_1\":[1,3,224,224]}</code> </p> </li> </ul> </li>
     * <li> <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
     * <code>{"input_1": [1,3,224,224], "input_2":[1,3,224,224]} </code> </p> </li>
     * <li> <p>If using the CLI, <code>{\"input_1\": [1,3,224,224],
     * \"input_2\":[1,3,224,224]}</code> </p> </li> </ul> </li> </ul> </li> <li> <p>
     * <code>MXNET/ONNX/DARKNET</code>: You must specify the name and shape (NCHW
     * format) of the expected data inputs in order using a dictionary format for your
     * trained model. The dictionary formats required for the console and CLI are
     * different.</p> <ul> <li> <p>Examples for one input:</p> <ul> <li> <p>If using
     * the console, <code>{"data":[1,3,1024,1024]}</code> </p> </li> <li> <p>If using
     * the CLI, <code>{\"data\":[1,3,1024,1024]}</code> </p> </li> </ul> </li> <li>
     * <p>Examples for two inputs:</p> <ul> <li> <p>If using the console,
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
     * needed.</p> </li> </ul> <p> <code>DataInputConfig</code> supports the following
     * parameters for <code>CoreML</code> <a>OutputConfig$TargetDevice</a> (ML Model
     * format):</p> <ul> <li> <p> <code>shape</code>: Input shape, for example
     * <code>{"input_1": {"shape": [1,224,224,3]}}</code>. In addition to static input
     * shapes, CoreML converter supports Flexible input shapes:</p> <ul> <li> <p>Range
     * Dimension. You can use the Range Dimension feature if you know the input shape
     * will be within some specific interval in that dimension, for example:
     * <code>{"input_1": {"shape": ["1..10", 224, 224, 3]}}</code> </p> </li> <li>
     * <p>Enumerated shapes. Sometimes, the models are trained to work only on a select
     * set of inputs. You can enumerate all supported input shapes, for example:
     * <code>{"input_1": {"shape": [[1, 224, 224, 3], [1, 160, 160, 3]]}}</code> </p>
     * </li> </ul> </li> <li> <p> <code>default_shape</code>: Default input shape. You
     * can set a default shape during conversion for both Range Dimension and
     * Enumerated Shapes. For example <code>{"input_1": {"shape": ["1..10", 224, 224,
     * 3], "default_shape": [1, 224, 224, 3]}}</code> </p> </li> <li> <p>
     * <code>type</code>: Input type. Allowed values: <code>Image</code> and
     * <code>Tensor</code>. By default, the converter generates an ML Model with inputs
     * of type Tensor (MultiArray). User can set input type to be Image. Image input
     * type requires additional input parameters such as <code>bias</code> and
     * <code>scale</code>.</p> </li> <li> <p> <code>bias</code>: If the input type is
     * an Image, you need to provide the bias vector.</p> </li> <li> <p>
     * <code>scale</code>: If the input type is an Image, you need to provide a scale
     * factor.</p> </li> </ul> <p>CoreML <code>ClassifierConfig</code> parameters can
     * be specified using <a>OutputConfig$CompilerOptions</a>. CoreML converter
     * supports Tensorflow and PyTorch models. CoreML conversion examples:</p> <ul>
     * <li> <p>Tensor type input:</p> <ul> <li> <p> <code>"DataInputConfig":
     * {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]], "default_shape":
     * [1,224,224,3]}}</code> </p> </li> </ul> </li> <li> <p>Tensor type input without
     * input name (PyTorch):</p> <ul> <li> <p> <code>"DataInputConfig": [{"shape":
     * [[1,3,224,224], [1,3,160,160]], "default_shape": [1,3,224,224]}]</code> </p>
     * </li> </ul> </li> <li> <p>Image type input:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_1": {"shape": [[1,224,224,3], [1,160,160,3]],
     * "default_shape": [1,224,224,3], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}}</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> <li>
     * <p>Image type input without input name (PyTorch):</p> <ul> <li> <p>
     * <code>"DataInputConfig": [{"shape": [[1,3,224,224], [1,3,160,160]],
     * "default_shape": [1,3,224,224], "type": "Image", "bias": [-1,-1,-1], "scale":
     * 0.007843137255}]</code> </p> </li> <li> <p> <code>"CompilerOptions":
     * {"class_labels": "imagenet_labels_1000.txt"}</code> </p> </li> </ul> </li> </ul>
     * <p>Depending on the model format, <code>DataInputConfig</code> requires the
     * following parameters for <code>ml_eia2</code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-TargetDevice">OutputConfig:TargetDevice</a>.</p>
     * <ul> <li> <p>For TensorFlow models saved in the SavedModel format, specify the
     * input names from <code>signature_def_key</code> and the input model shapes for
     * <code>DataInputConfig</code>. Specify the <code>signature_def_key</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a> if the model does not use
     * TensorFlow's default signature def key. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"inputs": [1, 224, 224, 3]}</code> </p> </li> <li> <p>
     * <code>"CompilerOptions": {"signature_def_key": "serving_custom"}</code> </p>
     * </li> </ul> </li> <li> <p>For TensorFlow models saved as a frozen graph, specify
     * the input tensor names and shapes in <code>DataInputConfig</code> and the output
     * tensor names for <code>output_names</code> in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OutputConfig.html#sagemaker-Type-OutputConfig-CompilerOptions">
     * <code>OutputConfig:CompilerOptions</code> </a>. For example:</p> <ul> <li> <p>
     * <code>"DataInputConfig": {"input_tensor:0": [1, 224, 224, 3]}</code> </p> </li>
     * <li> <p> <code>"CompilerOptions": {"output_names": ["output_tensor:0"]}</code>
     * </p> </li> </ul> </li> </ul>
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


    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline InputConfig& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline InputConfig& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the framework version to use. This API field is only supported for
     * the MXNet, PyTorch, TensorFlow and TensorFlow Lite frameworks.</p> <p>For
     * information about framework versions supported for cloud targets and edge
     * devices, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-cloud.html">Cloud
     * Supported Instance Types and Frameworks</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-supported-devices-edge-frameworks.html">Edge
     * Supported Frameworks</a>.</p>
     */
    inline InputConfig& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet = false;

    Framework m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
