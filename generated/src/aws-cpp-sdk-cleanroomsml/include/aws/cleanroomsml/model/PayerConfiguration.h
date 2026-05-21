/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRoomsML {
namespace Model {

/**
 * <p>Specifies which member accounts are responsible for paying for compute and
 * synthetic data generation costs in a Clean Rooms ML collaboration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PayerConfiguration">AWS
 * API Reference</a></p>
 */
class PayerConfiguration {
 public:
  AWS_CLEANROOMSML_API PayerConfiguration() = default;
  AWS_CLEANROOMSML_API PayerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API PayerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account ID of the member that is responsible for paying compute
   * costs.</p>
   */
  inline const Aws::String& GetComputePayerAccountId() const { return m_computePayerAccountId; }
  inline bool ComputePayerAccountIdHasBeenSet() const { return m_computePayerAccountIdHasBeenSet; }
  template <typename ComputePayerAccountIdT = Aws::String>
  void SetComputePayerAccountId(ComputePayerAccountIdT&& value) {
    m_computePayerAccountIdHasBeenSet = true;
    m_computePayerAccountId = std::forward<ComputePayerAccountIdT>(value);
  }
  template <typename ComputePayerAccountIdT = Aws::String>
  PayerConfiguration& WithComputePayerAccountId(ComputePayerAccountIdT&& value) {
    SetComputePayerAccountId(std::forward<ComputePayerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the member that is responsible for paying synthetic data
   * generation costs.</p>
   */
  inline const Aws::String& GetSyntheticDataPayerAccountId() const { return m_syntheticDataPayerAccountId; }
  inline bool SyntheticDataPayerAccountIdHasBeenSet() const { return m_syntheticDataPayerAccountIdHasBeenSet; }
  template <typename SyntheticDataPayerAccountIdT = Aws::String>
  void SetSyntheticDataPayerAccountId(SyntheticDataPayerAccountIdT&& value) {
    m_syntheticDataPayerAccountIdHasBeenSet = true;
    m_syntheticDataPayerAccountId = std::forward<SyntheticDataPayerAccountIdT>(value);
  }
  template <typename SyntheticDataPayerAccountIdT = Aws::String>
  PayerConfiguration& WithSyntheticDataPayerAccountId(SyntheticDataPayerAccountIdT&& value) {
    SetSyntheticDataPayerAccountId(std::forward<SyntheticDataPayerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_computePayerAccountId;

  Aws::String m_syntheticDataPayerAccountId;
  bool m_computePayerAccountIdHasBeenSet = false;
  bool m_syntheticDataPayerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
