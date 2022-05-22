/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/CategoryProperties.h>
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
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API ListCallAnalyticsCategoriesResult
  {
  public:
    ListCallAnalyticsCategoriesResult();
    ListCallAnalyticsCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCallAnalyticsCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the list
     * is set by the <code>MaxResults</code> parameter. If there are more categories in
     * the list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in the next request to the operation to return the next
     * page of analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline const Aws::Vector<CategoryProperties>& GetCategories() const{ return m_categories; }

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline void SetCategories(const Aws::Vector<CategoryProperties>& value) { m_categories = value; }

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline void SetCategories(Aws::Vector<CategoryProperties>&& value) { m_categories = std::move(value); }

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& WithCategories(const Aws::Vector<CategoryProperties>& value) { SetCategories(value); return *this;}

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& WithCategories(Aws::Vector<CategoryProperties>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& AddCategories(const CategoryProperties& value) { m_categories.push_back(value); return *this; }

    /**
     * <p>A list of objects containing information about analytics categories.</p>
     */
    inline ListCallAnalyticsCategoriesResult& AddCategories(CategoryProperties&& value) { m_categories.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CategoryProperties> m_categories;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
