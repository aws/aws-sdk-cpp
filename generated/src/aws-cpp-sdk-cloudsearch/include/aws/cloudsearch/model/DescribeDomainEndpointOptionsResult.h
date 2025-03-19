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
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult() = default;
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeDomainEndpointOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status and configuration of a search domain's endpoint options.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    DescribeDomainEndpointOptionsResult& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDomainEndpointOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DomainEndpointOptionsStatus m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
