/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

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
 * <p>Filters <a>ListChannels</a> results by source stream.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StreamFilter">AWS
 * API Reference</a></p>
 */
class StreamFilter {
 public:
  AWS_KINESIS_API StreamFilter() = default;
  AWS_KINESIS_API StreamFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API StreamFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source stream to filter by.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  StreamFilter& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The creation timestamp of the source stream.</p>
   */
  inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const { return m_streamCreationTimestamp; }
  inline bool StreamCreationTimestampHasBeenSet() const { return m_streamCreationTimestampHasBeenSet; }
  template <typename StreamCreationTimestampT = Aws::Utils::DateTime>
  void SetStreamCreationTimestamp(StreamCreationTimestampT&& value) {
    m_streamCreationTimestampHasBeenSet = true;
    m_streamCreationTimestamp = std::forward<StreamCreationTimestampT>(value);
  }
  template <typename StreamCreationTimestampT = Aws::Utils::DateTime>
  StreamFilter& WithStreamCreationTimestamp(StreamCreationTimestampT&& value) {
    SetStreamCreationTimestamp(std::forward<StreamCreationTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  Aws::Utils::DateTime m_streamCreationTimestamp{};
  bool m_streamARNHasBeenSet = false;
  bool m_streamCreationTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
