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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/MLModelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class AWS_MACHINELEARNING_API CreateMLModelRequest : public MachineLearningRequest
  {
  public:
    CreateMLModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMLModel"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMLModelName() const{ return m_mLModelName; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline bool MLModelNameHasBeenSet() const { return m_mLModelNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(const Aws::String& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = value; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(Aws::String&& value) { m_mLModelNameHasBeenSet = true; m_mLModelName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetMLModelName(const char* value) { m_mLModelNameHasBeenSet = true; m_mLModelName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelName(const Aws::String& value) { SetMLModelName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelName(Aws::String&& value) { SetMLModelName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline CreateMLModelRequest& WithMLModelName(const char* value) { SetMLModelName(value); return *this;}


    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline const MLModelType& GetMLModelType() const{ return m_mLModelType; }

    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline bool MLModelTypeHasBeenSet() const { return m_mLModelTypeHasBeenSet; }

    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline void SetMLModelType(const MLModelType& value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = value; }

    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline void SetMLModelType(MLModelType&& value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = std::move(value); }

    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline CreateMLModelRequest& WithMLModelType(const MLModelType& value) { SetMLModelType(value); return *this;}

    /**
     * <p>The category of supervised learning that this <code>MLModel</code> will
     * address. Choose from the following types:</p> <ul> <li>Choose
     * <code>REGRESSION</code> if the <code>MLModel</code> will be used to predict a
     * numeric value.</li> <li>Choose <code>BINARY</code> if the <code>MLModel</code>
     * result has two possible values.</li> <li>Choose <code>MULTICLASS</code> if the
     * <code>MLModel</code> result has a limited number of values. </li> </ul> <p> For
     * more information, see the <a
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>.</p>
     */
    inline CreateMLModelRequest& WithMLModelType(MLModelType&& value) { SetMLModelType(std::move(value)); return *this;}


    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key-value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li> <p><code>sgd.maxMLModelSizeInBytes</code>
     * - The maximum allowed size of the model. Depending on the input data, the size
     * of the model might affect its performance.</p> <p> The value is an integer that
     * ranges from <code>100000</code> to <code>2147483648</code>. The default value is
     * <code>33554432</code>.</p> </li> <li><p><code>sgd.maxPasses</code> - The number
     * of times that the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from <code>1</code> to
     * <code>10000</code>. The default value is <code>10</code>.</p></li> <li>
     * <p><code>sgd.shuffleType</code> - Whether Amazon ML shuffles the training data.
     * Shuffling the data improves a model's ability to find the optimal solution for a
     * variety of data types. The valid values are <code>auto</code> and
     * <code>none</code>. The default value is <code>none</code>. We <?oxy_insert_start
     * author="laurama" timestamp="20160329T131121-0700">strongly recommend that you
     * shuffle your data.<?oxy_insert_end></p> </li> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - The coefficient regularization L1
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to zero, resulting in a sparse feature set. If you
     * use this parameter, start by specifying a small value, such as
     * <code>1.0E-08</code>.</p> <p>The value is a double that ranges from
     * <code>0</code> to <code>MAX_DOUBLE</code>. The default is to not use L1
     * normalization. This parameter can't be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - The coefficient regularization L2
     * norm. It controls overfitting the data by penalizing large coefficients. This
     * tends to drive coefficients to small, nonzero values. If you use this parameter,
     * start by specifying a small value, such as <code>1.0E-08</code>.</p> <p>The
     * value is a double that ranges from <code>0</code> to <code>MAX_DOUBLE</code>.
     * The default is to not use L2 normalization. This parameter can't be used when
     * <code>L1</code> is specified. Use this parameter sparingly.</p> </li> </ul>
     */
    inline CreateMLModelRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline const Aws::String& GetTrainingDataSourceId() const{ return m_trainingDataSourceId; }

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline bool TrainingDataSourceIdHasBeenSet() const { return m_trainingDataSourceIdHasBeenSet; }

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline void SetTrainingDataSourceId(const Aws::String& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = value; }

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline void SetTrainingDataSourceId(Aws::String&& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = std::move(value); }

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline void SetTrainingDataSourceId(const char* value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId.assign(value); }

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline CreateMLModelRequest& WithTrainingDataSourceId(const Aws::String& value) { SetTrainingDataSourceId(value); return *this;}

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline CreateMLModelRequest& WithTrainingDataSourceId(Aws::String&& value) { SetTrainingDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The <code>DataSource</code> that points to the training data.</p>
     */
    inline CreateMLModelRequest& WithTrainingDataSourceId(const char* value) { SetTrainingDataSourceId(value); return *this;}


    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline const Aws::String& GetRecipe() const{ return m_recipe; }

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline bool RecipeHasBeenSet() const { return m_recipeHasBeenSet; }

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline void SetRecipe(const Aws::String& value) { m_recipeHasBeenSet = true; m_recipe = value; }

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline void SetRecipe(Aws::String&& value) { m_recipeHasBeenSet = true; m_recipe = std::move(value); }

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline void SetRecipe(const char* value) { m_recipeHasBeenSet = true; m_recipe.assign(value); }

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline CreateMLModelRequest& WithRecipe(const Aws::String& value) { SetRecipe(value); return *this;}

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline CreateMLModelRequest& WithRecipe(Aws::String&& value) { SetRecipe(std::move(value)); return *this;}

    /**
     * <p>The data recipe for creating the <code>MLModel</code>. You must specify
     * either the recipe or its URI. If you don't specify a recipe or its URI, Amazon
     * ML creates a default.</p>
     */
    inline CreateMLModelRequest& WithRecipe(const char* value) { SetRecipe(value); return *this;}


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline const Aws::String& GetRecipeUri() const{ return m_recipeUri; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline bool RecipeUriHasBeenSet() const { return m_recipeUriHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline void SetRecipeUri(const Aws::String& value) { m_recipeUriHasBeenSet = true; m_recipeUri = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline void SetRecipeUri(Aws::String&& value) { m_recipeUriHasBeenSet = true; m_recipeUri = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline void SetRecipeUri(const char* value) { m_recipeUriHasBeenSet = true; m_recipeUri.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline CreateMLModelRequest& WithRecipeUri(const Aws::String& value) { SetRecipeUri(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline CreateMLModelRequest& WithRecipeUri(Aws::String&& value) { SetRecipeUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) location and file name that
     * contains the <code>MLModel</code> recipe. You must specify either the recipe or
     * its URI. If you don't specify a recipe or its URI, Amazon ML creates a
     * default.</p>
     */
    inline CreateMLModelRequest& WithRecipeUri(const char* value) { SetRecipeUri(value); return *this;}

  private:

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_mLModelName;
    bool m_mLModelNameHasBeenSet;

    MLModelType m_mLModelType;
    bool m_mLModelTypeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_trainingDataSourceId;
    bool m_trainingDataSourceIdHasBeenSet;

    Aws::String m_recipe;
    bool m_recipeHasBeenSet;

    Aws::String m_recipeUri;
    bool m_recipeUriHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
