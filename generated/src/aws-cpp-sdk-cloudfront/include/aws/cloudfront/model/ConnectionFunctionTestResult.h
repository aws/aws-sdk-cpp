/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConnectionFunctionSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>A connection function test result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ConnectionFunctionTestResult">AWS
 * API Reference</a></p>
 */
class ConnectionFunctionTestResult {
 public:
  AWS_CLOUDFRONT_API ConnectionFunctionTestResult() = default;
  AWS_CLOUDFRONT_API ConnectionFunctionTestResult(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API ConnectionFunctionTestResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The connection function summary.</p>
   */
  inline const ConnectionFunctionSummary& GetConnectionFunctionSummary() const { return m_connectionFunctionSummary; }
  inline bool ConnectionFunctionSummaryHasBeenSet() const { return m_connectionFunctionSummaryHasBeenSet; }
  template <typename ConnectionFunctionSummaryT = ConnectionFunctionSummary>
  void SetConnectionFunctionSummary(ConnectionFunctionSummaryT&& value) {
    m_connectionFunctionSummaryHasBeenSet = true;
    m_connectionFunctionSummary = std::forward<ConnectionFunctionSummaryT>(value);
  }
  template <typename ConnectionFunctionSummaryT = ConnectionFunctionSummary>
  ConnectionFunctionTestResult& WithConnectionFunctionSummary(ConnectionFunctionSummaryT&& value) {
    SetConnectionFunctionSummary(std::forward<ConnectionFunctionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function compute utilization.</p>
   */
  inline const Aws::String& GetComputeUtilization() const { return m_computeUtilization; }
  inline bool ComputeUtilizationHasBeenSet() const { return m_computeUtilizationHasBeenSet; }
  template <typename ComputeUtilizationT = Aws::String>
  void SetComputeUtilization(ComputeUtilizationT&& value) {
    m_computeUtilizationHasBeenSet = true;
    m_computeUtilization = std::forward<ComputeUtilizationT>(value);
  }
  template <typename ComputeUtilizationT = Aws::String>
  ConnectionFunctionTestResult& WithComputeUtilization(ComputeUtilizationT&& value) {
    SetComputeUtilization(std::forward<ComputeUtilizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function execution logs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConnectionFunctionExecutionLogs() const { return m_connectionFunctionExecutionLogs; }
  inline bool ConnectionFunctionExecutionLogsHasBeenSet() const { return m_connectionFunctionExecutionLogsHasBeenSet; }
  template <typename ConnectionFunctionExecutionLogsT = Aws::Vector<Aws::String>>
  void SetConnectionFunctionExecutionLogs(ConnectionFunctionExecutionLogsT&& value) {
    m_connectionFunctionExecutionLogsHasBeenSet = true;
    m_connectionFunctionExecutionLogs = std::forward<ConnectionFunctionExecutionLogsT>(value);
  }
  template <typename ConnectionFunctionExecutionLogsT = Aws::Vector<Aws::String>>
  ConnectionFunctionTestResult& WithConnectionFunctionExecutionLogs(ConnectionFunctionExecutionLogsT&& value) {
    SetConnectionFunctionExecutionLogs(std::forward<ConnectionFunctionExecutionLogsT>(value));
    return *this;
  }
  template <typename ConnectionFunctionExecutionLogsT = Aws::String>
  ConnectionFunctionTestResult& AddConnectionFunctionExecutionLogs(ConnectionFunctionExecutionLogsT&& value) {
    m_connectionFunctionExecutionLogsHasBeenSet = true;
    m_connectionFunctionExecutionLogs.emplace_back(std::forward<ConnectionFunctionExecutionLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function error message.</p>
   */
  inline const Aws::String& GetConnectionFunctionErrorMessage() const { return m_connectionFunctionErrorMessage; }
  inline bool ConnectionFunctionErrorMessageHasBeenSet() const { return m_connectionFunctionErrorMessageHasBeenSet; }
  template <typename ConnectionFunctionErrorMessageT = Aws::String>
  void SetConnectionFunctionErrorMessage(ConnectionFunctionErrorMessageT&& value) {
    m_connectionFunctionErrorMessageHasBeenSet = true;
    m_connectionFunctionErrorMessage = std::forward<ConnectionFunctionErrorMessageT>(value);
  }
  template <typename ConnectionFunctionErrorMessageT = Aws::String>
  ConnectionFunctionTestResult& WithConnectionFunctionErrorMessage(ConnectionFunctionErrorMessageT&& value) {
    SetConnectionFunctionErrorMessage(std::forward<ConnectionFunctionErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function output.</p>
   */
  inline const Aws::String& GetConnectionFunctionOutput() const { return m_connectionFunctionOutput; }
  inline bool ConnectionFunctionOutputHasBeenSet() const { return m_connectionFunctionOutputHasBeenSet; }
  template <typename ConnectionFunctionOutputT = Aws::String>
  void SetConnectionFunctionOutput(ConnectionFunctionOutputT&& value) {
    m_connectionFunctionOutputHasBeenSet = true;
    m_connectionFunctionOutput = std::forward<ConnectionFunctionOutputT>(value);
  }
  template <typename ConnectionFunctionOutputT = Aws::String>
  ConnectionFunctionTestResult& WithConnectionFunctionOutput(ConnectionFunctionOutputT&& value) {
    SetConnectionFunctionOutput(std::forward<ConnectionFunctionOutputT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectionFunctionSummary m_connectionFunctionSummary;
  bool m_connectionFunctionSummaryHasBeenSet = false;

  Aws::String m_computeUtilization;
  bool m_computeUtilizationHasBeenSet = false;

  Aws::Vector<Aws::String> m_connectionFunctionExecutionLogs;
  bool m_connectionFunctionExecutionLogsHasBeenSet = false;

  Aws::String m_connectionFunctionErrorMessage;
  bool m_connectionFunctionErrorMessageHasBeenSet = false;

  Aws::String m_connectionFunctionOutput;
  bool m_connectionFunctionOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
