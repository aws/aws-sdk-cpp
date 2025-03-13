/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/TaggedDatabase.h>
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
  class SearchDatabasesByLFTagsResult
  {
  public:
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult() = default;
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API SearchDatabasesByLFTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchDatabasesByLFTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of databases that meet the LF-tag conditions.</p>
     */
    inline const Aws::Vector<TaggedDatabase>& GetDatabaseList() const { return m_databaseList; }
    template<typename DatabaseListT = Aws::Vector<TaggedDatabase>>
    void SetDatabaseList(DatabaseListT&& value) { m_databaseListHasBeenSet = true; m_databaseList = std::forward<DatabaseListT>(value); }
    template<typename DatabaseListT = Aws::Vector<TaggedDatabase>>
    SearchDatabasesByLFTagsResult& WithDatabaseList(DatabaseListT&& value) { SetDatabaseList(std::forward<DatabaseListT>(value)); return *this;}
    template<typename DatabaseListT = TaggedDatabase>
    SearchDatabasesByLFTagsResult& AddDatabaseList(DatabaseListT&& value) { m_databaseListHasBeenSet = true; m_databaseList.emplace_back(std::forward<DatabaseListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchDatabasesByLFTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TaggedDatabase> m_databaseList;
    bool m_databaseListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
