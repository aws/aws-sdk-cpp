/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/RecordConfiguration.h>

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
 * <p>Specifies the source stream and record configuration when creating a
 * channel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChannelStreamConfiguration">AWS
 * API Reference</a></p>
 */
class ChannelStreamConfiguration {
 public:
  AWS_KINESIS_API ChannelStreamConfiguration() = default;
  AWS_KINESIS_API ChannelStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API ChannelStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source Kinesis data stream.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  ChannelStreamConfiguration& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record format configuration for the source stream.</p>
   */
  inline const RecordConfiguration& GetRecordConfiguration() const { return m_recordConfiguration; }
  inline bool RecordConfigurationHasBeenSet() const { return m_recordConfigurationHasBeenSet; }
  template <typename RecordConfigurationT = RecordConfiguration>
  void SetRecordConfiguration(RecordConfigurationT&& value) {
    m_recordConfigurationHasBeenSet = true;
    m_recordConfiguration = std::forward<RecordConfigurationT>(value);
  }
  template <typename RecordConfigurationT = RecordConfiguration>
  ChannelStreamConfiguration& WithRecordConfiguration(RecordConfigurationT&& value) {
    SetRecordConfiguration(std::forward<RecordConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamARN;

  RecordConfiguration m_recordConfiguration;
  bool m_streamARNHasBeenSet = false;
  bool m_recordConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
