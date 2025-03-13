/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/TaggedTable.h>
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
  class SearchTablesByLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult() = default;
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API SearchTablesByLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the last. On
     * the first run, if you include a not null (a value) token you can get empty
     * pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchTablesByLFTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tables that meet the LF-tag conditions.</p>
     */
    inline const Aws::Vector<TaggedTable>& GetTableList() const { return m_tableList; }
    template<typename TableListT = Aws::Vector<TaggedTable>>
    void SetTableList(TableListT&& value) { m_tableListHasBeenSet = true; m_tableList = std::forward<TableListT>(value); }
    template<typename TableListT = Aws::Vector<TaggedTable>>
    SearchTablesByLFTagsResult& WithTableList(TableListT&& value) { SetTableList(std::forward<TableListT>(value)); return *this;}
    template<typename TableListT = TaggedTable>
    SearchTablesByLFTagsResult& AddTableList(TableListT&& value) { m_tableListHasBeenSet = true; m_tableList.emplace_back(std::forward<TableListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchTablesByLFTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TaggedTable> m_tableList;
    bool m_tableListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
