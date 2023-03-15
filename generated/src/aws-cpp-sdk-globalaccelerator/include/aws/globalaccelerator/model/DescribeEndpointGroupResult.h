﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/EndpointGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeEndpointGroupResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult();
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEndpointGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEndpointGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEndpointGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EndpointGroup m_endpointGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
