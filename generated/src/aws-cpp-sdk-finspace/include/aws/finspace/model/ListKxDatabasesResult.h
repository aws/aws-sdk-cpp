/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxDatabaseListEntry.h>
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
namespace finspace
{
namespace Model
{
  class ListKxDatabasesResult
  {
  public:
    AWS_FINSPACE_API ListKxDatabasesResult() = default;
    AWS_FINSPACE_API ListKxDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of databases in the kdb environment.</p>
     */
    inline const Aws::Vector<KxDatabaseListEntry>& GetKxDatabases() const { return m_kxDatabases; }
    template<typename KxDatabasesT = Aws::Vector<KxDatabaseListEntry>>
    void SetKxDatabases(KxDatabasesT&& value) { m_kxDatabasesHasBeenSet = true; m_kxDatabases = std::forward<KxDatabasesT>(value); }
    template<typename KxDatabasesT = Aws::Vector<KxDatabaseListEntry>>
    ListKxDatabasesResult& WithKxDatabases(KxDatabasesT&& value) { SetKxDatabases(std::forward<KxDatabasesT>(value)); return *this;}
    template<typename KxDatabasesT = KxDatabaseListEntry>
    ListKxDatabasesResult& AddKxDatabases(KxDatabasesT&& value) { m_kxDatabasesHasBeenSet = true; m_kxDatabases.emplace_back(std::forward<KxDatabasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxDatabasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxDatabasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxDatabaseListEntry> m_kxDatabases;
    bool m_kxDatabasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
