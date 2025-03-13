/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes a <code>COPY</code> command for Amazon Redshift.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/CopyCommand">AWS
   * API Reference</a></p>
   */
  class CopyCommand
  {
  public:
    AWS_FIREHOSE_API CopyCommand() = default;
    AWS_FIREHOSE_API CopyCommand(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API CopyCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the target table. The table must already exist in the
     * database.</p>
     */
    inline const Aws::String& GetDataTableName() const { return m_dataTableName; }
    inline bool DataTableNameHasBeenSet() const { return m_dataTableNameHasBeenSet; }
    template<typename DataTableNameT = Aws::String>
    void SetDataTableName(DataTableNameT&& value) { m_dataTableNameHasBeenSet = true; m_dataTableName = std::forward<DataTableNameT>(value); }
    template<typename DataTableNameT = Aws::String>
    CopyCommand& WithDataTableName(DataTableNameT&& value) { SetDataTableName(std::forward<DataTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of column names.</p>
     */
    inline const Aws::String& GetDataTableColumns() const { return m_dataTableColumns; }
    inline bool DataTableColumnsHasBeenSet() const { return m_dataTableColumnsHasBeenSet; }
    template<typename DataTableColumnsT = Aws::String>
    void SetDataTableColumns(DataTableColumnsT&& value) { m_dataTableColumnsHasBeenSet = true; m_dataTableColumns = std::forward<DataTableColumnsT>(value); }
    template<typename DataTableColumnsT = Aws::String>
    CopyCommand& WithDataTableColumns(DataTableColumnsT&& value) { SetDataTableColumns(std::forward<DataTableColumnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional parameters to use with the Amazon Redshift <code>COPY</code>
     * command. For more information, see the "Optional Parameters" section of <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_COPY.html">Amazon
     * Redshift COPY command</a>. Some possible examples that would apply to Firehose
     * are as follows:</p> <p> <code>delimiter '\t' lzop;</code> - fields are delimited
     * with "\t" (TAB character) and compressed using lzop.</p> <p> <code>delimiter
     * '|'</code> - fields are delimited with "|" (this is the default delimiter).</p>
     * <p> <code>delimiter '|' escape</code> - the delimiter should be escaped.</p> <p>
     * <code>fixedwidth
     * 'venueid:3,venuename:25,venuecity:12,venuestate:2,venueseats:6'</code> - fields
     * are fixed width in the source, with each width specified after every column in
     * the table.</p> <p> <code>JSON 's3://mybucket/jsonpaths.txt'</code> - data is in
     * JSON format, and the path specified is the format of the data.</p> <p>For more
     * examples, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_COPY_command_examples.html">Amazon
     * Redshift COPY command examples</a>.</p>
     */
    inline const Aws::String& GetCopyOptions() const { return m_copyOptions; }
    inline bool CopyOptionsHasBeenSet() const { return m_copyOptionsHasBeenSet; }
    template<typename CopyOptionsT = Aws::String>
    void SetCopyOptions(CopyOptionsT&& value) { m_copyOptionsHasBeenSet = true; m_copyOptions = std::forward<CopyOptionsT>(value); }
    template<typename CopyOptionsT = Aws::String>
    CopyCommand& WithCopyOptions(CopyOptionsT&& value) { SetCopyOptions(std::forward<CopyOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataTableName;
    bool m_dataTableNameHasBeenSet = false;

    Aws::String m_dataTableColumns;
    bool m_dataTableColumnsHasBeenSet = false;

    Aws::String m_copyOptions;
    bool m_copyOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
