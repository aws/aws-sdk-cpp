/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/StreamFailureErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {

/**
 * <p>Stream status reason with error and timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/StatusReason">AWS
 * API Reference</a></p>
 */
class StatusReason {
 public:
  AWS_DSQL_API StatusReason() = default;
  AWS_DSQL_API StatusReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API StatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code for the stream failure.</p>
   */
  inline StreamFailureErrorCode GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(StreamFailureErrorCode value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline StatusReason& WithError(StreamFailureErrorCode value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  StatusReason& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  StreamFailureErrorCode m_error{StreamFailureErrorCode::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_errorHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
