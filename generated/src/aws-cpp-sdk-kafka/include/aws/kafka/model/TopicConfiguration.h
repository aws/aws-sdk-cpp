/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/RecordConverter.h>
#include <aws/kafka/model/RecordSchema.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Configuration of an Apache Kafka topic that feeds a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TopicConfiguration">AWS
 * API Reference</a></p>
 */
class TopicConfiguration {
 public:
  AWS_KAFKA_API TopicConfiguration() = default;
  AWS_KAFKA_API TopicConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API TopicConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration that controls how Apache Kafka record values are deserialized
   * for the destination.</p>
   */
  inline const RecordConverter& GetRecordConverter() const { return m_recordConverter; }
  inline bool RecordConverterHasBeenSet() const { return m_recordConverterHasBeenSet; }
  template <typename RecordConverterT = RecordConverter>
  void SetRecordConverter(RecordConverterT&& value) {
    m_recordConverterHasBeenSet = true;
    m_recordConverter = std::forward<RecordConverterT>(value);
  }
  template <typename RecordConverterT = RecordConverter>
  TopicConfiguration& WithRecordConverter(RecordConverterT&& value) {
    SetRecordConverter(std::forward<RecordConverterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema used to validate records when the value converter requires one
   * (for example, JSON_SCHEMA_GSR).</p>
   */
  inline const RecordSchema& GetRecordSchema() const { return m_recordSchema; }
  inline bool RecordSchemaHasBeenSet() const { return m_recordSchemaHasBeenSet; }
  template <typename RecordSchemaT = RecordSchema>
  void SetRecordSchema(RecordSchemaT&& value) {
    m_recordSchemaHasBeenSet = true;
    m_recordSchema = std::forward<RecordSchemaT>(value);
  }
  template <typename RecordSchemaT = RecordSchema>
  TopicConfiguration& WithRecordSchema(RecordSchemaT&& value) {
    SetRecordSchema(std::forward<RecordSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) that uniquely identifies the
   * topic.</p>

   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  TopicConfiguration& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}
 private:
  RecordConverter m_recordConverter;

  RecordSchema m_recordSchema;

  Aws::String m_topicArn;
  bool m_recordConverterHasBeenSet = false;
  bool m_recordSchemaHasBeenSet = false;
  bool m_topicArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
