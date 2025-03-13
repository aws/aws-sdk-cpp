/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>The data format is not valid. Kinesis Data Analytics cannot detect the schema
   * for the given streaming source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/UnableToDetectSchemaException">AWS
   * API Reference</a></p>
   */
  class UnableToDetectSchemaException
  {
  public:
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException() = default;
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnableToDetectSchemaException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
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
    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
