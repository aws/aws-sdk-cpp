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
    AWS_EC2_API CreateCustomerGatewayResponse();
    AWS_EC2_API CreateCustomerGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCustomerGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the customer gateway.</p>
     */
    inline const CustomerGateway& GetCustomerGateway() const{ return m_customerGateway; }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline void SetCustomerGateway(const CustomerGateway& value) { m_customerGateway = value; }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline void SetCustomerGateway(CustomerGateway&& value) { m_customerGateway = std::move(value); }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline CreateCustomerGatewayResponse& WithCustomerGateway(const CustomerGateway& value) { SetCustomerGateway(value); return *this;}

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline CreateCustomerGatewayResponse& WithCustomerGateway(CustomerGateway&& value) { SetCustomerGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateCustomerGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCustomerGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CustomerGateway m_customerGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
