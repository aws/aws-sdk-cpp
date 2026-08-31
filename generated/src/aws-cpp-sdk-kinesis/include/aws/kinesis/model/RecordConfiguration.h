/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/RecordFormatType.h>

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
 * <p>Specifies the format of records read from the source stream.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/RecordConfiguration">AWS
 * API Reference</a></p>
 */
class RecordConfiguration {
 public:
  AWS_KINESIS_API RecordConfiguration() = default;
  AWS_KINESIS_API RecordConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API RecordConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of records on the source stream. Valid values:</p> <ul> <li> <p>
   * <code>GSR_JSON</code> - Supported only for streaming table (Amazon S3 Tables)
   * destinations.</p> </li> <li> <p> <code>JSON</code> - Supported for both general
   * purpose Amazon S3 and streaming table destinations.</p> </li> <li> <p>
   * <code>STRING</code> - Supported only for general purpose Amazon S3
   * destinations.</p> </li> <li> <p> <code>BYTE_ARRAY</code> - Supported only for
   * general purpose Amazon S3 destinations.</p> </li> </ul>
   */
  inline RecordFormatType GetRecordFormatType() const { return m_recordFormatType; }
  inline bool RecordFormatTypeHasBeenSet() const { return m_recordFormatTypeHasBeenSet; }
  inline void SetRecordFormatType(RecordFormatType value) {
    m_recordFormatTypeHasBeenSet = true;
    m_recordFormatType = value;
  }
  inline RecordConfiguration& WithRecordFormatType(RecordFormatType value) {
    SetRecordFormatType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Glue Schema
   * Registry schema used to validate records. Required when the channel destination
   * is a streaming table (Amazon S3 Tables), for both the <code>JSON</code> and
   * <code>GSR_JSON</code> record formats.</p>
   */
  inline const Aws::String& GetGSRSchemaARN() const { return m_gSRSchemaARN; }
  inline bool GSRSchemaARNHasBeenSet() const { return m_gSRSchemaARNHasBeenSet; }
  template <typename GSRSchemaARNT = Aws::String>
  void SetGSRSchemaARN(GSRSchemaARNT&& value) {
    m_gSRSchemaARNHasBeenSet = true;
    m_gSRSchemaARN = std::forward<GSRSchemaARNT>(value);
  }
  template <typename GSRSchemaARNT = Aws::String>
  RecordConfiguration& WithGSRSchemaARN(GSRSchemaARNT&& value) {
    SetGSRSchemaARN(std::forward<GSRSchemaARNT>(value));
    return *this;
  }
  ///@}
 private:
  RecordFormatType m_recordFormatType{RecordFormatType::NOT_SET};

  Aws::String m_gSRSchemaARN;
  bool m_recordFormatTypeHasBeenSet = false;
  bool m_gSRSchemaARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
