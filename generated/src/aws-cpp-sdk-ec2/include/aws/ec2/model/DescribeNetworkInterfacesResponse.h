/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInterface.h>
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
  /**
   * <p>Contains the output of DescribeNetworkInterfaces.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacesResult">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacesResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacesResponse();
    AWS_EC2_API DescribeNetworkInterfacesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInterfacesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfaces = value; }

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfaces = std::move(value); }

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline DescribeNetworkInterfacesResponse& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline DescribeNetworkInterfacesResponse& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline DescribeNetworkInterfacesResponse& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>Information about one or more network interfaces.</p>
     */
    inline DescribeNetworkInterfacesResponse& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInterfacesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInterfacesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeNetworkInterfacesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkInterfacesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkInterfacesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkInterface> m_networkInterfaces;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
