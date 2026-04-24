/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MLSyntheticDataParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>The parameters that control how synthetic data is generated, including
 * privacy settings, column classifications, and other configuration options that
 * affect the data synthesis process.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SyntheticDataParameters">AWS
 * API Reference</a></p>
 */
class SyntheticDataParameters {
 public:
  AWS_CLEANROOMS_API SyntheticDataParameters() = default;
  AWS_CLEANROOMS_API SyntheticDataParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API SyntheticDataParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine learning-specific parameters for synthetic data generation.</p>
   */
  inline const MLSyntheticDataParameters& GetMlSyntheticDataParameters() const { return m_mlSyntheticDataParameters; }
  inline bool MlSyntheticDataParametersHasBeenSet() const { return m_mlSyntheticDataParametersHasBeenSet; }
  template <typename MlSyntheticDataParametersT = MLSyntheticDataParameters>
  void SetMlSyntheticDataParameters(MlSyntheticDataParametersT&& value) {
    m_mlSyntheticDataParametersHasBeenSet = true;
    m_mlSyntheticDataParameters = std::forward<MlSyntheticDataParametersT>(value);
  }
  template <typename MlSyntheticDataParametersT = MLSyntheticDataParameters>
  SyntheticDataParameters& WithMlSyntheticDataParameters(MlSyntheticDataParametersT&& value) {
    SetMlSyntheticDataParameters(std::forward<MlSyntheticDataParametersT>(value));
    return *this;
  }
  ///@}
 private:
  MLSyntheticDataParameters m_mlSyntheticDataParameters;
  bool m_mlSyntheticDataParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
