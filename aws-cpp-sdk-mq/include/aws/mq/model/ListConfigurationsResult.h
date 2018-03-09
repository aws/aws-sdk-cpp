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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/Configuration.h>
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
  class AWS_MQ_API ListConfigurationsResult
  {
  public:
    ListConfigurationsResult();
    ListConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The list of all revisions for the specified configuration.
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurations = value; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurations = std::move(value); }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationsResult& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationsResult& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationsResult& AddConfigurations(const Configuration& value) { m_configurations.push_back(value); return *this; }

    /**
     * The list of all revisions for the specified configuration.
     */
    inline ListConfigurationsResult& AddConfigurations(Configuration&& value) { m_configurations.push_back(std::move(value)); return *this; }


    /**
     * The maximum number of configurations that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of configurations that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * The maximum number of configurations that Amazon MQ can return per page (20 by
     * default). This value must be an integer from 5 to 100.
     */
    inline ListConfigurationsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.
     */
    inline ListConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Configuration> m_configurations;

    int m_maxResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
