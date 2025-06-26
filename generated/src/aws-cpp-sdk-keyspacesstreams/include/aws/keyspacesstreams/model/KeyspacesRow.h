/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/keyspacesstreams/model/KeyspacesMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspacesstreams/model/KeyspacesCell.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>Represents a row in an Amazon Keyspaces table, containing regular column
   * values, static column values, and row-level metadata.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/KeyspacesRow">AWS
   * API Reference</a></p>
   */
  class KeyspacesRow
  {
  public:
    AWS_KEYSPACESSTREAMS_API KeyspacesRow() = default;
    AWS_KEYSPACESSTREAMS_API KeyspacesRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API KeyspacesRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of regular (non-static) column cells in the row, where keys are column
     * names and values are the corresponding cells.</p>
     */
    inline const Aws::Map<Aws::String, KeyspacesCell>& GetValueCells() const { return m_valueCells; }
    inline bool ValueCellsHasBeenSet() const { return m_valueCellsHasBeenSet; }
    template<typename ValueCellsT = Aws::Map<Aws::String, KeyspacesCell>>
    void SetValueCells(ValueCellsT&& value) { m_valueCellsHasBeenSet = true; m_valueCells = std::forward<ValueCellsT>(value); }
    template<typename ValueCellsT = Aws::Map<Aws::String, KeyspacesCell>>
    KeyspacesRow& WithValueCells(ValueCellsT&& value) { SetValueCells(std::forward<ValueCellsT>(value)); return *this;}
    template<typename ValueCellsKeyT = Aws::String, typename ValueCellsValueT = KeyspacesCell>
    KeyspacesRow& AddValueCells(ValueCellsKeyT&& key, ValueCellsValueT&& value) {
      m_valueCellsHasBeenSet = true; m_valueCells.emplace(std::forward<ValueCellsKeyT>(key), std::forward<ValueCellsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of static column cells shared by all rows with the same partition key,
     * where keys are column names and values are the corresponding cells.</p>
     */
    inline const Aws::Map<Aws::String, KeyspacesCell>& GetStaticCells() const { return m_staticCells; }
    inline bool StaticCellsHasBeenSet() const { return m_staticCellsHasBeenSet; }
    template<typename StaticCellsT = Aws::Map<Aws::String, KeyspacesCell>>
    void SetStaticCells(StaticCellsT&& value) { m_staticCellsHasBeenSet = true; m_staticCells = std::forward<StaticCellsT>(value); }
    template<typename StaticCellsT = Aws::Map<Aws::String, KeyspacesCell>>
    KeyspacesRow& WithStaticCells(StaticCellsT&& value) { SetStaticCells(std::forward<StaticCellsT>(value)); return *this;}
    template<typename StaticCellsKeyT = Aws::String, typename StaticCellsValueT = KeyspacesCell>
    KeyspacesRow& AddStaticCells(StaticCellsKeyT&& key, StaticCellsValueT&& value) {
      m_staticCellsHasBeenSet = true; m_staticCells.emplace(std::forward<StaticCellsKeyT>(key), std::forward<StaticCellsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Metadata that applies to the entire row, such as timestamps and TTL
     * information.</p>
     */
    inline const KeyspacesMetadata& GetRowMetadata() const { return m_rowMetadata; }
    inline bool RowMetadataHasBeenSet() const { return m_rowMetadataHasBeenSet; }
    template<typename RowMetadataT = KeyspacesMetadata>
    void SetRowMetadata(RowMetadataT&& value) { m_rowMetadataHasBeenSet = true; m_rowMetadata = std::forward<RowMetadataT>(value); }
    template<typename RowMetadataT = KeyspacesMetadata>
    KeyspacesRow& WithRowMetadata(RowMetadataT&& value) { SetRowMetadata(std::forward<RowMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, KeyspacesCell> m_valueCells;
    bool m_valueCellsHasBeenSet = false;

    Aws::Map<Aws::String, KeyspacesCell> m_staticCells;
    bool m_staticCellsHasBeenSet = false;

    KeyspacesMetadata m_rowMetadata;
    bool m_rowMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
