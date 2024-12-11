/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/SourceResource.h>
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
  class ListSourceResourcesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListSourceResourcesResult();
    AWS_MIGRATIONHUB_API ListSourceResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListSourceResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSourceResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSourceResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSourceResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of source resources.</p>
     */
    inline const Aws::Vector<SourceResource>& GetSourceResourceList() const{ return m_sourceResourceList; }
    inline void SetSourceResourceList(const Aws::Vector<SourceResource>& value) { m_sourceResourceList = value; }
    inline void SetSourceResourceList(Aws::Vector<SourceResource>&& value) { m_sourceResourceList = std::move(value); }
    inline ListSourceResourcesResult& WithSourceResourceList(const Aws::Vector<SourceResource>& value) { SetSourceResourceList(value); return *this;}
    inline ListSourceResourcesResult& WithSourceResourceList(Aws::Vector<SourceResource>&& value) { SetSourceResourceList(std::move(value)); return *this;}
    inline ListSourceResourcesResult& AddSourceResourceList(const SourceResource& value) { m_sourceResourceList.push_back(value); return *this; }
    inline ListSourceResourcesResult& AddSourceResourceList(SourceResource&& value) { m_sourceResourceList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSourceResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSourceResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSourceResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SourceResource> m_sourceResourceList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
