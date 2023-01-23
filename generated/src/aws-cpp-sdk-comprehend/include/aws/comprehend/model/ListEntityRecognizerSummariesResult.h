/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntityRecognizerSummary.h>
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
  class ListEntityRecognizerSummariesResult
  {
  public:
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult();
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEntityRecognizerSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline const Aws::Vector<EntityRecognizerSummary>& GetEntityRecognizerSummariesList() const{ return m_entityRecognizerSummariesList; }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline void SetEntityRecognizerSummariesList(const Aws::Vector<EntityRecognizerSummary>& value) { m_entityRecognizerSummariesList = value; }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline void SetEntityRecognizerSummariesList(Aws::Vector<EntityRecognizerSummary>&& value) { m_entityRecognizerSummariesList = std::move(value); }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& WithEntityRecognizerSummariesList(const Aws::Vector<EntityRecognizerSummary>& value) { SetEntityRecognizerSummariesList(value); return *this;}

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& WithEntityRecognizerSummariesList(Aws::Vector<EntityRecognizerSummary>&& value) { SetEntityRecognizerSummariesList(std::move(value)); return *this;}

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& AddEntityRecognizerSummariesList(const EntityRecognizerSummary& value) { m_entityRecognizerSummariesList.push_back(value); return *this; }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& AddEntityRecognizerSummariesList(EntityRecognizerSummary&& value) { m_entityRecognizerSummariesList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The list entity recognizer summaries.</p>
     */
    inline ListEntityRecognizerSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntityRecognizerSummary> m_entityRecognizerSummariesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
