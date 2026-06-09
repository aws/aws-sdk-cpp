/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Contains the Amazon Resource Name (ARN) of a SageMaker AI model package to
 * use as the data source for a custom model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ModelPackageArnDataSource">AWS
 * API Reference</a></p>
 */
class ModelPackageArnDataSource {
 public:
  AWS_BEDROCK_API ModelPackageArnDataSource() = default;
  AWS_BEDROCK_API ModelPackageArnDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API ModelPackageArnDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker AI model package. The ARN
   * must be for a model package of <code>restricted</code> type.</p> <p>To use a
   * model package ARN, you must have the <code>sagemaker:DescribeModelPackage</code>
   * and <code>sagemaker:AccessModelPackageData</code> permissions on the model
   * package resource.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  ModelPackageArnDataSource& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageArn;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
