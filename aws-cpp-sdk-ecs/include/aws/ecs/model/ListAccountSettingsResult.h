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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Setting.h>
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
namespace ECS
{
namespace Model
{
  class AWS_ECS_API ListAccountSettingsResult
  {
  public:
    ListAccountSettingsResult();
    ListAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account settings for the resource.</p>
     */
    inline const Aws::Vector<Setting>& GetSettings() const{ return m_settings; }

    /**
     * <p>The account settings for the resource.</p>
     */
    inline void SetSettings(const Aws::Vector<Setting>& value) { m_settings = value; }

    /**
     * <p>The account settings for the resource.</p>
     */
    inline void SetSettings(Aws::Vector<Setting>&& value) { m_settings = std::move(value); }

    /**
     * <p>The account settings for the resource.</p>
     */
    inline ListAccountSettingsResult& WithSettings(const Aws::Vector<Setting>& value) { SetSettings(value); return *this;}

    /**
     * <p>The account settings for the resource.</p>
     */
    inline ListAccountSettingsResult& WithSettings(Aws::Vector<Setting>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>The account settings for the resource.</p>
     */
    inline ListAccountSettingsResult& AddSettings(const Setting& value) { m_settings.push_back(value); return *this; }

    /**
     * <p>The account settings for the resource.</p>
     */
    inline ListAccountSettingsResult& AddSettings(Setting&& value) { m_settings.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListAccountSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListAccountSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListAccountSettings</code> request. When the results of a
     * <code>ListAccountSettings</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListAccountSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Setting> m_settings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
