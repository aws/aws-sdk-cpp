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
    AWS_CLOUDSEARCH_API DescribeDomainsResult();
    AWS_CLOUDSEARCH_API DescribeDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DescribeDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::Vector<DomainStatus>& GetDomainStatusList() const{ return m_domainStatusList; }

    
    inline void SetDomainStatusList(const Aws::Vector<DomainStatus>& value) { m_domainStatusList = value; }

    
    inline void SetDomainStatusList(Aws::Vector<DomainStatus>&& value) { m_domainStatusList = std::move(value); }

    
    inline DescribeDomainsResult& WithDomainStatusList(const Aws::Vector<DomainStatus>& value) { SetDomainStatusList(value); return *this;}

    
    inline DescribeDomainsResult& WithDomainStatusList(Aws::Vector<DomainStatus>&& value) { SetDomainStatusList(std::move(value)); return *this;}

    
    inline DescribeDomainsResult& AddDomainStatusList(const DomainStatus& value) { m_domainStatusList.push_back(value); return *this; }

    
    inline DescribeDomainsResult& AddDomainStatusList(DomainStatus&& value) { m_domainStatusList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDomainsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDomainsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DomainStatus> m_domainStatusList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
