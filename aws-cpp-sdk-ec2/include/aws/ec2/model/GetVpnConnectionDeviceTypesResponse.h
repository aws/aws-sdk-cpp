/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnConnectionDeviceType.h>
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
  class GetVpnConnectionDeviceTypesResponse
  {
  public:
    AWS_EC2_API GetVpnConnectionDeviceTypesResponse();
    AWS_EC2_API GetVpnConnectionDeviceTypesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVpnConnectionDeviceTypesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline const Aws::Vector<VpnConnectionDeviceType>& GetVpnConnectionDeviceTypes() const{ return m_vpnConnectionDeviceTypes; }

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline void SetVpnConnectionDeviceTypes(const Aws::Vector<VpnConnectionDeviceType>& value) { m_vpnConnectionDeviceTypes = value; }

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline void SetVpnConnectionDeviceTypes(Aws::Vector<VpnConnectionDeviceType>&& value) { m_vpnConnectionDeviceTypes = std::move(value); }

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& WithVpnConnectionDeviceTypes(const Aws::Vector<VpnConnectionDeviceType>& value) { SetVpnConnectionDeviceTypes(value); return *this;}

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& WithVpnConnectionDeviceTypes(Aws::Vector<VpnConnectionDeviceType>&& value) { SetVpnConnectionDeviceTypes(std::move(value)); return *this;}

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& AddVpnConnectionDeviceTypes(const VpnConnectionDeviceType& value) { m_vpnConnectionDeviceTypes.push_back(value); return *this; }

    /**
     * <p>List of customer gateway devices that have a sample configuration file
     * available for use.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& AddVpnConnectionDeviceTypes(VpnConnectionDeviceType&& value) { m_vpnConnectionDeviceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>GetVpnConnectionDeviceTypes</code> request. When the results of a
     * <code>GetVpnConnectionDeviceTypes</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetVpnConnectionDeviceTypesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetVpnConnectionDeviceTypesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetVpnConnectionDeviceTypesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VpnConnectionDeviceType> m_vpnConnectionDeviceTypes;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
