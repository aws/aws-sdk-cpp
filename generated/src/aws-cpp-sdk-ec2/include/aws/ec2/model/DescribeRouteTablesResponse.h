/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/RouteTable.h>
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
   * <p>Contains the output of DescribeRouteTables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeRouteTablesResult">AWS
   * API Reference</a></p>
   */
  class DescribeRouteTablesResponse
  {
  public:
    AWS_EC2_API DescribeRouteTablesResponse() = default;
    AWS_EC2_API DescribeRouteTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeRouteTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the route tables.</p>
     */
    inline const Aws::Vector<RouteTable>& GetRouteTables() const { return m_routeTables; }
    template<typename RouteTablesT = Aws::Vector<RouteTable>>
    void SetRouteTables(RouteTablesT&& value) { m_routeTablesHasBeenSet = true; m_routeTables = std::forward<RouteTablesT>(value); }
    template<typename RouteTablesT = Aws::Vector<RouteTable>>
    DescribeRouteTablesResponse& WithRouteTables(RouteTablesT&& value) { SetRouteTables(std::forward<RouteTablesT>(value)); return *this;}
    template<typename RouteTablesT = RouteTable>
    DescribeRouteTablesResponse& AddRouteTables(RouteTablesT&& value) { m_routeTablesHasBeenSet = true; m_routeTables.emplace_back(std::forward<RouteTablesT>(value)); return *this; }
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
    DescribeRouteTablesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeRouteTablesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteTable> m_routeTables;
    bool m_routeTablesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
