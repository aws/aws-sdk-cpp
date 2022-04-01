/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainPackageDetails.h>
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
   * <p> Container for the response returned by <code> <a>DissociatePackage</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DissociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DissociatePackageResult
  {
  public:
    DissociatePackageResult();
    DissociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DissociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> <code>DomainPackageDetails</code> </p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const{ return m_domainPackageDetails; }

    /**
     * <p> <code>DomainPackageDetails</code> </p>
     */
    inline void SetDomainPackageDetails(const DomainPackageDetails& value) { m_domainPackageDetails = value; }

    /**
     * <p> <code>DomainPackageDetails</code> </p>
     */
    inline void SetDomainPackageDetails(DomainPackageDetails&& value) { m_domainPackageDetails = std::move(value); }

    /**
     * <p> <code>DomainPackageDetails</code> </p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(const DomainPackageDetails& value) { SetDomainPackageDetails(value); return *this;}

    /**
     * <p> <code>DomainPackageDetails</code> </p>
     */
    inline DissociatePackageResult& WithDomainPackageDetails(DomainPackageDetails&& value) { SetDomainPackageDetails(std::move(value)); return *this;}

  private:

    DomainPackageDetails m_domainPackageDetails;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
