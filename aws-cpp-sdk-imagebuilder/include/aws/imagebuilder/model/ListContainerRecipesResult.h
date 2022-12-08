/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ContainerRecipeSummary.h>
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
  class ListContainerRecipesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListContainerRecipesResult();
    AWS_IMAGEBUILDER_API ListContainerRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListContainerRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListContainerRecipesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListContainerRecipesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline ListContainerRecipesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline const Aws::Vector<ContainerRecipeSummary>& GetContainerRecipeSummaryList() const{ return m_containerRecipeSummaryList; }

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline void SetContainerRecipeSummaryList(const Aws::Vector<ContainerRecipeSummary>& value) { m_containerRecipeSummaryList = value; }

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline void SetContainerRecipeSummaryList(Aws::Vector<ContainerRecipeSummary>&& value) { m_containerRecipeSummaryList = std::move(value); }

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline ListContainerRecipesResult& WithContainerRecipeSummaryList(const Aws::Vector<ContainerRecipeSummary>& value) { SetContainerRecipeSummaryList(value); return *this;}

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline ListContainerRecipesResult& WithContainerRecipeSummaryList(Aws::Vector<ContainerRecipeSummary>&& value) { SetContainerRecipeSummaryList(std::move(value)); return *this;}

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline ListContainerRecipesResult& AddContainerRecipeSummaryList(const ContainerRecipeSummary& value) { m_containerRecipeSummaryList.push_back(value); return *this; }

    /**
     * <p>The list of container recipes returned for the request.</p>
     */
    inline ListContainerRecipesResult& AddContainerRecipeSummaryList(ContainerRecipeSummary&& value) { m_containerRecipeSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline ListContainerRecipesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline ListContainerRecipesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token field is used for paginated responses. When this is not empty,
     * there are additional container recipes that the service has not included in this
     * response. Use this token with the next request to retrieve additional list
     * items.</p>
     */
    inline ListContainerRecipesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ContainerRecipeSummary> m_containerRecipeSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
