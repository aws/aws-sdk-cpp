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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/EndpointGroup.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class AWS_GLOBALACCELERATOR_API CreateEndpointGroupResult
  {
  public:
    CreateEndpointGroupResult();
    CreateEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about the endpoint group that was created.</p>
     */
    inline const EndpointGroup& GetEndpointGroup() const{ return m_endpointGroup; }

    /**
     * <p>The information about the endpoint group that was created.</p>
     */
    inline void SetEndpointGroup(const EndpointGroup& value) { m_endpointGroup = value; }

    /**
     * <p>The information about the endpoint group that was created.</p>
     */
    inline void SetEndpointGroup(EndpointGroup&& value) { m_endpointGroup = std::move(value); }

    /**
     * <p>The information about the endpoint group that was created.</p>
     */
    inline CreateEndpointGroupResult& WithEndpointGroup(const EndpointGroup& value) { SetEndpointGroup(value); return *this;}

    /**
     * <p>The information about the endpoint group that was created.</p>
     */
    inline CreateEndpointGroupResult& WithEndpointGroup(EndpointGroup&& value) { SetEndpointGroup(std::move(value)); return *this;}

  private:

    EndpointGroup m_endpointGroup;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
