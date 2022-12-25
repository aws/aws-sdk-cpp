/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainStatus.h>
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
   * <p>Contains the status of the domain specified in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }

    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = std::move(value); }

    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline DescribeDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>List that contains the status of each specified OpenSearch Service
     * domain.</p>
     */
    inline DescribeDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}

  private:

    DomainStatus m_domainStatus;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
