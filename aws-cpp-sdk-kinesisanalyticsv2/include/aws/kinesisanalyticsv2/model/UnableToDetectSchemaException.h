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
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException();
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API UnableToDetectSchemaException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnableToDetectSchemaException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnableToDetectSchemaException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnableToDetectSchemaException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const{ return m_rawInputRecords; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline bool RawInputRecordsHasBeenSet() const { return m_rawInputRecordsHasBeenSet; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline void SetRawInputRecords(const Aws::Vector<Aws::String>& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = value; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline void SetRawInputRecords(Aws::Vector<Aws::String>&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = std::move(value); }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline UnableToDetectSchemaException& WithRawInputRecords(const Aws::Vector<Aws::String>& value) { SetRawInputRecords(value); return *this;}

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline UnableToDetectSchemaException& WithRawInputRecords(Aws::Vector<Aws::String>&& value) { SetRawInputRecords(std::move(value)); return *this;}

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline UnableToDetectSchemaException& AddRawInputRecords(const Aws::String& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(value); return *this; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline UnableToDetectSchemaException& AddRawInputRecords(Aws::String&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(std::move(value)); return *this; }

    /**
     * <p>Raw stream data that was sampled to infer the schema.</p>
     */
    inline UnableToDetectSchemaException& AddRawInputRecords(const char* value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(value); return *this; }


    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const{ return m_processedInputRecords; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline bool ProcessedInputRecordsHasBeenSet() const { return m_processedInputRecordsHasBeenSet; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline void SetProcessedInputRecords(const Aws::Vector<Aws::String>& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = value; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline void SetProcessedInputRecords(Aws::Vector<Aws::String>&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = std::move(value); }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline UnableToDetectSchemaException& WithProcessedInputRecords(const Aws::Vector<Aws::String>& value) { SetProcessedInputRecords(value); return *this;}

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline UnableToDetectSchemaException& WithProcessedInputRecords(Aws::Vector<Aws::String>&& value) { SetProcessedInputRecords(std::move(value)); return *this;}

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline UnableToDetectSchemaException& AddProcessedInputRecords(const Aws::String& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.push_back(value); return *this; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline UnableToDetectSchemaException& AddProcessedInputRecords(Aws::String&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.push_back(std::move(value)); return *this; }

    /**
     * <p>Stream data that was modified by the processor specified in the
     * <code>InputProcessingConfiguration</code> parameter. </p>
     */
    inline UnableToDetectSchemaException& AddProcessedInputRecords(const char* value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.push_back(value); return *this; }

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
