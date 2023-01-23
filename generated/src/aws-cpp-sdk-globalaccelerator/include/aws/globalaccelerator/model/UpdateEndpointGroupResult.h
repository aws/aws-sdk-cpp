/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateEndpointGroupResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateEndpointGroupResult();
    AWS_GLOBALACCELERATOR_API UpdateEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about the endpoint group that was updated.</p>
     */
    inline const EndpointGroup& GetEndpointGroup() const{ return m_endpointGroup; }

    /**
     * <p>The information about the endpoint group that was updated.</p>
     */
    inline void SetEndpointGroup(const EndpointGroup& value) { m_endpointGroup = value; }

    /**
     * <p>The information about the endpoint group that was updated.</p>
     */
    inline void SetEndpointGroup(EndpointGroup&& value) { m_endpointGroup = std::move(value); }

    /**
     * <p>The information about the endpoint group that was updated.</p>
     */
    inline UpdateEndpointGroupResult& WithEndpointGroup(const EndpointGroup& value) { SetEndpointGroup(value); return *this;}

    /**
     * <p>The information about the endpoint group that was updated.</p>
     */
    inline UpdateEndpointGroupResult& WithEndpointGroup(EndpointGroup&& value) { SetEndpointGroup(std::move(value)); return *this;}

  private:

    EndpointGroup m_endpointGroup;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
