﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointDescription.h>
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
  class AddCustomRoutingEndpointsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult();
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API AddCustomRoutingEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint objects added to the custom routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointDescription>& GetEndpointDescriptions() const{ return m_endpointDescriptions; }
    inline void SetEndpointDescriptions(const Aws::Vector<CustomRoutingEndpointDescription>& value) { m_endpointDescriptions = value; }
    inline void SetEndpointDescriptions(Aws::Vector<CustomRoutingEndpointDescription>&& value) { m_endpointDescriptions = std::move(value); }
    inline AddCustomRoutingEndpointsResult& WithEndpointDescriptions(const Aws::Vector<CustomRoutingEndpointDescription>& value) { SetEndpointDescriptions(value); return *this;}
    inline AddCustomRoutingEndpointsResult& WithEndpointDescriptions(Aws::Vector<CustomRoutingEndpointDescription>&& value) { SetEndpointDescriptions(std::move(value)); return *this;}
    inline AddCustomRoutingEndpointsResult& AddEndpointDescriptions(const CustomRoutingEndpointDescription& value) { m_endpointDescriptions.push_back(value); return *this; }
    inline AddCustomRoutingEndpointsResult& AddEndpointDescriptions(CustomRoutingEndpointDescription&& value) { m_endpointDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group for the custom routing
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArn = value; }
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArn = std::move(value); }
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArn.assign(value); }
    inline AddCustomRoutingEndpointsResult& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}
    inline AddCustomRoutingEndpointsResult& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}
    inline AddCustomRoutingEndpointsResult& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AddCustomRoutingEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AddCustomRoutingEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AddCustomRoutingEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingEndpointDescription> m_endpointDescriptions;

    Aws::String m_endpointGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
