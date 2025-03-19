/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/DomainPackageDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Container for response returned by <code> <a>AssociatePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AssociatePackageResponse">AWS
   * API Reference</a></p>
   */
  class AssociatePackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult() = default;
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline const DomainPackageDetails& GetDomainPackageDetails() const { return m_domainPackageDetails; }
    template<typename DomainPackageDetailsT = DomainPackageDetails>
    void SetDomainPackageDetails(DomainPackageDetailsT&& value) { m_domainPackageDetailsHasBeenSet = true; m_domainPackageDetails = std::forward<DomainPackageDetailsT>(value); }
    template<typename DomainPackageDetailsT = DomainPackageDetails>
    AssociatePackageResult& WithDomainPackageDetails(DomainPackageDetailsT&& value) { SetDomainPackageDetails(std::forward<DomainPackageDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociatePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainPackageDetails m_domainPackageDetails;
    bool m_domainPackageDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
