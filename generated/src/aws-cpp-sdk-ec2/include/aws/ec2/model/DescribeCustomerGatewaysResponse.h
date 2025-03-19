/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CustomerGateway.h>
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
   * <p>Contains the output of DescribeCustomerGateways.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeCustomerGatewaysResult">AWS
   * API Reference</a></p>
   */
  class DescribeCustomerGatewaysResponse
  {
  public:
    AWS_EC2_API DescribeCustomerGatewaysResponse() = default;
    AWS_EC2_API DescribeCustomerGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCustomerGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline const Aws::Vector<CustomerGateway>& GetCustomerGateways() const { return m_customerGateways; }
    template<typename CustomerGatewaysT = Aws::Vector<CustomerGateway>>
    void SetCustomerGateways(CustomerGatewaysT&& value) { m_customerGatewaysHasBeenSet = true; m_customerGateways = std::forward<CustomerGatewaysT>(value); }
    template<typename CustomerGatewaysT = Aws::Vector<CustomerGateway>>
    DescribeCustomerGatewaysResponse& WithCustomerGateways(CustomerGatewaysT&& value) { SetCustomerGateways(std::forward<CustomerGatewaysT>(value)); return *this;}
    template<typename CustomerGatewaysT = CustomerGateway>
    DescribeCustomerGatewaysResponse& AddCustomerGateways(CustomerGatewaysT&& value) { m_customerGatewaysHasBeenSet = true; m_customerGateways.emplace_back(std::forward<CustomerGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCustomerGatewaysResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerGateway> m_customerGateways;
    bool m_customerGatewaysHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
