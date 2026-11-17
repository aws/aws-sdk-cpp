/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueStartingPosition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The data stream a queue delivers records from, and the position in that
 * stream where delivery begins.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/QueueStreamConfiguration">AWS
 * API Reference</a></p>
 */
class QueueStreamConfiguration {
 public:
  AWS_KINESIS_API QueueStreamConfiguration() = default;
  AWS_KINESIS_API QueueStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API QueueStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the data stream.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  QueueStreamConfiguration& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The position in the stream from which the queue begins delivering records.
   * The default is <code>LATEST</code>.</p>
   */
  inline const QueueStartingPosition& GetStartingPosition() const { return m_startingPosition; }
  inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
  template <typename StartingPositionT = QueueStartingPosition>
  void SetStartingPosition(StartingPositionT&& value) {
    m_startingPositionHasBeenSet = true;
    m_startingPosition = std::forward<StartingPositionT>(value);
  }
  template <typename StartingPositionT = QueueStartingPosition>
  QueueStreamConfiguration& WithStartingPosition(StartingPositionT&& value) {
    SetStartingPosition(std::forward<StartingPositionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  QueueStartingPosition m_startingPosition;
  bool m_streamARNHasBeenSet = false;
  bool m_startingPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
