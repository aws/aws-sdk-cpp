/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/DomainPackageDetails.h>
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
   * <p> Container for response parameters to <code> <a>ListDomainsForPackage</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListDomainsForPackageResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainsForPackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListDomainsForPackageResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListDomainsForPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListDomainsForPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const { return m_domainPackageDetailsList; }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    void SetDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList = std::forward<DomainPackageDetailsListT>(value); }
    template<typename DomainPackageDetailsListT = Aws::Vector<DomainPackageDetails>>
    ListDomainsForPackageResult& WithDomainPackageDetailsList(DomainPackageDetailsListT&& value) { SetDomainPackageDetailsList(std::forward<DomainPackageDetailsListT>(value)); return *this;}
    template<typename DomainPackageDetailsListT = DomainPackageDetails>
    ListDomainsForPackageResult& AddDomainPackageDetailsList(DomainPackageDetailsListT&& value) { m_domainPackageDetailsListHasBeenSet = true; m_domainPackageDetailsList.emplace_back(std::forward<DomainPackageDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainsForPackageResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainsForPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainPackageDetails> m_domainPackageDetailsList;
    bool m_domainPackageDetailsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
