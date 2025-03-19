/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamDiscoveredAccount.h>
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
namespace EC2
{
namespace Model
{
  class GetIpamDiscoveredAccountsResponse
  {
  public:
    AWS_EC2_API GetIpamDiscoveredAccountsResponse() = default;
    AWS_EC2_API GetIpamDiscoveredAccountsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredAccountsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Discovered accounts.</p>
     */
    inline const Aws::Vector<IpamDiscoveredAccount>& GetIpamDiscoveredAccounts() const { return m_ipamDiscoveredAccounts; }
    template<typename IpamDiscoveredAccountsT = Aws::Vector<IpamDiscoveredAccount>>
    void SetIpamDiscoveredAccounts(IpamDiscoveredAccountsT&& value) { m_ipamDiscoveredAccountsHasBeenSet = true; m_ipamDiscoveredAccounts = std::forward<IpamDiscoveredAccountsT>(value); }
    template<typename IpamDiscoveredAccountsT = Aws::Vector<IpamDiscoveredAccount>>
    GetIpamDiscoveredAccountsResponse& WithIpamDiscoveredAccounts(IpamDiscoveredAccountsT&& value) { SetIpamDiscoveredAccounts(std::forward<IpamDiscoveredAccountsT>(value)); return *this;}
    template<typename IpamDiscoveredAccountsT = IpamDiscoveredAccount>
    GetIpamDiscoveredAccountsResponse& AddIpamDiscoveredAccounts(IpamDiscoveredAccountsT&& value) { m_ipamDiscoveredAccountsHasBeenSet = true; m_ipamDiscoveredAccounts.emplace_back(std::forward<IpamDiscoveredAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIpamDiscoveredAccountsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetIpamDiscoveredAccountsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamDiscoveredAccount> m_ipamDiscoveredAccounts;
    bool m_ipamDiscoveredAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
