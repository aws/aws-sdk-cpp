/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CustomerGateway.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
   * <p>Contains the output of CreateCustomerGateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateCustomerGatewayResult">AWS
   * API Reference</a></p>
   */
  class CreateCustomerGatewayResponse
  {
  public:
    AWS_EC2_API CreateCustomerGatewayResponse() = default;
    AWS_EC2_API CreateCustomerGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCustomerGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the customer gateway.</p>
     */
    inline const CustomerGateway& GetCustomerGateway() const { return m_customerGateway; }
    template<typename CustomerGatewayT = CustomerGateway>
    void SetCustomerGateway(CustomerGatewayT&& value) { m_customerGatewayHasBeenSet = true; m_customerGateway = std::forward<CustomerGatewayT>(value); }
    template<typename CustomerGatewayT = CustomerGateway>
    CreateCustomerGatewayResponse& WithCustomerGateway(CustomerGatewayT&& value) { SetCustomerGateway(std::forward<CustomerGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCustomerGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CustomerGateway m_customerGateway;
    bool m_customerGatewayHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
