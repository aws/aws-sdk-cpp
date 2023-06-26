/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/Endpoint.h>
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
namespace EMRContainers
{
namespace Model
{
  class DescribeManagedEndpointResult
  {
  public:
    AWS_EMRCONTAINERS_API DescribeManagedEndpointResult();
    AWS_EMRCONTAINERS_API DescribeManagedEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DescribeManagedEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output displays information about a managed endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>This output displays information about a managed endpoint.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpoint = value; }

    /**
     * <p>This output displays information about a managed endpoint.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpoint = std::move(value); }

    /**
     * <p>This output displays information about a managed endpoint.</p>
     */
    inline DescribeManagedEndpointResult& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>This output displays information about a managed endpoint.</p>
     */
    inline DescribeManagedEndpointResult& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeManagedEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeManagedEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeManagedEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Endpoint m_endpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
