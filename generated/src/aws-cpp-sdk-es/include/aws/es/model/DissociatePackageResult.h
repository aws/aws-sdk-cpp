/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
   * <p> Container for response returned by <code> <a>DissociatePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DissociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class DissociatePackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DissociatePackageResult();
    AWS_ELASTICSEARCHSERVICE_API DissociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DissociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const{ return m_domainPackageDetails; }

    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline void SetDomainPackageDetails(const DomainPackageDetails& value) { m_domainPackageDetails = value; }

    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline void SetDomainPackageDetails(DomainPackageDetails&& value) { m_domainPackageDetails = std::move(value); }

    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(const DomainPackageDetails& value) { SetDomainPackageDetails(value); return *this;}

    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(DomainPackageDetails&& value) { SetDomainPackageDetails(std::move(value)); return *this;}

  private:

    DomainPackageDetails m_domainPackageDetails;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
