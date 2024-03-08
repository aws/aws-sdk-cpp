/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecution.h>
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
  class ListLifecycleExecutionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult();
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecycleExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline const Aws::Vector<LifecycleExecution>& GetLifecycleExecutions() const{ return m_lifecycleExecutions; }

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline void SetLifecycleExecutions(const Aws::Vector<LifecycleExecution>& value) { m_lifecycleExecutions = value; }

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline void SetLifecycleExecutions(Aws::Vector<LifecycleExecution>&& value) { m_lifecycleExecutions = std::move(value); }

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline ListLifecycleExecutionsResult& WithLifecycleExecutions(const Aws::Vector<LifecycleExecution>& value) { SetLifecycleExecutions(value); return *this;}

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline ListLifecycleExecutionsResult& WithLifecycleExecutions(Aws::Vector<LifecycleExecution>&& value) { SetLifecycleExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline ListLifecycleExecutionsResult& AddLifecycleExecutions(const LifecycleExecution& value) { m_lifecycleExecutions.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle runtime instances for the specified resource.</p>
     */
    inline ListLifecycleExecutionsResult& AddLifecycleExecutions(LifecycleExecution&& value) { m_lifecycleExecutions.push_back(std::move(value)); return *this; }


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
    inline ListLifecycleExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecycleExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecycleExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLifecycleExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLifecycleExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLifecycleExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LifecycleExecution> m_lifecycleExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
