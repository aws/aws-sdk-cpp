/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeNodeErrorCode.h>
#include <aws/iotsitewise/model/DetailedPipelineError.h>

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
 * <p>Additional information about a compute node that has failed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputeNodeExecutionStateDetails">AWS
 * API Reference</a></p>
 */
class ComputeNodeExecutionStateDetails {
 public:
  AWS_IOTSITEWISE_API ComputeNodeExecutionStateDetails() = default;
  AWS_IOTSITEWISE_API ComputeNodeExecutionStateDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ComputeNodeExecutionStateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Classification of the failure.</p>
   */
  inline ComputeNodeErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(ComputeNodeErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline ComputeNodeExecutionStateDetails& WithCode(ComputeNodeErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable description of why the compute node failed.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ComputeNodeExecutionStateDetails& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed error entries to help diagnose the failure.</p>
   */
  inline const Aws::Vector<DetailedPipelineError>& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::Vector<DetailedPipelineError>>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::Vector<DetailedPipelineError>>
  ComputeNodeExecutionStateDetails& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  template <typename DetailsT = DetailedPipelineError>
  ComputeNodeExecutionStateDetails& AddDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details.emplace_back(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ComputeNodeErrorCode m_code{ComputeNodeErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::Vector<DetailedPipelineError> m_details;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_detailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
