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
#include <aws/directconnect/model/ConnectionState.h>
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
namespace DirectConnect
{
namespace Model
{
  class AWS_DIRECTCONNECT_API ConfirmConnectionResult
  {
  public:
    ConfirmConnectionResult();
    ConfirmConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ConfirmConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline ConfirmConnectionResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection. The following are the possible values:</p> <ul>
     * <li> <p> <code>ordering</code>: The initial state of a hosted connection
     * provisioned on an interconnect. The connection stays in the ordering state until
     * the owner of the hosted connection confirms or declines the connection
     * order.</p> </li> <li> <p> <code>requested</code>: The initial state of a
     * standard connection. The connection stays in the requested state until the
     * Letter of Authorization (LOA) is sent to the customer.</p> </li> <li> <p>
     * <code>pending</code>: The connection has been approved and is being
     * initialized.</p> </li> <li> <p> <code>available</code>: The network link is up
     * and the connection is ready for use.</p> </li> <li> <p> <code>down</code>: The
     * network link is down.</p> </li> <li> <p> <code>deleting</code>: The connection
     * is being deleted.</p> </li> <li> <p> <code>deleted</code>: The connection has
     * been deleted.</p> </li> <li> <p> <code>rejected</code>: A hosted connection in
     * the <code>ordering</code> state enters the <code>rejected</code> state if it is
     * deleted by the customer.</p> </li> <li> <p> <code>unknown</code>: The state of
     * the connection is not available.</p> </li> </ul>
     */
    inline ConfirmConnectionResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}

  private:

    ConnectionState m_connectionState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
