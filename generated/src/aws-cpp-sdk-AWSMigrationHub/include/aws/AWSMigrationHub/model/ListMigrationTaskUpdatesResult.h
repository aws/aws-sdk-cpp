/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/MigrationTaskUpdate.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListMigrationTaskUpdatesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult() = default;
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListMigrationTaskUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response includes a <code>NextToken</code> value, that means that
     * there are more results available. The value of <code>NextToken</code> is a
     * unique pagination token for each page. To retrieve the next page of results,
     * call this API again and specify this <code>NextToken</code> value in the
     * request. Keep all other arguments unchanged. Each pagination token expires after
     * 24 hours. Using an expired pagination token will return an HTTP 400 InvalidToken
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMigrationTaskUpdatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of migration-task updates.</p>
     */
    inline const Aws::Vector<MigrationTaskUpdate>& GetMigrationTaskUpdateList() const { return m_migrationTaskUpdateList; }
    template<typename MigrationTaskUpdateListT = Aws::Vector<MigrationTaskUpdate>>
    void SetMigrationTaskUpdateList(MigrationTaskUpdateListT&& value) { m_migrationTaskUpdateListHasBeenSet = true; m_migrationTaskUpdateList = std::forward<MigrationTaskUpdateListT>(value); }
    template<typename MigrationTaskUpdateListT = Aws::Vector<MigrationTaskUpdate>>
    ListMigrationTaskUpdatesResult& WithMigrationTaskUpdateList(MigrationTaskUpdateListT&& value) { SetMigrationTaskUpdateList(std::forward<MigrationTaskUpdateListT>(value)); return *this;}
    template<typename MigrationTaskUpdateListT = MigrationTaskUpdate>
    ListMigrationTaskUpdatesResult& AddMigrationTaskUpdateList(MigrationTaskUpdateListT&& value) { m_migrationTaskUpdateListHasBeenSet = true; m_migrationTaskUpdateList.emplace_back(std::forward<MigrationTaskUpdateListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMigrationTaskUpdatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MigrationTaskUpdate> m_migrationTaskUpdateList;
    bool m_migrationTaskUpdateListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
