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
  class AWS_LIGHTSAIL_API GetInstancePortStatesResult
  {
  public:
    GetInstancePortStatesResult();
    GetInstancePortStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstancePortStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline const Aws::Vector<InstancePortState>& GetPortStates() const{ return m_portStates; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline void SetPortStates(const Aws::Vector<InstancePortState>& value) { m_portStates = value; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline void SetPortStates(Aws::Vector<InstancePortState>&& value) { m_portStates = std::move(value); }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(const Aws::Vector<InstancePortState>& value) { SetPortStates(value); return *this;}

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(Aws::Vector<InstancePortState>&& value) { SetPortStates(std::move(value)); return *this;}

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(const InstancePortState& value) { m_portStates.push_back(value); return *this; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(InstancePortState&& value) { m_portStates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InstancePortState> m_portStates;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
