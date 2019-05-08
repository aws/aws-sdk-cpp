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
   * <p>Describes the mapping of each data element in the streaming source to the
   * corresponding column in the in-application stream.</p> <p>Also used to describe
   * the format of the reference data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/RecordColumn">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API RecordColumn
  {
  public:
    RecordColumn();
    RecordColumn(Aws::Utils::Json::JsonView jsonValue);
    RecordColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline const Aws::String& GetMapping() const{ return m_mapping; }

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline void SetMapping(const Aws::String& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline void SetMapping(Aws::String&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline void SetMapping(const char* value) { m_mappingHasBeenSet = true; m_mapping.assign(value); }

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline RecordColumn& WithMapping(const Aws::String& value) { SetMapping(value); return *this;}

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline RecordColumn& WithMapping(Aws::String&& value) { SetMapping(std::move(value)); return *this;}

    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline RecordColumn& WithMapping(const char* value) { SetMapping(value); return *this;}


    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetSqlType() const{ return m_sqlType; }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline bool SqlTypeHasBeenSet() const { return m_sqlTypeHasBeenSet; }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(const Aws::String& value) { m_sqlTypeHasBeenSet = true; m_sqlType = value; }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(Aws::String&& value) { m_sqlTypeHasBeenSet = true; m_sqlType = std::move(value); }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(const char* value) { m_sqlTypeHasBeenSet = true; m_sqlType.assign(value); }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithSqlType(const Aws::String& value) { SetSqlType(value); return *this;}

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithSqlType(Aws::String&& value) { SetSqlType(std::move(value)); return *this;}

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithSqlType(const char* value) { SetSqlType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_mapping;
    bool m_mappingHasBeenSet;

    Aws::String m_sqlType;
    bool m_sqlTypeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
