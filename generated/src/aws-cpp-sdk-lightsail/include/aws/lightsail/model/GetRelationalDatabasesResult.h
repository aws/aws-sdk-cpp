/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabase.h>
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
  class GetRelationalDatabasesResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult() = default;
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object describing the result of your get relational databases request.</p>
     */
    inline const Aws::Vector<RelationalDatabase>& GetRelationalDatabases() const { return m_relationalDatabases; }
    template<typename RelationalDatabasesT = Aws::Vector<RelationalDatabase>>
    void SetRelationalDatabases(RelationalDatabasesT&& value) { m_relationalDatabasesHasBeenSet = true; m_relationalDatabases = std::forward<RelationalDatabasesT>(value); }
    template<typename RelationalDatabasesT = Aws::Vector<RelationalDatabase>>
    GetRelationalDatabasesResult& WithRelationalDatabases(RelationalDatabasesT&& value) { SetRelationalDatabases(std::forward<RelationalDatabasesT>(value)); return *this;}
    template<typename RelationalDatabasesT = RelationalDatabase>
    GetRelationalDatabasesResult& AddRelationalDatabases(RelationalDatabasesT&& value) { m_relationalDatabasesHasBeenSet = true; m_relationalDatabases.emplace_back(std::forward<RelationalDatabasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabases</code> request and specify the next page token
     * using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetRelationalDatabasesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRelationalDatabasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RelationalDatabase> m_relationalDatabases;
    bool m_relationalDatabasesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
