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
  class AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult
  {
  public:
    DescribeEndpointGroupResult();
    DescribeEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of an endpoint group.</p>
     */
    inline const EndpointGroup& GetEndpointGroup() const{ return m_endpointGroup; }

    /**
     * <p>The description of an endpoint group.</p>
     */
    inline void SetEndpointGroup(const EndpointGroup& value) { m_endpointGroup = value; }

    /**
     * <p>The description of an endpoint group.</p>
     */
    inline void SetEndpointGroup(EndpointGroup&& value) { m_endpointGroup = std::move(value); }

    /**
     * <p>The description of an endpoint group.</p>
     */
    inline DescribeEndpointGroupResult& WithEndpointGroup(const EndpointGroup& value) { SetEndpointGroup(value); return *this;}

    /**
     * <p>The description of an endpoint group.</p>
     */
    inline DescribeEndpointGroupResult& WithEndpointGroup(EndpointGroup&& value) { SetEndpointGroup(std::move(value)); return *this;}

  private:

    EndpointGroup m_endpointGroup;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
