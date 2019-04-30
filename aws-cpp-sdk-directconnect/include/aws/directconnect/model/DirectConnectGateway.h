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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a Direct Connect gateway, which enables you to connect
   * virtual interfaces and virtual private gateway or transit
   * gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGateway">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DirectConnectGateway
  {
  public:
    DirectConnectGateway();
    DirectConnectGateway(Aws::Utils::Json::JsonView jsonValue);
    DirectConnectGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


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
    inline DirectConnectGateway& WithDirectConnectGatewayName(const Aws::String& value) { SetDirectConnectGatewayName(value); return *this;}

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayName(Aws::String&& value) { SetDirectConnectGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayName(const char* value) { SetDirectConnectGatewayName(value); return *this;}


    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline DirectConnectGateway& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the Direct Connect gateway.</p>
     */
    inline DirectConnectGateway& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline const DirectConnectGatewayState& GetDirectConnectGatewayState() const{ return m_directConnectGatewayState; }

    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline bool DirectConnectGatewayStateHasBeenSet() const { return m_directConnectGatewayStateHasBeenSet; }

    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline void SetDirectConnectGatewayState(const DirectConnectGatewayState& value) { m_directConnectGatewayStateHasBeenSet = true; m_directConnectGatewayState = value; }

    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline void SetDirectConnectGatewayState(DirectConnectGatewayState&& value) { m_directConnectGatewayStateHasBeenSet = true; m_directConnectGatewayState = std::move(value); }

    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayState(const DirectConnectGatewayState& value) { SetDirectConnectGatewayState(value); return *this;}

    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline DirectConnectGateway& WithDirectConnectGatewayState(DirectConnectGatewayState&& value) { SetDirectConnectGatewayState(std::move(value)); return *this;}


    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const{ return m_stateChangeError; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(const Aws::String& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = value; }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(Aws::String&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::move(value); }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline void SetStateChangeError(const char* value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError.assign(value); }

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGateway& WithStateChangeError(const Aws::String& value) { SetStateChangeError(value); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGateway& WithStateChangeError(Aws::String&& value) { SetStateChangeError(std::move(value)); return *this;}

    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline DirectConnectGateway& WithStateChangeError(const char* value) { SetStateChangeError(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_directConnectGatewayName;
    bool m_directConnectGatewayNameHasBeenSet;

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;

    DirectConnectGatewayState m_directConnectGatewayState;
    bool m_directConnectGatewayStateHasBeenSet;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
