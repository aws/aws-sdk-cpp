/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/PackageVersionHistory.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>GetPackageVersionHistory</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetPackageVersionHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetPackageVersionHistoryResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetPackageVersionHistoryResult() = default;
    AWS_ELASTICSEARCHSERVICE_API GetPackageVersionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetPackageVersionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    GetPackageVersionHistoryResult& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of <code>PackageVersionHistory</code> objects.</p>
     */
    inline const Aws::Vector<PackageVersionHistory>& GetPackageVersionHistoryList() const { return m_packageVersionHistoryList; }
    template<typename PackageVersionHistoryListT = Aws::Vector<PackageVersionHistory>>
    void SetPackageVersionHistoryList(PackageVersionHistoryListT&& value) { m_packageVersionHistoryListHasBeenSet = true; m_packageVersionHistoryList = std::forward<PackageVersionHistoryListT>(value); }
    template<typename PackageVersionHistoryListT = Aws::Vector<PackageVersionHistory>>
    GetPackageVersionHistoryResult& WithPackageVersionHistoryList(PackageVersionHistoryListT&& value) { SetPackageVersionHistoryList(std::forward<PackageVersionHistoryListT>(value)); return *this;}
    template<typename PackageVersionHistoryListT = PackageVersionHistory>
    GetPackageVersionHistoryResult& AddPackageVersionHistoryList(PackageVersionHistoryListT&& value) { m_packageVersionHistoryListHasBeenSet = true; m_packageVersionHistoryList.emplace_back(std::forward<PackageVersionHistoryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetPackageVersionHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPackageVersionHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::Vector<PackageVersionHistory> m_packageVersionHistoryList;
    bool m_packageVersionHistoryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
