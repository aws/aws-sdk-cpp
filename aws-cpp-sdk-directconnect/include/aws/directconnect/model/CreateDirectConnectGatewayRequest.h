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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AWS_DIRECTCONNECT_API CreateDirectConnectGatewayRequest : public DirectConnectRequest
  {
  public:
    CreateDirectConnectGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGateway"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayName() const{ return m_directConnectGatewayName; }

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline bool DirectConnectGatewayNameHasBeenSet() const { return m_directConnectGatewayNameHasBeenSet; }

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayName(const Aws::String& value) { m_directConnectGatewayNameHasBeenSet = true; m_directConnectGatewayName = value; }

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayName(Aws::String&& value) { m_directConnectGatewayNameHasBeenSet = true; m_directConnectGatewayName = std::move(value); }

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayName(const char* value) { m_directConnectGatewayNameHasBeenSet = true; m_directConnectGatewayName.assign(value); }

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayRequest& WithDirectConnectGatewayName(const Aws::String& value) { SetDirectConnectGatewayName(value); return *this;}

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayRequest& WithDirectConnectGatewayName(Aws::String&& value) { SetDirectConnectGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline CreateDirectConnectGatewayRequest& WithDirectConnectGatewayName(const char* value) { SetDirectConnectGatewayName(value); return *this;}


    /**
     * <p>The autonomous system number (ASN) for Border Gateway Protocol (BGP) to be
     * configured on the Amazon side of the connection. The ASN must be in the private
     * range of 64,512 to 65,534 or 4,200,000,000 to 4,294,967,294. The default is
     * 64512.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>The autonomous system number (ASN) for Border Gateway Protocol (BGP) to be
     * configured on the Amazon side of the connection. The ASN must be in the private
     * range of 64,512 to 65,534 or 4,200,000,000 to 4,294,967,294. The default is
     * 64512.</p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>The autonomous system number (ASN) for Border Gateway Protocol (BGP) to be
     * configured on the Amazon side of the connection. The ASN must be in the private
     * range of 64,512 to 65,534 or 4,200,000,000 to 4,294,967,294. The default is
     * 64512.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>The autonomous system number (ASN) for Border Gateway Protocol (BGP) to be
     * configured on the Amazon side of the connection. The ASN must be in the private
     * range of 64,512 to 65,534 or 4,200,000,000 to 4,294,967,294. The default is
     * 64512.</p>
     */
    inline CreateDirectConnectGatewayRequest& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}

  private:

    Aws::String m_directConnectGatewayName;
    bool m_directConnectGatewayNameHasBeenSet;

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
