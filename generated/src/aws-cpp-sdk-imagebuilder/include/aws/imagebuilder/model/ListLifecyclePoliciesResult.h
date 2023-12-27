/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicySummary.h>
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
  class ListLifecyclePoliciesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult();
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetLifecyclePolicySummaryList() const{ return m_lifecyclePolicySummaryList; }

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline void SetLifecyclePolicySummaryList(const Aws::Vector<LifecyclePolicySummary>& value) { m_lifecyclePolicySummaryList = value; }

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline void SetLifecyclePolicySummaryList(Aws::Vector<LifecyclePolicySummary>&& value) { m_lifecyclePolicySummaryList = std::move(value); }

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline ListLifecyclePoliciesResult& WithLifecyclePolicySummaryList(const Aws::Vector<LifecyclePolicySummary>& value) { SetLifecyclePolicySummaryList(value); return *this;}

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline ListLifecyclePoliciesResult& WithLifecyclePolicySummaryList(Aws::Vector<LifecyclePolicySummary>&& value) { SetLifecyclePolicySummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline ListLifecyclePoliciesResult& AddLifecyclePolicySummaryList(const LifecyclePolicySummary& value) { m_lifecyclePolicySummaryList.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle policies in your Amazon Web Services account that meet
     * the criteria specified in the request.</p>
     */
    inline ListLifecyclePoliciesResult& AddLifecyclePolicySummaryList(LifecyclePolicySummary&& value) { m_lifecyclePolicySummaryList.push_back(std::move(value)); return *this; }


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
    inline ListLifecyclePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecyclePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListLifecyclePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLifecyclePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLifecyclePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLifecyclePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LifecyclePolicySummary> m_lifecyclePolicySummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
