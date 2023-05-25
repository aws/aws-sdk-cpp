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
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult();
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API AssociatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AssociatePackageResult& WithDomainPackageDetails(const DomainPackageDetails& value) { SetDomainPackageDetails(value); return *this;}

    /**
     * <p><code>DomainPackageDetails</code></p>
     */
    inline AssociatePackageResult& WithDomainPackageDetails(DomainPackageDetails&& value) { SetDomainPackageDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainPackageDetails m_domainPackageDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
