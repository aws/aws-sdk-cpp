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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides additional mapping information when the record format uses
   * delimiters, such as CSV. For example, the following sample records use CSV
   * format, where the records use the <i>'\n'</i> as the row delimiter and a comma
   * (",") as the column delimiter: </p> <p> <code>"name1", "address1"</code> </p>
   * <p> <code>"name2", "address2"</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CSVMappingParameters">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API CSVMappingParameters
  {
  public:
    CSVMappingParameters();
    CSVMappingParameters(Aws::Utils::Json::JsonView jsonValue);
    CSVMappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline const Aws::String& GetRecordRowDelimiter() const{ return m_recordRowDelimiter; }

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline bool RecordRowDelimiterHasBeenSet() const { return m_recordRowDelimiterHasBeenSet; }

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline void SetRecordRowDelimiter(const Aws::String& value) { m_recordRowDelimiterHasBeenSet = true; m_recordRowDelimiter = value; }

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline void SetRecordRowDelimiter(Aws::String&& value) { m_recordRowDelimiterHasBeenSet = true; m_recordRowDelimiter = std::move(value); }

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline void SetRecordRowDelimiter(const char* value) { m_recordRowDelimiterHasBeenSet = true; m_recordRowDelimiter.assign(value); }

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordRowDelimiter(const Aws::String& value) { SetRecordRowDelimiter(value); return *this;}

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordRowDelimiter(Aws::String&& value) { SetRecordRowDelimiter(std::move(value)); return *this;}

    /**
     * <p>Row delimiter. For example, in a CSV format, <i>'\n'</i> is the typical row
     * delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordRowDelimiter(const char* value) { SetRecordRowDelimiter(value); return *this;}


    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline const Aws::String& GetRecordColumnDelimiter() const{ return m_recordColumnDelimiter; }

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline bool RecordColumnDelimiterHasBeenSet() const { return m_recordColumnDelimiterHasBeenSet; }

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline void SetRecordColumnDelimiter(const Aws::String& value) { m_recordColumnDelimiterHasBeenSet = true; m_recordColumnDelimiter = value; }

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline void SetRecordColumnDelimiter(Aws::String&& value) { m_recordColumnDelimiterHasBeenSet = true; m_recordColumnDelimiter = std::move(value); }

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline void SetRecordColumnDelimiter(const char* value) { m_recordColumnDelimiterHasBeenSet = true; m_recordColumnDelimiter.assign(value); }

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordColumnDelimiter(const Aws::String& value) { SetRecordColumnDelimiter(value); return *this;}

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordColumnDelimiter(Aws::String&& value) { SetRecordColumnDelimiter(std::move(value)); return *this;}

    /**
     * <p>Column delimiter. For example, in a CSV format, a comma (",") is the typical
     * column delimiter.</p>
     */
    inline CSVMappingParameters& WithRecordColumnDelimiter(const char* value) { SetRecordColumnDelimiter(value); return *this;}

  private:

    Aws::String m_recordRowDelimiter;
    bool m_recordRowDelimiterHasBeenSet;

    Aws::String m_recordColumnDelimiter;
    bool m_recordColumnDelimiterHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
