/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AuditManager
{
namespace Model
{
  class ListKeywordsForDataSourceResult
  {
  public:
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult();
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListKeywordsForDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywords = value; }

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywords = std::move(value); }

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline ListKeywordsForDataSourceResult& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline ListKeywordsForDataSourceResult& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline ListKeywordsForDataSourceResult& AddKeywords(const Aws::String& value) { m_keywords.push_back(value); return *this; }

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline ListKeywordsForDataSourceResult& AddKeywords(Aws::String&& value) { m_keywords.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of keywords for the event mapping source. </p>
     */
    inline ListKeywordsForDataSourceResult& AddKeywords(const char* value) { m_keywords.push_back(value); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListKeywordsForDataSourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListKeywordsForDataSourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListKeywordsForDataSourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_keywords;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
