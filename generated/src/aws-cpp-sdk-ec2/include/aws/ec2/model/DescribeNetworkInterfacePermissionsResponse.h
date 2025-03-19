/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInterfacePermission.h>
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
   * <p>Contains the output for DescribeNetworkInterfacePermissions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacePermissionsResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse() = default;
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The network interface permissions.</p>
     */
    inline const Aws::Vector<NetworkInterfacePermission>& GetNetworkInterfacePermissions() const { return m_networkInterfacePermissions; }
    template<typename NetworkInterfacePermissionsT = Aws::Vector<NetworkInterfacePermission>>
    void SetNetworkInterfacePermissions(NetworkInterfacePermissionsT&& value) { m_networkInterfacePermissionsHasBeenSet = true; m_networkInterfacePermissions = std::forward<NetworkInterfacePermissionsT>(value); }
    template<typename NetworkInterfacePermissionsT = Aws::Vector<NetworkInterfacePermission>>
    DescribeNetworkInterfacePermissionsResponse& WithNetworkInterfacePermissions(NetworkInterfacePermissionsT&& value) { SetNetworkInterfacePermissions(std::forward<NetworkInterfacePermissionsT>(value)); return *this;}
    template<typename NetworkInterfacePermissionsT = NetworkInterfacePermission>
    DescribeNetworkInterfacePermissionsResponse& AddNetworkInterfacePermissions(NetworkInterfacePermissionsT&& value) { m_networkInterfacePermissionsHasBeenSet = true; m_networkInterfacePermissions.emplace_back(std::forward<NetworkInterfacePermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeNetworkInterfacePermissionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNetworkInterfacePermissionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkInterfacePermission> m_networkInterfacePermissions;
    bool m_networkInterfacePermissionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
