/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointGroup.h>
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
  class AWS_GLOBALACCELERATOR_API DescribeCustomRoutingEndpointGroupResult
  {
  public:
    DescribeCustomRoutingEndpointGroupResult();
    DescribeCustomRoutingEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCustomRoutingEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of an endpoint group for a custom routing accelerator.</p>
     */
    inline const CustomRoutingEndpointGroup& GetEndpointGroup() const{ return m_endpointGroup; }

    /**
     * <p>The description of an endpoint group for a custom routing accelerator.</p>
     */
    inline void SetEndpointGroup(const CustomRoutingEndpointGroup& value) { m_endpointGroup = value; }

    /**
     * <p>The description of an endpoint group for a custom routing accelerator.</p>
     */
    inline void SetEndpointGroup(CustomRoutingEndpointGroup&& value) { m_endpointGroup = std::move(value); }

    /**
     * <p>The description of an endpoint group for a custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingEndpointGroupResult& WithEndpointGroup(const CustomRoutingEndpointGroup& value) { SetEndpointGroup(value); return *this;}

    /**
     * <p>The description of an endpoint group for a custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingEndpointGroupResult& WithEndpointGroup(CustomRoutingEndpointGroup&& value) { SetEndpointGroup(std::move(value)); return *this;}

  private:

    CustomRoutingEndpointGroup m_endpointGroup;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
