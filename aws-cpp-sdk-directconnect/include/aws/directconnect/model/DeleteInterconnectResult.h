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
#include <aws/directconnect/model/InterconnectState.h>
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
  class AWS_DIRECTCONNECT_API DeleteInterconnectResult
  {
  public:
    DeleteInterconnectResult();
    DeleteInterconnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteInterconnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline const InterconnectState& GetInterconnectState() const{ return m_interconnectState; }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline void SetInterconnectState(const InterconnectState& value) { m_interconnectState = value; }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline void SetInterconnectState(InterconnectState&& value) { m_interconnectState = std::move(value); }

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline DeleteInterconnectResult& WithInterconnectState(const InterconnectState& value) { SetInterconnectState(value); return *this;}

    /**
     * <p>The state of the interconnect. The following are the possible values:</p>
     * <ul> <li> <p> <code>requested</code>: The initial state of an interconnect. The
     * interconnect stays in the requested state until the Letter of Authorization
     * (LOA) is sent to the customer.</p> </li> <li> <p> <code>pending</code>: The
     * interconnect is approved, and is being initialized.</p> </li> <li> <p>
     * <code>available</code>: The network link is up, and the interconnect is ready
     * for use.</p> </li> <li> <p> <code>down</code>: The network link is down.</p>
     * </li> <li> <p> <code>deleting</code>: The interconnect is being deleted.</p>
     * </li> <li> <p> <code>deleted</code>: The interconnect is deleted.</p> </li> <li>
     * <p> <code>unknown</code>: The state of the interconnect is not available.</p>
     * </li> </ul>
     */
    inline DeleteInterconnectResult& WithInterconnectState(InterconnectState&& value) { SetInterconnectState(std::move(value)); return *this;}

  private:

    InterconnectState m_interconnectState;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
