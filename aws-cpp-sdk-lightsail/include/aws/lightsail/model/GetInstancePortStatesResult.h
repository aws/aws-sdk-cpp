﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/model/PortState.h>

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
    GetInstancePortStatesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetInstancePortStatesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline const Aws::Vector<PortState>& GetPortStates() const{ return m_portStates; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline void SetPortStates(const Aws::Vector<PortState>& value) { m_portStates = value; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline void SetPortStates(Aws::Vector<PortState>&& value) { m_portStates = value; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(const Aws::Vector<PortState>& value) { SetPortStates(value); return *this;}

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& WithPortStates(Aws::Vector<PortState>&& value) { SetPortStates(value); return *this;}

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(const PortState& value) { m_portStates.push_back(value); return *this; }

    /**
     * <p>Information about the port states resulting from your request.</p>
     */
    inline GetInstancePortStatesResult& AddPortStates(PortState&& value) { m_portStates.push_back(value); return *this; }

  private:
    Aws::Vector<PortState> m_portStates;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
