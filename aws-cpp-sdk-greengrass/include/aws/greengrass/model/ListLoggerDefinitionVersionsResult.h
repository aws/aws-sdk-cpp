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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/VersionInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API ListLoggerDefinitionVersionsResult
  {
  public:
    ListLoggerDefinitionVersionsResult();
    ListLoggerDefinitionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLoggerDefinitionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListLoggerDefinitionVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListLoggerDefinitionVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListLoggerDefinitionVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Information about a version.
     */
    inline const Aws::Vector<VersionInformation>& GetVersions() const{ return m_versions; }

    /**
     * Information about a version.
     */
    inline void SetVersions(const Aws::Vector<VersionInformation>& value) { m_versions = value; }

    /**
     * Information about a version.
     */
    inline void SetVersions(Aws::Vector<VersionInformation>&& value) { m_versions = std::move(value); }

    /**
     * Information about a version.
     */
    inline ListLoggerDefinitionVersionsResult& WithVersions(const Aws::Vector<VersionInformation>& value) { SetVersions(value); return *this;}

    /**
     * Information about a version.
     */
    inline ListLoggerDefinitionVersionsResult& WithVersions(Aws::Vector<VersionInformation>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * Information about a version.
     */
    inline ListLoggerDefinitionVersionsResult& AddVersions(const VersionInformation& value) { m_versions.push_back(value); return *this; }

    /**
     * Information about a version.
     */
    inline ListLoggerDefinitionVersionsResult& AddVersions(VersionInformation&& value) { m_versions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<VersionInformation> m_versions;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
