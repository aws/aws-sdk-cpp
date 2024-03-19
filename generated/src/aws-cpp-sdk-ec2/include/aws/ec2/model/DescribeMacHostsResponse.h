/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/MacHost.h>
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
  class DescribeMacHostsResponse
  {
  public:
    AWS_EC2_API DescribeMacHostsResponse();
    AWS_EC2_API DescribeMacHostsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeMacHostsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline const Aws::Vector<MacHost>& GetMacHosts() const{ return m_macHosts; }

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline void SetMacHosts(const Aws::Vector<MacHost>& value) { m_macHosts = value; }

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline void SetMacHosts(Aws::Vector<MacHost>&& value) { m_macHosts = std::move(value); }

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsResponse& WithMacHosts(const Aws::Vector<MacHost>& value) { SetMacHosts(value); return *this;}

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsResponse& WithMacHosts(Aws::Vector<MacHost>&& value) { SetMacHosts(std::move(value)); return *this;}

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsResponse& AddMacHosts(const MacHost& value) { m_macHosts.push_back(value); return *this; }

    /**
     * <p> Information about the EC2 Mac Dedicated Hosts. </p>
     */
    inline DescribeMacHostsResponse& AddMacHosts(MacHost&& value) { m_macHosts.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMacHostsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeMacHostsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeMacHostsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MacHost> m_macHosts;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
