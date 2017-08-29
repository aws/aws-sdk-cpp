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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>ListTags</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTagsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API ListTagsResult
  {
  public:
    ListTagsResult();
    ListTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of key-value pairs that contain tag keys and tag values that are
     * attached to a stack or layer.</p>
     */
    inline ListTagsResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline ListTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline ListTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to get the next set of results. If the previous
     * paginated request returned all of the remaining results, this parameter is set
     * to <code>null</code>. </p>
     */
    inline ListTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
