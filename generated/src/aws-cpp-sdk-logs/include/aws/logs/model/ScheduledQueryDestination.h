/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ActionStatus.h>
#include <aws/logs/model/ScheduledQueryDestinationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Information about a destination where scheduled query results are processed
 * and delivered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ScheduledQueryDestination">AWS
 * API Reference</a></p>
 */
class ScheduledQueryDestination {
 public:
  AWS_CLOUDWATCHLOGS_API ScheduledQueryDestination() = default;
  AWS_CLOUDWATCHLOGS_API ScheduledQueryDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API ScheduledQueryDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of destination (S3 or EVENTBRIDGE).</p>
   */
  inline ScheduledQueryDestinationType GetDestinationType() const { return m_destinationType; }
  inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
  inline void SetDestinationType(ScheduledQueryDestinationType value) {
    m_destinationTypeHasBeenSet = true;
    m_destinationType = value;
  }
  inline ScheduledQueryDestination& WithDestinationType(ScheduledQueryDestinationType value) {
    SetDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination identifier (S3 URI or EventBridge ARN).</p>
   */
  inline const Aws::String& GetDestinationIdentifier() const { return m_destinationIdentifier; }
  inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }
  template <typename DestinationIdentifierT = Aws::String>
  void SetDestinationIdentifier(DestinationIdentifierT&& value) {
    m_destinationIdentifierHasBeenSet = true;
    m_destinationIdentifier = std::forward<DestinationIdentifierT>(value);
  }
  template <typename DestinationIdentifierT = Aws::String>
  ScheduledQueryDestination& WithDestinationIdentifier(DestinationIdentifierT&& value) {
    SetDestinationIdentifier(std::forward<DestinationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing status for this destination (IN_PROGRESS, ERROR, FAILED, or
   * COMPLETE).</p>
   */
  inline ActionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ActionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ScheduledQueryDestination& WithStatus(ActionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processed identifier returned for the destination (S3 key or event
   * ID).</p>
   */
  inline const Aws::String& GetProcessedIdentifier() const { return m_processedIdentifier; }
  inline bool ProcessedIdentifierHasBeenSet() const { return m_processedIdentifierHasBeenSet; }
  template <typename ProcessedIdentifierT = Aws::String>
  void SetProcessedIdentifier(ProcessedIdentifierT&& value) {
    m_processedIdentifierHasBeenSet = true;
    m_processedIdentifier = std::forward<ProcessedIdentifierT>(value);
  }
  template <typename ProcessedIdentifierT = Aws::String>
  ScheduledQueryDestination& WithProcessedIdentifier(ProcessedIdentifierT&& value) {
    SetProcessedIdentifier(std::forward<ProcessedIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error message if the destination processing failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  ScheduledQueryDestination& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ScheduledQueryDestinationType m_destinationType{ScheduledQueryDestinationType::NOT_SET};
  bool m_destinationTypeHasBeenSet = false;

  Aws::String m_destinationIdentifier;
  bool m_destinationIdentifierHasBeenSet = false;

  ActionStatus m_status{ActionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_processedIdentifier;
  bool m_processedIdentifierHasBeenSet = false;

  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
