/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/ConfigurationRevision.h>
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
namespace MQ
{
namespace Model
{
  class ListConfigurationRevisionsResult
  {
  public:
    AWS_MQ_API ListConfigurationRevisionsResult();
    AWS_MQ_API ListConfigurationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API ListConfigurationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>The maximum number of configuration revisions that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of configuration revisions that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>The maximum number of configuration revisions that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline ListConfigurationRevisionsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListConfigurationRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline const Aws::Vector<ConfigurationRevision>& GetRevisions() const{ return m_revisions; }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline void SetRevisions(const Aws::Vector<ConfigurationRevision>& value) { m_revisions = value; }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline void SetRevisions(Aws::Vector<ConfigurationRevision>&& value) { m_revisions = std::move(value); }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline ListConfigurationRevisionsResult& WithRevisions(const Aws::Vector<ConfigurationRevision>& value) { SetRevisions(value); return *this;}

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline ListConfigurationRevisionsResult& WithRevisions(Aws::Vector<ConfigurationRevision>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline ListConfigurationRevisionsResult& AddRevisions(const ConfigurationRevision& value) { m_revisions.push_back(value); return *this; }

    /**
     * <p>The list of all revisions for the specified configuration.</p>
     */
    inline ListConfigurationRevisionsResult& AddRevisions(ConfigurationRevision&& value) { m_revisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationId;

    int m_maxResults;

    Aws::String m_nextToken;

    Aws::Vector<ConfigurationRevision> m_revisions;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
