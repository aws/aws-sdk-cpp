/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstancePortState.h>
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
namespace Lightsail
{
namespace Model
{
  class GetInstancePortStatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstancePortStatesResult();
    AWS_LIGHTSAIL_API GetInstancePortStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstancePortStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline const Aws::Vector<InstancePortState>& GetPortStates() const{ return m_portStates; }

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline void SetPortStates(const Aws::Vector<InstancePortState>& value) { m_portStates = value; }

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline void SetPortStates(Aws::Vector<InstancePortState>&& value) { m_portStates = std::move(value); }

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(const Aws::Vector<InstancePortState>& value) { SetPortStates(value); return *this;}

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(Aws::Vector<InstancePortState>&& value) { SetPortStates(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(const InstancePortState& value) { m_portStates.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(InstancePortState&& value) { m_portStates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InstancePortState> m_portStates;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
