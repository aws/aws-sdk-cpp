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
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CustomerGatewayAssociation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult
  {
  public:
    AssociateCustomerGatewayResult();
    AssociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateCustomerGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The customer gateway association.</p>
     */
    inline const CustomerGatewayAssociation& GetCustomerGatewayAssociation() const{ return m_customerGatewayAssociation; }

    /**
     * <p>The customer gateway association.</p>
     */
    inline void SetCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { m_customerGatewayAssociation = value; }

    /**
     * <p>The customer gateway association.</p>
     */
    inline void SetCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { m_customerGatewayAssociation = std::move(value); }

    /**
     * <p>The customer gateway association.</p>
     */
    inline AssociateCustomerGatewayResult& WithCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { SetCustomerGatewayAssociation(value); return *this;}

    /**
     * <p>The customer gateway association.</p>
     */
    inline AssociateCustomerGatewayResult& WithCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { SetCustomerGatewayAssociation(std::move(value)); return *this;}

  private:

    CustomerGatewayAssociation m_customerGatewayAssociation;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
