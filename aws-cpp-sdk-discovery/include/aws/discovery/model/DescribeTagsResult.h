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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ConfigurationTag.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeTagsResult
  {
  public:
    DescribeTagsResult();
    DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline const Aws::Vector<ConfigurationTag>& GetTags() const{ return m_tags; }

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline void SetTags(const Aws::Vector<ConfigurationTag>& value) { m_tags = value; }

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline void SetTags(Aws::Vector<ConfigurationTag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline DescribeTagsResult& WithTags(const Aws::Vector<ConfigurationTag>& value) { SetTags(value); return *this;}

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline DescribeTagsResult& WithTags(Aws::Vector<ConfigurationTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline DescribeTagsResult& AddTags(const ConfigurationTag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Depending on the input, this is a list of configuration items tagged with a
     * specific tag, or a list of tags for a specific configuration item.</p>
     */
    inline DescribeTagsResult& AddTags(ConfigurationTag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline DescribeTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline DescribeTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The call returns a token. Use this token to get the next set of results.</p>
     */
    inline DescribeTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigurationTag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
