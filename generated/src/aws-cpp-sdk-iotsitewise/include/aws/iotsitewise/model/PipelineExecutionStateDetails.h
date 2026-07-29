/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DetailedPipelineError.h>
#include <aws/iotsitewise/model/PipelineErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Additional information about the current execution status. Populated when the
 * execution has terminated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PipelineExecutionStateDetails">AWS
 * API Reference</a></p>
 */
class PipelineExecutionStateDetails {
 public:
  AWS_IOTSITEWISE_API PipelineExecutionStateDetails() = default;
  AWS_IOTSITEWISE_API PipelineExecutionStateDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API PipelineExecutionStateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Classification of the failure. Present when the execution failed.</p>
   */
  inline PipelineErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(PipelineErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline PipelineExecutionStateDetails& WithCode(PipelineErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable description of the outcome. For a failed execution, this
   * describes why it failed; for a cancelled execution, this is the reason you
   * supplied when calling CancelPipelineExecution.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  PipelineExecutionStateDetails& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-step error entries to help diagnose a failed execution. Present when the
   * execution failed.</p>
   */
  inline const Aws::Vector<DetailedPipelineError>& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::Vector<DetailedPipelineError>>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::Vector<DetailedPipelineError>>
  PipelineExecutionStateDetails& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  template <typename DetailsT = DetailedPipelineError>
  PipelineExecutionStateDetails& AddDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details.emplace_back(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  PipelineErrorCode m_code{PipelineErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::Vector<DetailedPipelineError> m_details;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
