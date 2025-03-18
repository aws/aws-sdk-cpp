/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseSnapshot.h>
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
namespace Lightsail
{
namespace Model
{
  class GetRelationalDatabaseSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseSnapshot>& GetRelationalDatabaseSnapshots() const { return m_relationalDatabaseSnapshots; }
    template<typename RelationalDatabaseSnapshotsT = Aws::Vector<RelationalDatabaseSnapshot>>
    void SetRelationalDatabaseSnapshots(RelationalDatabaseSnapshotsT&& value) { m_relationalDatabaseSnapshotsHasBeenSet = true; m_relationalDatabaseSnapshots = std::forward<RelationalDatabaseSnapshotsT>(value); }
    template<typename RelationalDatabaseSnapshotsT = Aws::Vector<RelationalDatabaseSnapshot>>
    GetRelationalDatabaseSnapshotsResult& WithRelationalDatabaseSnapshots(RelationalDatabaseSnapshotsT&& value) { SetRelationalDatabaseSnapshots(std::forward<RelationalDatabaseSnapshotsT>(value)); return *this;}
    template<typename RelationalDatabaseSnapshotsT = RelationalDatabaseSnapshot>
    GetRelationalDatabaseSnapshotsResult& AddRelationalDatabaseSnapshots(RelationalDatabaseSnapshotsT&& value) { m_relationalDatabaseSnapshotsHasBeenSet = true; m_relationalDatabaseSnapshots.emplace_back(std::forward<RelationalDatabaseSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetRelationalDatabaseSnapshotsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabaseSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RelationalDatabaseSnapshot> m_relationalDatabaseSnapshots;
    bool m_relationalDatabaseSnapshotsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
