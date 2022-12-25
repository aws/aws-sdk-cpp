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
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException();
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API UnableToDetectSchemaException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnableToDetectSchemaException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnableToDetectSchemaException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnableToDetectSchemaException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetRawInputRecords() const{ return m_rawInputRecords; }

    
    inline bool RawInputRecordsHasBeenSet() const { return m_rawInputRecordsHasBeenSet; }

    
    inline void SetRawInputRecords(const Aws::Vector<Aws::String>& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = value; }

    
    inline void SetRawInputRecords(Aws::Vector<Aws::String>&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords = std::move(value); }

    
    inline UnableToDetectSchemaException& WithRawInputRecords(const Aws::Vector<Aws::String>& value) { SetRawInputRecords(value); return *this;}

    
    inline UnableToDetectSchemaException& WithRawInputRecords(Aws::Vector<Aws::String>&& value) { SetRawInputRecords(std::move(value)); return *this;}

    
    inline UnableToDetectSchemaException& AddRawInputRecords(const Aws::String& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(value); return *this; }

    
    inline UnableToDetectSchemaException& AddRawInputRecords(Aws::String&& value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(std::move(value)); return *this; }

    
    inline UnableToDetectSchemaException& AddRawInputRecords(const char* value) { m_rawInputRecordsHasBeenSet = true; m_rawInputRecords.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetProcessedInputRecords() const{ return m_processedInputRecords; }

    
    inline bool ProcessedInputRecordsHasBeenSet() const { return m_processedInputRecordsHasBeenSet; }

    
    inline void SetProcessedInputRecords(const Aws::Vector<Aws::String>& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = value; }

    
    inline void SetProcessedInputRecords(Aws::Vector<Aws::String>&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords = std::move(value); }

    
    inline UnableToDetectSchemaException& WithProcessedInputRecords(const Aws::Vector<Aws::String>& value) { SetProcessedInputRecords(value); return *this;}

    
    inline UnableToDetectSchemaException& WithProcessedInputRecords(Aws::Vector<Aws::String>&& value) { SetProcessedInputRecords(std::move(value)); return *this;}

    
    inline UnableToDetectSchemaException& AddProcessedInputRecords(const Aws::String& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.push_back(value); return *this; }

    
    inline UnableToDetectSchemaException& AddProcessedInputRecords(Aws::String&& value) { m_processedInputRecordsHasBeenSet = true; m_processedInputRecords.push_back(std::move(value)); return *this; }

    
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
} // namespace KinesisAnalytics
} // namespace Aws
