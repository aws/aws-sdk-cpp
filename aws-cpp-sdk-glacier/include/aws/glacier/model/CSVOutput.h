/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/QuoteFields.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the comma-separated value (CSV) file that the job
   * results are stored in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CSVOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API CSVOutput
  {
  public:
    CSVOutput();
    CSVOutput(Aws::Utils::Json::JsonView jsonValue);
    CSVOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline const QuoteFields& GetQuoteFields() const{ return m_quoteFields; }

    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline bool QuoteFieldsHasBeenSet() const { return m_quoteFieldsHasBeenSet; }

    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline void SetQuoteFields(const QuoteFields& value) { m_quoteFieldsHasBeenSet = true; m_quoteFields = value; }

    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline void SetQuoteFields(QuoteFields&& value) { m_quoteFieldsHasBeenSet = true; m_quoteFields = std::move(value); }

    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline CSVOutput& WithQuoteFields(const QuoteFields& value) { SetQuoteFields(value); return *this;}

    /**
     * <p>A value that indicates whether all output fields should be contained within
     * quotation marks.</p>
     */
    inline CSVOutput& WithQuoteFields(QuoteFields&& value) { SetQuoteFields(std::move(value)); return *this;}


    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline const Aws::String& GetQuoteEscapeCharacter() const{ return m_quoteEscapeCharacter; }

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline bool QuoteEscapeCharacterHasBeenSet() const { return m_quoteEscapeCharacterHasBeenSet; }

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline void SetQuoteEscapeCharacter(const Aws::String& value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter = value; }

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline void SetQuoteEscapeCharacter(Aws::String&& value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter = std::move(value); }

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline void SetQuoteEscapeCharacter(const char* value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter.assign(value); }

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline CSVOutput& WithQuoteEscapeCharacter(const Aws::String& value) { SetQuoteEscapeCharacter(value); return *this;}

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline CSVOutput& WithQuoteEscapeCharacter(Aws::String&& value) { SetQuoteEscapeCharacter(std::move(value)); return *this;}

    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline CSVOutput& WithQuoteEscapeCharacter(const char* value) { SetQuoteEscapeCharacter(value); return *this;}


    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline const Aws::String& GetRecordDelimiter() const{ return m_recordDelimiter; }

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline bool RecordDelimiterHasBeenSet() const { return m_recordDelimiterHasBeenSet; }

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline void SetRecordDelimiter(const Aws::String& value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter = value; }

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline void SetRecordDelimiter(Aws::String&& value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter = std::move(value); }

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline void SetRecordDelimiter(const char* value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter.assign(value); }

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline CSVOutput& WithRecordDelimiter(const Aws::String& value) { SetRecordDelimiter(value); return *this;}

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline CSVOutput& WithRecordDelimiter(Aws::String&& value) { SetRecordDelimiter(std::move(value)); return *this;}

    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline CSVOutput& WithRecordDelimiter(const char* value) { SetRecordDelimiter(value); return *this;}


    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const{ return m_fieldDelimiter; }

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline void SetFieldDelimiter(const Aws::String& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = value; }

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline void SetFieldDelimiter(Aws::String&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::move(value); }

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline void SetFieldDelimiter(const char* value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter.assign(value); }

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline CSVOutput& WithFieldDelimiter(const Aws::String& value) { SetFieldDelimiter(value); return *this;}

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline CSVOutput& WithFieldDelimiter(Aws::String&& value) { SetFieldDelimiter(std::move(value)); return *this;}

    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline CSVOutput& WithFieldDelimiter(const char* value) { SetFieldDelimiter(value); return *this;}


    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline const Aws::String& GetQuoteCharacter() const{ return m_quoteCharacter; }

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline void SetQuoteCharacter(const Aws::String& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = value; }

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline void SetQuoteCharacter(Aws::String&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::move(value); }

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline void SetQuoteCharacter(const char* value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter.assign(value); }

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline CSVOutput& WithQuoteCharacter(const Aws::String& value) { SetQuoteCharacter(value); return *this;}

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline CSVOutput& WithQuoteCharacter(Aws::String&& value) { SetQuoteCharacter(std::move(value)); return *this;}

    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline CSVOutput& WithQuoteCharacter(const char* value) { SetQuoteCharacter(value); return *this;}

  private:

    QuoteFields m_quoteFields;
    bool m_quoteFieldsHasBeenSet;

    Aws::String m_quoteEscapeCharacter;
    bool m_quoteEscapeCharacterHasBeenSet;

    Aws::String m_recordDelimiter;
    bool m_recordDelimiterHasBeenSet;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet;

    Aws::String m_quoteCharacter;
    bool m_quoteCharacterHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
