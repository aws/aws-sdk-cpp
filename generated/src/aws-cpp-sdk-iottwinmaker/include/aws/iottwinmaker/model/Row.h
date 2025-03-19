/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>Represents a single row in the query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/Row">AWS
   * API Reference</a></p>
   */
  class Row
  {
  public:
    AWS_IOTTWINMAKER_API Row() = default;
    AWS_IOTTWINMAKER_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data in a row of query results.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetRowData() const { return m_rowData; }
    inline bool RowDataHasBeenSet() const { return m_rowDataHasBeenSet; }
    template<typename RowDataT = Aws::Vector<Aws::Utils::Document>>
    void SetRowData(RowDataT&& value) { m_rowDataHasBeenSet = true; m_rowData = std::forward<RowDataT>(value); }
    template<typename RowDataT = Aws::Vector<Aws::Utils::Document>>
    Row& WithRowData(RowDataT&& value) { SetRowData(std::forward<RowDataT>(value)); return *this;}
    template<typename RowDataT = Aws::Utils::Document>
    Row& AddRowData(RowDataT&& value) { m_rowDataHasBeenSet = true; m_rowData.emplace_back(std::forward<RowDataT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Utils::Document> m_rowData;
    bool m_rowDataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
