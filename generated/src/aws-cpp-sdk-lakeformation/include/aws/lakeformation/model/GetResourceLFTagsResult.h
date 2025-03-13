/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <aws/lakeformation/model/ColumnLFTag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{
  class GetResourceLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API GetResourceLFTagsResult() = default;
    AWS_LAKEFORMATION_API GetResourceLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetResourceLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of LF-tags applied to a database resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagOnDatabase() const { return m_lFTagOnDatabase; }
    template<typename LFTagOnDatabaseT = Aws::Vector<LFTagPair>>
    void SetLFTagOnDatabase(LFTagOnDatabaseT&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase = std::forward<LFTagOnDatabaseT>(value); }
    template<typename LFTagOnDatabaseT = Aws::Vector<LFTagPair>>
    GetResourceLFTagsResult& WithLFTagOnDatabase(LFTagOnDatabaseT&& value) { SetLFTagOnDatabase(std::forward<LFTagOnDatabaseT>(value)); return *this;}
    template<typename LFTagOnDatabaseT = LFTagPair>
    GetResourceLFTagsResult& AddLFTagOnDatabase(LFTagOnDatabaseT&& value) { m_lFTagOnDatabaseHasBeenSet = true; m_lFTagOnDatabase.emplace_back(std::forward<LFTagOnDatabaseT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags applied to a table resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTagsOnTable() const { return m_lFTagsOnTable; }
    template<typename LFTagsOnTableT = Aws::Vector<LFTagPair>>
    void SetLFTagsOnTable(LFTagsOnTableT&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable = std::forward<LFTagsOnTableT>(value); }
    template<typename LFTagsOnTableT = Aws::Vector<LFTagPair>>
    GetResourceLFTagsResult& WithLFTagsOnTable(LFTagsOnTableT&& value) { SetLFTagsOnTable(std::forward<LFTagsOnTableT>(value)); return *this;}
    template<typename LFTagsOnTableT = LFTagPair>
    GetResourceLFTagsResult& AddLFTagsOnTable(LFTagsOnTableT&& value) { m_lFTagsOnTableHasBeenSet = true; m_lFTagsOnTable.emplace_back(std::forward<LFTagsOnTableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags applied to a column resource.</p>
     */
    inline const Aws::Vector<ColumnLFTag>& GetLFTagsOnColumns() const { return m_lFTagsOnColumns; }
    template<typename LFTagsOnColumnsT = Aws::Vector<ColumnLFTag>>
    void SetLFTagsOnColumns(LFTagsOnColumnsT&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns = std::forward<LFTagsOnColumnsT>(value); }
    template<typename LFTagsOnColumnsT = Aws::Vector<ColumnLFTag>>
    GetResourceLFTagsResult& WithLFTagsOnColumns(LFTagsOnColumnsT&& value) { SetLFTagsOnColumns(std::forward<LFTagsOnColumnsT>(value)); return *this;}
    template<typename LFTagsOnColumnsT = ColumnLFTag>
    GetResourceLFTagsResult& AddLFTagsOnColumns(LFTagsOnColumnsT&& value) { m_lFTagsOnColumnsHasBeenSet = true; m_lFTagsOnColumns.emplace_back(std::forward<LFTagsOnColumnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceLFTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LFTagPair> m_lFTagOnDatabase;
    bool m_lFTagOnDatabaseHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTagsOnTable;
    bool m_lFTagsOnTableHasBeenSet = false;

    Aws::Vector<ColumnLFTag> m_lFTagsOnColumns;
    bool m_lFTagsOnColumnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
