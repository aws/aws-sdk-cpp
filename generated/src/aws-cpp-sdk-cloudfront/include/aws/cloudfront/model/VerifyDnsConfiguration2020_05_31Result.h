/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/DnsConfiguration.h>
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
namespace CloudFront
{
namespace Model
{
  class VerifyDnsConfiguration2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API VerifyDnsConfiguration2020_05_31Result() = default;
    AWS_CLOUDFRONT_API VerifyDnsConfiguration2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API VerifyDnsConfiguration2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of domain names, their statuses, and a description of each
     * status.</p>
     */
    inline const Aws::Vector<DnsConfiguration>& GetDnsConfigurationList() const { return m_dnsConfigurationList; }
    template<typename DnsConfigurationListT = Aws::Vector<DnsConfiguration>>
    void SetDnsConfigurationList(DnsConfigurationListT&& value) { m_dnsConfigurationListHasBeenSet = true; m_dnsConfigurationList = std::forward<DnsConfigurationListT>(value); }
    template<typename DnsConfigurationListT = Aws::Vector<DnsConfiguration>>
    VerifyDnsConfiguration2020_05_31Result& WithDnsConfigurationList(DnsConfigurationListT&& value) { SetDnsConfigurationList(std::forward<DnsConfigurationListT>(value)); return *this;}
    template<typename DnsConfigurationListT = DnsConfiguration>
    VerifyDnsConfiguration2020_05_31Result& AddDnsConfigurationList(DnsConfigurationListT&& value) { m_dnsConfigurationListHasBeenSet = true; m_dnsConfigurationList.emplace_back(std::forward<DnsConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyDnsConfiguration2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DnsConfiguration> m_dnsConfigurationList;
    bool m_dnsConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
