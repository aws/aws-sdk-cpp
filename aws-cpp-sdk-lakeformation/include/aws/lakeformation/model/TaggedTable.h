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
    AWS_LAKEFORMATION_API TaggedTable();
    AWS_LAKEFORMATION_API TaggedTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TaggedTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline const TableResource& GetTable() const{ return m_table; }

    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline void SetTable(const TableResource& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline void SetTable(TableResource&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline TaggedTable& WithTable(const TableResource& value) { SetTable(value); return *this;}

    /**
     * <p>A table that has LF-tags attached to it.</p>
     */
    inline TaggedTable& WithTable(TableResource&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagOnDatabase() const{ return m_lFTagOnDatabase; }

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline bool LFTagOnDatabaseHasBeenSet() const { return m_lFTagOnDatabaseHasBeenSet; }

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline void SetLFTagOnDatabase(const Aws::Vector<LFTagPair>& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase = value; }

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline void SetLFTagOnDatabase(Aws::Vector<LFTagPair>&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase = std::move(value); }

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline TaggedTable& WithLFTagOnDatabase(const Aws::Vector<LFTagPair>& value) { SetLFTagOnDatabase(value); return *this;}

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline TaggedTable& WithLFTagOnDatabase(Aws::Vector<LFTagPair>&& value) { SetLFTagOnDatabase(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline TaggedTable& AddLFTagOnDatabase(const LFTagPair& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags attached to the database where the table resides.</p>
     */
    inline TaggedTable& AddLFTagOnDatabase(LFTagPair&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagsOnTable() const{ return m_lFTagsOnTable; }

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline bool LFTagsOnTableHasBeenSet() const { return m_lFTagsOnTableHasBeenSet; }

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline void SetLFTagsOnTable(const Aws::Vector<LFTagPair>& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable = value; }

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline void SetLFTagsOnTable(Aws::Vector<LFTagPair>&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable = std::move(value); }

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline TaggedTable& WithLFTagsOnTable(const Aws::Vector<LFTagPair>& value) { SetLFTagsOnTable(value); return *this;}

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline TaggedTable& WithLFTagsOnTable(Aws::Vector<LFTagPair>&& value) { SetLFTagsOnTable(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline TaggedTable& AddLFTagsOnTable(const LFTagPair& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags attached to the table.</p>
     */
    inline TaggedTable& AddLFTagsOnTable(LFTagPair&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline const Aws::Vector<ColumnLFTag>& GetLFTagsOnColumns() const{ return m_lFTagsOnColumns; }

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline bool LFTagsOnColumnsHasBeenSet() const { return m_lFTagsOnColumnsHasBeenSet; }

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline void SetLFTagsOnColumns(const Aws::Vector<ColumnLFTag>& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns = value; }

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline void SetLFTagsOnColumns(Aws::Vector<ColumnLFTag>&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns = std::move(value); }

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline TaggedTable& WithLFTagsOnColumns(const Aws::Vector<ColumnLFTag>& value) { SetLFTagsOnColumns(value); return *this;}

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline TaggedTable& WithLFTagsOnColumns(Aws::Vector<ColumnLFTag>&& value) { SetLFTagsOnColumns(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline TaggedTable& AddLFTagsOnColumns(const ColumnLFTag& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags attached to columns in the table.</p>
     */
    inline TaggedTable& AddLFTagsOnColumns(ColumnLFTag&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns.push_back(std::move(value)); return *this; }

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
