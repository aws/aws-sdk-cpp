﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For a SQL-based Kinesis Data Analytics application, describes the mapping of
   * each data element in the streaming source to the corresponding column in the
   * in-application stream.</p> <p>Also used to describe the format of the reference
   * data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RecordColumn">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API RecordColumn
  {
  public:
    RecordColumn();
    RecordColumn(Aws::Utils::Json::JsonView jsonValue);
    RecordColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline RecordColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline RecordColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline RecordColumn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline const Aws::String& GetMapping() const{ return m_mapping; }

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline void SetMapping(const Aws::String& value) { m_mappingHasBeenSet = true; m_mapping = value; }

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline void SetMapping(Aws::String&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline void SetMapping(const char* value) { m_mappingHasBeenSet = true; m_mapping.assign(value); }

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline RecordColumn& WithMapping(const Aws::String& value) { SetMapping(value); return *this;}

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline RecordColumn& WithMapping(Aws::String&& value) { SetMapping(std::move(value)); return *this;}

    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline RecordColumn& WithMapping(const char* value) { SetMapping(value); return *this;}


    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetSqlType() const{ return m_sqlType; }

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline bool SqlTypeHasBeenSet() const { return m_sqlTypeHasBeenSet; }

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(const Aws::String& value) { m_sqlTypeHasBeenSet = true; m_sqlType = value; }

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(Aws::String&& value) { m_sqlTypeHasBeenSet = true; m_sqlType = std::move(value); }

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline void SetSqlType(const char* value) { m_sqlTypeHasBeenSet = true; m_sqlType.assign(value); }

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithSqlType(const Aws::String& value) { SetSqlType(value); return *this;}

    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline RecordColumn& WithSqlType(Aws::String&& value) { SetSqlType(std::move(value)); return *this;}

    /**
     * <p>The type of column created in the in-application input stream or reference
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
