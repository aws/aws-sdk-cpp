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
    AWS_IOTTWINMAKER_API Row();
    AWS_IOTTWINMAKER_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data in a row of query results.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetRowData() const{ return m_rowData; }

    /**
     * <p>The data in a row of query results.</p>
     */
    inline bool RowDataHasBeenSet() const { return m_rowDataHasBeenSet; }

    /**
     * <p>The data in a row of query results.</p>
     */
    inline void SetRowData(const Aws::Vector<Aws::Utils::Document>& value) { m_rowDataHasBeenSet = true; m_rowData = value; }

    /**
     * <p>The data in a row of query results.</p>
     */
    inline void SetRowData(Aws::Vector<Aws::Utils::Document>&& value) { m_rowDataHasBeenSet = true; m_rowData = std::move(value); }

    /**
     * <p>The data in a row of query results.</p>
     */
    inline Row& WithRowData(const Aws::Vector<Aws::Utils::Document>& value) { SetRowData(value); return *this;}

    /**
     * <p>The data in a row of query results.</p>
     */
    inline Row& WithRowData(Aws::Vector<Aws::Utils::Document>&& value) { SetRowData(std::move(value)); return *this;}

    /**
     * <p>The data in a row of query results.</p>
     */
    inline Row& AddRowData(const Aws::Utils::Document& value) { m_rowDataHasBeenSet = true; m_rowData.push_back(value); return *this; }

    /**
     * <p>The data in a row of query results.</p>
     */
    inline Row& AddRowData(Aws::Utils::Document&& value) { m_rowDataHasBeenSet = true; m_rowData.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Utils::Document> m_rowData;
    bool m_rowDataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
