/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RecordColumn
  {
  public:
    AWS_KINESISANALYTICS_API RecordColumn();
    AWS_KINESISANALYTICS_API RecordColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API RecordColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecordColumn& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecordColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecordColumn& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the data element in the streaming input or the reference data
     * source. This element is required if the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_RecordFormat.html#analytics-Type-RecordFormat-RecordFormatTypel">RecordFormatType</a>
     * is <code>JSON</code>.</p>
     */
    inline const Aws::String& GetMapping() const{ return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    inline void SetMapping(const Aws::String& value) { m_mappingHasBeenSet = true; m_mapping = value; }
    inline void SetMapping(Aws::String&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }
    inline void SetMapping(const char* value) { m_mappingHasBeenSet = true; m_mapping.assign(value); }
    inline RecordColumn& WithMapping(const Aws::String& value) { SetMapping(value); return *this;}
    inline RecordColumn& WithMapping(Aws::String&& value) { SetMapping(std::move(value)); return *this;}
    inline RecordColumn& WithMapping(const char* value) { SetMapping(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetSqlType() const{ return m_sqlType; }
    inline bool SqlTypeHasBeenSet() const { return m_sqlTypeHasBeenSet; }
    inline void SetSqlType(const Aws::String& value) { m_sqlTypeHasBeenSet = true; m_sqlType = value; }
    inline void SetSqlType(Aws::String&& value) { m_sqlTypeHasBeenSet = true; m_sqlType = std::move(value); }
    inline void SetSqlType(const char* value) { m_sqlTypeHasBeenSet = true; m_sqlType.assign(value); }
    inline RecordColumn& WithSqlType(const Aws::String& value) { SetSqlType(value); return *this;}
    inline RecordColumn& WithSqlType(Aws::String&& value) { SetSqlType(std::move(value)); return *this;}
    inline RecordColumn& WithSqlType(const char* value) { SetSqlType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_mapping;
    bool m_mappingHasBeenSet = false;

    Aws::String m_sqlType;
    bool m_sqlTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
