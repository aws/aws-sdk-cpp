/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the mapping of each data element in the streaming source to the
   * corresponding column in the in-application stream.</p> <p>Also used to describe
   * the format of the reference data source.</p>
   */
  class AWS_KINESISANALYTICS_API RecordColumn
  {
  public:
    RecordColumn();
    RecordColumn(const Aws::Utils::Json::JsonValue& jsonValue);
    RecordColumn& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline RecordColumn& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline const Aws::String& GetMapping() const{ return m_mapping; }

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline void SetMapping(const Aws::String& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline void SetMapping(Aws::String&& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline void SetMapping(const char* value) { m_mappingHasBeenSet = true; m_mapping.assign(value); }

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline RecordColumn& WithMapping(const Aws::String& value) { SetMapping(value); return *this;}

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
     */
    inline RecordColumn& WithMapping(Aws::String&& value) { SetMapping(value); return *this;}

    /**
     * <p>Reference to the data element in the streaming input of the reference data
     * source.</p>
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
    inline void SetSqlType(const Aws::String& value) { m_sqlTypeHasBeenSet = true; m_sqlType = value; }

    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(Aws::String&& value) { m_sqlTypeHasBeenSet = true; m_sqlType = value; }

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
    inline RecordColumn& WithSqlType(Aws::String&& value) { SetSqlType(value); return *this;}

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
