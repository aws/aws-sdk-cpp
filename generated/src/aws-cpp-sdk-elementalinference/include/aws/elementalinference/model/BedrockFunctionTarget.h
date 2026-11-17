/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/BedrockApi.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>An Amazon Bedrock model to invoke. Elemental Inference invokes the model in
 * your account by assuming the feed's access role, so a feed that runs this
 * function must specify an accessRoleArn. The invocation is subject to your Amazon
 * Bedrock quotas and appears on your bill. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/BedrockFunctionTarget">AWS
 * API Reference</a></p>
 */
class BedrockFunctionTarget {
 public:
  AWS_ELEMENTALINFERENCE_API BedrockFunctionTarget() = default;
  AWS_ELEMENTALINFERENCE_API BedrockFunctionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API BedrockFunctionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Bedrock API to call. The only valid value is INVOKE_MODEL.</p>
   */
  inline BedrockApi GetApi() const { return m_api; }
  inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
  inline void SetApi(BedrockApi value) {
    m_apiHasBeenSet = true;
    m_api = value;
  }
  inline BedrockFunctionTarget& WithApi(BedrockApi value) {
    SetApi(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model to invoke. Specify one of the following:</p> <ul> <li> <p>A model
   * ID.</p> </li> <li> <p>An inference profile ID.</p> </li> <li> <p>The ARN of a
   * custom model.</p> </li> <li> <p>The ARN of a provisioned model.</p> </li> </ul>
   * <p>Elemental Inference invokes the model in the Region of the feed. To use a
   * model in other Regions, specify a cross-Region inference profile ID. A custom or
   * provisioned model must be in the Region of the feed. </p> <p>The request
   * expression must produce a request body that this model accepts, and the model
   * must accept the kind of media that the request expression references. For
   * example, a text-only model can't accept a request that references media.frames.
   * </p>
   */
  inline const Aws::String& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = Aws::String>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Aws::String>
  BedrockFunctionTarget& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockApi m_api{BedrockApi::NOT_SET};

  Aws::String m_model;
  bool m_apiHasBeenSet = false;
  bool m_modelHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
