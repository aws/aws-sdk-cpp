/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/RetentionAction.h>

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
 * <p>Controls how long the cluster that you cut over from is kept after cutover
 * completes. Specify exactly one of <code>RetentionInHours</code> or
 * <code>RetentionAction</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RetentionOptions">AWS
 * API Reference</a></p>
 */
class RetentionOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API RetentionOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API RetentionOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API RetentionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of hours to keep the cluster that you cut over from. The retention
   * period starts when cutover completes. The minimum is 1 hour. In an
   * <code>UpdateClone</code> response after cutover completes, this value is the
   * number of hours remaining in the retention period, rounded up.</p>
   */
  inline int GetRetentionInHours() const { return m_retentionInHours; }
  inline bool RetentionInHoursHasBeenSet() const { return m_retentionInHoursHasBeenSet; }
  inline void SetRetentionInHours(int value) {
    m_retentionInHoursHasBeenSet = true;
    m_retentionInHours = value;
  }
  inline RetentionOptions& WithRetentionInHours(int value) {
    SetRetentionInHours(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ends the retention period now. Valid only after cutover completes.</p>
   */
  inline RetentionAction GetRetentionAction() const { return m_retentionAction; }
  inline bool RetentionActionHasBeenSet() const { return m_retentionActionHasBeenSet; }
  inline void SetRetentionAction(RetentionAction value) {
    m_retentionActionHasBeenSet = true;
    m_retentionAction = value;
  }
  inline RetentionOptions& WithRetentionAction(RetentionAction value) {
    SetRetentionAction(value);
    return *this;
  }
  ///@}
 private:
  int m_retentionInHours{0};

  RetentionAction m_retentionAction{RetentionAction::NOT_SET};
  bool m_retentionInHoursHasBeenSet = false;
  bool m_retentionActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
