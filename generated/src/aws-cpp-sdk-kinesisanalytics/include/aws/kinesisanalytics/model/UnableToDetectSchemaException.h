/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Data format is not valid. Amazon Kinesis Analytics is not able to detect
   * schema for the given streaming source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UnableToDetectSchemaException">AWS
   * API Reference</a></p>
   */
  class UnableToDetectSchemaException
  {
  public:
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException() = default;
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnableToDetectSchemaException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const { return m_rawInputRecords; }
    inline bool RawInputRecordsHasBeenSet() const { return m_rawInputRecordsHasBeenSet; }
    template<typename RawInputRecordsT = Aws::Vector<Aws::String>>
    void SetRawInputRecords(RawInputRecordsT&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = std::forward<RawInputRecordsT>(value); }
    template<typename RawInputRecordsT = Aws::Vector<Aws::String>>
    UnableToDetectSchemaException& WithRawInputRecords(RawInputRecordsT&& value) { SetRawInputRecords(std::forward<RawInputRecordsT>(value)); return *this;}
    template<typename RawInputRecordsT = Aws::String>
    UnableToDetectSchemaException& AddRawInputRecords(RawInputRecordsT&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.emplace_back(std::forward<RawInputRecordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const { return m_processedInputRecords; }
    inline bool ProcessedInputRecordsHasBeenSet() const { return m_processedInputRecordsHasBeenSet; }
    template<typename ProcessedInputRecordsT = Aws::Vector<Aws::String>>
    void SetProcessedInputRecords(ProcessedInputRecordsT&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = std::forward<ProcessedInputRecordsT>(value); }
    template<typename ProcessedInputRecordsT = Aws::Vector<Aws::String>>
    UnableToDetectSchemaException& WithProcessedInputRecords(ProcessedInputRecordsT&& value) { SetProcessedInputRecords(std::forward<ProcessedInputRecordsT>(value)); return *this;}
    template<typename ProcessedInputRecordsT = Aws::String>
    UnableToDetectSchemaException& AddProcessedInputRecords(ProcessedInputRecordsT&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.emplace_back(std::forward<ProcessedInputRecordsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_rawInputRecords;
    bool m_rawInputRecordsHasBeenSet = false;

    Aws::Vector<Aws::String> m_processedInputRecords;
    bool m_processedInputRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
