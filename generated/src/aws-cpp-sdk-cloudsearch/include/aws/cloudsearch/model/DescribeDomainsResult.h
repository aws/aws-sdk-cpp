/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/DomainStatus.h>
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
   * <p>The result of a <code>DescribeDomains</code> request. Contains the status of
   * the domains specified in the request or all domains owned by the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeDomainsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainsResult
  {
  public:
    AWS_CLOUDSEARCH_API DescribeDomainsResult() = default;
    AWS_CLOUDSEARCH_API DescribeDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<DomainStatus>& GetDomainStatusList() const { return m_domainStatusList; }
    template<typename DomainStatusListT = Aws::Vector<DomainStatus>>
    void SetDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList = std::forward<DomainStatusListT>(value); }
    template<typename DomainStatusListT = Aws::Vector<DomainStatus>>
    DescribeDomainsResult& WithDomainStatusList(DomainStatusListT&& value) { SetDomainStatusList(std::forward<DomainStatusListT>(value)); return *this;}
    template<typename DomainStatusListT = DomainStatus>
    DescribeDomainsResult& AddDomainStatusList(DomainStatusListT&& value) { m_domainStatusListHasBeenSet = true; m_domainStatusList.emplace_back(std::forward<DomainStatusListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDomainsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainStatus> m_domainStatusList;
    bool m_domainStatusListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
