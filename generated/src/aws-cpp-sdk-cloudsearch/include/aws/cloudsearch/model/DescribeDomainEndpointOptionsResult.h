/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/DomainEndpointOptionsStatus.h>
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
   * <p>The result of a <code>DescribeDomainEndpointOptions</code> request. Contains
   * the status and configuration of a search domain's endpoint options.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainEndpointOptionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainEndpointOptionsResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult();
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { m_domainEndpointOptions = value; }

    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { m_domainEndpointOptions = std::move(value); }

    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline DescribeDomainEndpointOptionsResult& WithDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline DescribeDomainEndpointOptionsResult& WithDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDomainEndpointOptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDomainEndpointOptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DomainEndpointOptionsStatus m_domainEndpointOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
