/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

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
 * <p>Payment configuration for synthetic data generation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SyntheticDataGenerationPaymentConfig">AWS
 * API Reference</a></p>
 */
class SyntheticDataGenerationPaymentConfig {
 public:
  AWS_CLEANROOMS_API SyntheticDataGenerationPaymentConfig() = default;
  AWS_CLEANROOMS_API SyntheticDataGenerationPaymentConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API SyntheticDataGenerationPaymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates who is responsible for paying for synthetic data generation.</p>
   */
  inline bool GetIsResponsible() const { return m_isResponsible; }
  inline bool IsResponsibleHasBeenSet() const { return m_isResponsibleHasBeenSet; }
  inline void SetIsResponsible(bool value) {
    m_isResponsibleHasBeenSet = true;
    m_isResponsible = value;
  }
  inline SyntheticDataGenerationPaymentConfig& WithIsResponsible(bool value) {
    SetIsResponsible(value);
    return *this;
  }
  ///@}
 private:
  bool m_isResponsible{false};
  bool m_isResponsibleHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
