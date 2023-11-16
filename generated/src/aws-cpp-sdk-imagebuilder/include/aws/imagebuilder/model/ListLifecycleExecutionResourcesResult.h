/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecutionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecycleExecutionResource.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListLifecycleExecutionResourcesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult();
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionId = value; }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionId = std::move(value); }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionId.assign(value); }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}


    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline const LifecycleExecutionState& GetLifecycleExecutionState() const{ return m_lifecycleExecutionState; }

    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline void SetLifecycleExecutionState(const LifecycleExecutionState& value) { m_lifecycleExecutionState = value; }

    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline void SetLifecycleExecutionState(LifecycleExecutionState&& value) { m_lifecycleExecutionState = std::move(value); }

    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithLifecycleExecutionState(const LifecycleExecutionState& value) { SetLifecycleExecutionState(value); return *this;}

    /**
     * <p>The current state of the lifecycle runtime instance.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithLifecycleExecutionState(LifecycleExecutionState&& value) { SetLifecycleExecutionState(std::move(value)); return *this;}


    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline const Aws::Vector<LifecycleExecutionResource>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline void SetResources(const Aws::Vector<LifecycleExecutionResource>& value) { m_resources = value; }

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline void SetResources(Aws::Vector<LifecycleExecutionResource>&& value) { m_resources = std::move(value); }

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithResources(const Aws::Vector<LifecycleExecutionResource>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithResources(Aws::Vector<LifecycleExecutionResource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline ListLifecycleExecutionResourcesResult& AddResources(const LifecycleExecutionResource& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>A list of resources that were identified for lifecycle actions.</p>
     */
    inline ListLifecycleExecutionResourcesResult& AddResources(LifecycleExecutionResource&& value) { m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecycleExecutionResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLifecycleExecutionResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLifecycleExecutionResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLifecycleExecutionResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;

    LifecycleExecutionState m_lifecycleExecutionState;

    Aws::Vector<LifecycleExecutionResource> m_resources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
