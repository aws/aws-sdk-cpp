/**
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
  class RecordColumn
  {
  public:
    AWS_KINESISANALYTICSV2_API RecordColumn() = default;
    AWS_KINESISANALYTICSV2_API RecordColumn(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RecordColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column that is created in the in-application input stream or
     * reference table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RecordColumn& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the data element in the streaming input or the reference data
     * source.</p>
     */
    inline const Aws::String& GetMapping() const { return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    template<typename MappingT = Aws::String>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Aws::String>
    RecordColumn& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of column created in the in-application input stream or reference
     * table.</p>
     */
    inline const Aws::String& GetSqlType() const { return m_sqlType; }
    inline bool SqlTypeHasBeenSet() const { return m_sqlTypeHasBeenSet; }
    template<typename SqlTypeT = Aws::String>
    void SetSqlType(SqlTypeT&& value) { m_sqlTypeHasBeenSet = true; m_sqlType = std::forward<SqlTypeT>(value); }
    template<typename SqlTypeT = Aws::String>
    RecordColumn& WithSqlType(SqlTypeT&& value) { SetSqlType(std::forward<SqlTypeT>(value)); return *this;}
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
} // namespace KinesisAnalyticsV2
} // namespace Aws
