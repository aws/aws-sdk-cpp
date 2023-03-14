/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EndpointProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeEndpointResult
  {
  public:
    AWS_COMPREHEND_API DescribeEndpointResult();
    AWS_COMPREHEND_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline const EndpointProperties& GetEndpointProperties() const{ return m_endpointProperties; }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline void SetEndpointProperties(const EndpointProperties& value) { m_endpointProperties = value; }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline void SetEndpointProperties(EndpointProperties&& value) { m_endpointProperties = std::move(value); }

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointProperties(const EndpointProperties& value) { SetEndpointProperties(value); return *this;}

    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline DescribeEndpointResult& WithEndpointProperties(EndpointProperties&& value) { SetEndpointProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EndpointProperties m_endpointProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
