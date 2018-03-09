/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MQ_API ListConfigurationRevisionsResult
  {
  public:
    ListConfigurationRevisionsResult();
    ListConfigurationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigurationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the configuration.
     */
    inline ListConfigurationRevisionsResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * The maximum number of configuration revisions that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of configuration revisions that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * The maximum number of configuration revisions that can be returned per page (20
     * by default). This value must be an integer from 5 to 100.
     */
    inline ListConfigurationRevisionsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListConfigurationRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The list of all revisions for the specified configuration.
     */
    inline const Aws::Vector<ConfigurationRevision>& GetRevisions() const{ return m_revisions; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetRevisions(const Aws::Vector<ConfigurationRevision>& value) { m_revisions = value; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetRevisions(Aws::Vector<ConfigurationRevision>&& value) { m_revisions = std::move(value); }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationRevisionsResult& WithRevisions(const Aws::Vector<ConfigurationRevision>& value) { SetRevisions(value); return *this;}

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationRevisionsResult& WithRevisions(Aws::Vector<ConfigurationRevision>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationRevisionsResult& AddRevisions(const ConfigurationRevision& value) { m_revisions.push_back(value); return *this; }

    /**
     * The list of all revisions for the specified configuration.
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
