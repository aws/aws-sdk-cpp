/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/CutoverStatus.h>
#include <aws/es/model/CutoverTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>The cutover target and status for a cloned blue/green upgrade.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CutoverOptions">AWS
 * API Reference</a></p>
 */
class CutoverOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API CutoverOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API CutoverOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API CutoverOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cluster that the domain is cutting over to.</p>
   */
  inline CutoverTarget GetTarget() const { return m_target; }
  inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
  inline void SetTarget(CutoverTarget value) {
    m_targetHasBeenSet = true;
    m_target = value;
  }
  inline CutoverOptions& WithTarget(CutoverTarget value) {
    SetTarget(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the cutover.</p>
   */
  inline CutoverStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CutoverStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CutoverOptions& WithStatus(CutoverStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  CutoverTarget m_target{CutoverTarget::NOT_SET};

  CutoverStatus m_status{CutoverStatus::NOT_SET};
  bool m_targetHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
