/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
  class CreateEndpointResult
  {
  public:
    AWS_COMPREHEND_API CreateEndpointResult();
    AWS_COMPREHEND_API CreateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline CreateEndpointResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline CreateEndpointResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the endpoint being created.</p>
     */
    inline CreateEndpointResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline CreateEndpointResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline CreateEndpointResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline CreateEndpointResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_endpointArn;

    Aws::String m_modelArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
