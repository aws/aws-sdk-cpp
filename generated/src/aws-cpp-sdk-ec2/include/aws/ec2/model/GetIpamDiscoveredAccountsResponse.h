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
    AWS_EC2_API GetIpamDiscoveredAccountsResponse();
    AWS_EC2_API GetIpamDiscoveredAccountsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetIpamDiscoveredAccountsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Discovered accounts.</p>
     */
    inline const Aws::Vector<IpamDiscoveredAccount>& GetIpamDiscoveredAccounts() const{ return m_ipamDiscoveredAccounts; }

    /**
     * <p>Discovered accounts.</p>
     */
    inline void SetIpamDiscoveredAccounts(const Aws::Vector<IpamDiscoveredAccount>& value) { m_ipamDiscoveredAccounts = value; }

    /**
     * <p>Discovered accounts.</p>
     */
    inline void SetIpamDiscoveredAccounts(Aws::Vector<IpamDiscoveredAccount>&& value) { m_ipamDiscoveredAccounts = std::move(value); }

    /**
     * <p>Discovered accounts.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& WithIpamDiscoveredAccounts(const Aws::Vector<IpamDiscoveredAccount>& value) { SetIpamDiscoveredAccounts(value); return *this;}

    /**
     * <p>Discovered accounts.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& WithIpamDiscoveredAccounts(Aws::Vector<IpamDiscoveredAccount>&& value) { SetIpamDiscoveredAccounts(std::move(value)); return *this;}

    /**
     * <p>Discovered accounts.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& AddIpamDiscoveredAccounts(const IpamDiscoveredAccount& value) { m_ipamDiscoveredAccounts.push_back(value); return *this; }

    /**
     * <p>Discovered accounts.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& AddIpamDiscoveredAccounts(IpamDiscoveredAccount&& value) { m_ipamDiscoveredAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline GetIpamDiscoveredAccountsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetIpamDiscoveredAccountsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetIpamDiscoveredAccountsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IpamDiscoveredAccount> m_ipamDiscoveredAccounts;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
