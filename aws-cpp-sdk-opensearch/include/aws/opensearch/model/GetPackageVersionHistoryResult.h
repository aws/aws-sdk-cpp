/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/PackageVersionHistory.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for response returned by <code>GetPackageVersionHistory</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetPackageVersionHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetPackageVersionHistoryResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult();
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetPackageVersionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageID = value; }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageID = std::move(value); }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(const char* value) { m_packageID.assign(value); }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline GetPackageVersionHistoryResult& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline GetPackageVersionHistoryResult& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline GetPackageVersionHistoryResult& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline const Aws::Vector<PackageVersionHistory>& GetPackageVersionHistoryList() const{ return m_packageVersionHistoryList; }

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline void SetPackageVersionHistoryList(const Aws::Vector<PackageVersionHistory>& value) { m_packageVersionHistoryList = value; }

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline void SetPackageVersionHistoryList(Aws::Vector<PackageVersionHistory>&& value) { m_packageVersionHistoryList = std::move(value); }

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline GetPackageVersionHistoryResult& WithPackageVersionHistoryList(const Aws::Vector<PackageVersionHistory>& value) { SetPackageVersionHistoryList(value); return *this;}

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline GetPackageVersionHistoryResult& WithPackageVersionHistoryList(Aws::Vector<PackageVersionHistory>&& value) { SetPackageVersionHistoryList(std::move(value)); return *this;}

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline GetPackageVersionHistoryResult& AddPackageVersionHistoryList(const PackageVersionHistory& value) { m_packageVersionHistoryList.push_back(value); return *this; }

    /**
     * <p>A list of package versions, along with their creation time and commit
     * message.</p>
     */
    inline GetPackageVersionHistoryResult& AddPackageVersionHistoryList(PackageVersionHistory&& value) { m_packageVersionHistoryList.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline GetPackageVersionHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline GetPackageVersionHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline GetPackageVersionHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_packageID;

    Aws::Vector<PackageVersionHistory> m_packageVersionHistoryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
