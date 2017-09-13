/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DescribeCustomerGatewaysResponse
  {
  public:
    DescribeCustomerGatewaysResponse();
    DescribeCustomerGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeCustomerGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline const Aws::Vector<CustomerGateway>& GetCustomerGateways() const{ return m_customerGateways; }

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline void SetCustomerGateways(const Aws::Vector<CustomerGateway>& value) { m_customerGateways = value; }

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline void SetCustomerGateways(Aws::Vector<CustomerGateway>&& value) { m_customerGateways = std::move(value); }

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline DescribeCustomerGatewaysResponse& WithCustomerGateways(const Aws::Vector<CustomerGateway>& value) { SetCustomerGateways(value); return *this;}

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline DescribeCustomerGatewaysResponse& WithCustomerGateways(Aws::Vector<CustomerGateway>&& value) { SetCustomerGateways(std::move(value)); return *this;}

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline DescribeCustomerGatewaysResponse& AddCustomerGateways(const CustomerGateway& value) { m_customerGateways.push_back(value); return *this; }

    /**
     * <p>Information about one or more customer gateways.</p>
     */
    inline DescribeCustomerGatewaysResponse& AddCustomerGateways(CustomerGateway&& value) { m_customerGateways.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeCustomerGatewaysResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeCustomerGatewaysResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CustomerGateway> m_customerGateways;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
