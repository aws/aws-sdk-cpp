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
   * <p> Container for response parameters to <code> <a>ListPackagesForDomain</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListPackagesForDomainResponse">AWS
   * API Reference</a></p>
   */
  class ListPackagesForDomainResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListPackagesForDomainResult();
    AWS_ELASTICSEARCHSERVICE_API ListPackagesForDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListPackagesForDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const{ return m_domainPackageDetailsList; }

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline void SetDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { m_domainPackageDetailsList = value; }

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline void SetDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { m_domainPackageDetailsList = std::move(value); }

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline ListPackagesForDomainResult& WithDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { SetDomainPackageDetailsList(value); return *this;}

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline ListPackagesForDomainResult& WithDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { SetDomainPackageDetailsList(std::move(value)); return *this;}

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline ListPackagesForDomainResult& AddDomainPackageDetailsList(const DomainPackageDetails& value) { m_domainPackageDetailsList.push_back(value); return *this; }

    /**
     * <p>List of <code>DomainPackageDetails</code> objects.</p>
     */
    inline ListPackagesForDomainResult& AddDomainPackageDetailsList(DomainPackageDetails&& value) { m_domainPackageDetailsList.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline ListPackagesForDomainResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline ListPackagesForDomainResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline ListPackagesForDomainResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainPackageDetails> m_domainPackageDetailsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
