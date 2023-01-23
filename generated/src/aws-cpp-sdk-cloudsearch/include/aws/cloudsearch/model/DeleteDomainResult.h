/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/DomainStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DeleteDomain</code> request. Contains the status of a
   * newly deleted domain, or no status if the domain has already been completely
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteDomainResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDomainResult
  {
  public:
    AWS_CLOUDSEARCH_API DeleteDomainResult();
    AWS_CLOUDSEARCH_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }

    
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = std::move(value); }

    
    inline DeleteDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    
    inline DeleteDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDomainResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDomainResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DomainStatus m_domainStatus;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
