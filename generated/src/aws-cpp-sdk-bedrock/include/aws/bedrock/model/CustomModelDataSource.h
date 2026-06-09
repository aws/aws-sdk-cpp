/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ModelPackageArnDataSource.h>

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
 * <p>The data source for a custom model. This is a union type that supports the
 * following member:</p> <ul> <li> <p> <code>modelPackageArnDataSource</code> —
 * Specifies a SageMaker AI model package as the data source.</p> </li>
 * </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomModelDataSource">AWS
 * API Reference</a></p>
 */
class CustomModelDataSource {
 public:
  AWS_BEDROCK_API CustomModelDataSource() = default;
  AWS_BEDROCK_API CustomModelDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API CustomModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A SageMaker AI model package ARN as the data source for the custom model.
   * When you specify a model package ARN, Amazon Bedrock resolves the model package
   * to retrieve the model artifacts.</p>
   */
  inline const ModelPackageArnDataSource& GetModelPackageArnDataSource() const { return m_modelPackageArnDataSource; }
  inline bool ModelPackageArnDataSourceHasBeenSet() const { return m_modelPackageArnDataSourceHasBeenSet; }
  template <typename ModelPackageArnDataSourceT = ModelPackageArnDataSource>
  void SetModelPackageArnDataSource(ModelPackageArnDataSourceT&& value) {
    m_modelPackageArnDataSourceHasBeenSet = true;
    m_modelPackageArnDataSource = std::forward<ModelPackageArnDataSourceT>(value);
  }
  template <typename ModelPackageArnDataSourceT = ModelPackageArnDataSource>
  CustomModelDataSource& WithModelPackageArnDataSource(ModelPackageArnDataSourceT&& value) {
    SetModelPackageArnDataSource(std::forward<ModelPackageArnDataSourceT>(value));
    return *this;
  }
  ///@}
 private:
  ModelPackageArnDataSource m_modelPackageArnDataSource;
  bool m_modelPackageArnDataSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
