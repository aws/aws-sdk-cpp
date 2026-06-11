/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/NlpStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <para>The natural language processing (NLP) configuration for a data
 * store.</para><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/NlpConfiguration">AWS
 * API Reference</a></p>
 */
class NlpConfiguration {
 public:
  AWS_HEALTHLAKE_API NlpConfiguration() = default;
  AWS_HEALTHLAKE_API NlpConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API NlpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <para>The status of the NLP configuration.</para>
   */
  inline NlpStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NlpStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NlpConfiguration& WithStatus(NlpStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  NlpStatus m_status{NlpStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
