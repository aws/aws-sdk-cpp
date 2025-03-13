/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/TableResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <aws/lakeformation/model/ColumnLFTag.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure describing a table resource with LF-tags.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TaggedTable">AWS
   * API Reference</a></p>
   */
  class TaggedTable
  {
  public:
    AWS_LAKEFORMATION_API TaggedTable() = default;
    AWS_LAKEFORMATION_API TaggedTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TaggedTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline const TableResource& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = TableResource>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = TableResource>
    TaggedTable& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagOnDatabase() const { return m_lFTagOnDatabase; }
    inline bool LFTagOnDatabaseHasBeenSet() const { return m_lFTagOnDatabaseHasBeenSet; }
    template<typename LFTagOnDatabaseT = Aws::Vector<LFTagPair>>
    void SetLFTagOnDatabase(LFTagOnDatabaseT&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase = std::forward<LFTagOnDatabaseT>(value); }
    template<typename LFTagOnDatabaseT = Aws::Vector<LFTagPair>>
    TaggedTable& WithLFTagOnDatabase(LFTagOnDatabaseT&& value) { SetLFTagOnDatabase(std::forward<LFTagOnDatabaseT>(value)); return *this;}
    template<typename LFTagOnDatabaseT = LFTagPair>
    TaggedTable& AddLFTagOnDatabase(LFTagOnDatabaseT&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase.emplace_back(std::forward<LFTagOnDatabaseT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagsOnTable() const { return m_lFTagsOnTable; }
    inline bool LFTagsOnTableHasBeenSet() const { return m_lFTagsOnTableHasBeenSet; }
    template<typename LFTagsOnTableT = Aws::Vector<LFTagPair>>
    void SetLFTagsOnTable(LFTagsOnTableT&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable = std::forward<LFTagsOnTableT>(value); }
    template<typename LFTagsOnTableT = Aws::Vector<LFTagPair>>
    TaggedTable& WithLFTagsOnTable(LFTagsOnTableT&& value) { SetLFTagsOnTable(std::forward<LFTagsOnTableT>(value)); return *this;}
    template<typename LFTagsOnTableT = LFTagPair>
    TaggedTable& AddLFTagsOnTable(LFTagsOnTableT&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable.emplace_back(std::forward<LFTagsOnTableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline const Aws::Vector<ColumnLFTag>& GetLFTagsOnColumns() const { return m_lFTagsOnColumns; }
    inline bool LFTagsOnColumnsHasBeenSet() const { return m_lFTagsOnColumnsHasBeenSet; }
    template<typename LFTagsOnColumnsT = Aws::Vector<ColumnLFTag>>
    void SetLFTagsOnColumns(LFTagsOnColumnsT&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns = std::forward<LFTagsOnColumnsT>(value); }
    template<typename LFTagsOnColumnsT = Aws::Vector<ColumnLFTag>>
    TaggedTable& WithLFTagsOnColumns(LFTagsOnColumnsT&& value) { SetLFTagsOnColumns(std::forward<LFTagsOnColumnsT>(value)); return *this;}
    template<typename LFTagsOnColumnsT = ColumnLFTag>
    TaggedTable& AddLFTagsOnColumns(LFTagsOnColumnsT&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns.emplace_back(std::forward<LFTagsOnColumnsT>(value)); return *this; }
    ///@}
  private:

    TableResource m_table;
    bool m_tableHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTagOnDatabase;
    bool m_lFTagOnDatabaseHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTagsOnTable;
    bool m_lFTagsOnTableHasBeenSet = false;

    Aws::Vector<ColumnLFTag> m_lFTagsOnColumns;
    bool m_lFTagsOnColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
