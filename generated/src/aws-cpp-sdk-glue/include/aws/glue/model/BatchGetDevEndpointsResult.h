﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DevEndpoint.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetDevEndpointsResult
  {
  public:
    AWS_GLUE_API BatchGetDevEndpointsResult();
    AWS_GLUE_API BatchGetDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DevEndpoint</code> definitions.</p>
     */
    inline const Aws::Vector<DevEndpoint>& GetDevEndpoints() const{ return m_devEndpoints; }
    inline void SetDevEndpoints(const Aws::Vector<DevEndpoint>& value) { m_devEndpoints = value; }
    inline void SetDevEndpoints(Aws::Vector<DevEndpoint>&& value) { m_devEndpoints = std::move(value); }
    inline BatchGetDevEndpointsResult& WithDevEndpoints(const Aws::Vector<DevEndpoint>& value) { SetDevEndpoints(value); return *this;}
    inline BatchGetDevEndpointsResult& WithDevEndpoints(Aws::Vector<DevEndpoint>&& value) { SetDevEndpoints(std::move(value)); return *this;}
    inline BatchGetDevEndpointsResult& AddDevEndpoints(const DevEndpoint& value) { m_devEndpoints.push_back(value); return *this; }
    inline BatchGetDevEndpointsResult& AddDevEndpoints(DevEndpoint&& value) { m_devEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DevEndpoints</code> not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointsNotFound() const{ return m_devEndpointsNotFound; }
    inline void SetDevEndpointsNotFound(const Aws::Vector<Aws::String>& value) { m_devEndpointsNotFound = value; }
    inline void SetDevEndpointsNotFound(Aws::Vector<Aws::String>&& value) { m_devEndpointsNotFound = std::move(value); }
    inline BatchGetDevEndpointsResult& WithDevEndpointsNotFound(const Aws::Vector<Aws::String>& value) { SetDevEndpointsNotFound(value); return *this;}
    inline BatchGetDevEndpointsResult& WithDevEndpointsNotFound(Aws::Vector<Aws::String>&& value) { SetDevEndpointsNotFound(std::move(value)); return *this;}
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(const Aws::String& value) { m_devEndpointsNotFound.push_back(value); return *this; }
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(Aws::String&& value) { m_devEndpointsNotFound.push_back(std::move(value)); return *this; }
    inline BatchGetDevEndpointsResult& AddDevEndpointsNotFound(const char* value) { m_devEndpointsNotFound.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetDevEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetDevEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetDevEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DevEndpoint> m_devEndpoints;

    Aws::Vector<Aws::String> m_devEndpointsNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
