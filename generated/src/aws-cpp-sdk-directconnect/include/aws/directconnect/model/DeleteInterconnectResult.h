/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteInterconnectResult
  {
  public:
    AWS_DIRECTCONNECT_API DeleteInterconnectResult();
    AWS_DIRECTCONNECT_API DeleteInterconnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DeleteInterconnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
