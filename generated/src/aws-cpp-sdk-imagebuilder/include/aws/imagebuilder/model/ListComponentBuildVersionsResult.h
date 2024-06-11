/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentSummary.h>
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
  class ListComponentBuildVersionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult();
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListComponentBuildVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComponentBuildVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComponentBuildVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComponentBuildVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of component summaries for the specified semantic version.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponentSummaryList() const{ return m_componentSummaryList; }
    inline void SetComponentSummaryList(const Aws::Vector<ComponentSummary>& value) { m_componentSummaryList = value; }
    inline void SetComponentSummaryList(Aws::Vector<ComponentSummary>&& value) { m_componentSummaryList = std::move(value); }
    inline ListComponentBuildVersionsResult& WithComponentSummaryList(const Aws::Vector<ComponentSummary>& value) { SetComponentSummaryList(value); return *this;}
    inline ListComponentBuildVersionsResult& WithComponentSummaryList(Aws::Vector<ComponentSummary>&& value) { SetComponentSummaryList(std::move(value)); return *this;}
    inline ListComponentBuildVersionsResult& AddComponentSummaryList(const ComponentSummary& value) { m_componentSummaryList.push_back(value); return *this; }
    inline ListComponentBuildVersionsResult& AddComponentSummaryList(ComponentSummary&& value) { m_componentSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComponentBuildVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComponentBuildVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComponentBuildVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<ComponentSummary> m_componentSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
