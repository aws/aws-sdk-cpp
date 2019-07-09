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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Webhook.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for the list webhooks request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooksResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ListWebhooksResult
  {
  public:
    ListWebhooksResult();
    ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of webhooks. </p>
     */
    inline const Aws::Vector<Webhook>& GetWebhooks() const{ return m_webhooks; }

    /**
     * <p> List of webhooks. </p>
     */
    inline void SetWebhooks(const Aws::Vector<Webhook>& value) { m_webhooks = value; }

    /**
     * <p> List of webhooks. </p>
     */
    inline void SetWebhooks(Aws::Vector<Webhook>&& value) { m_webhooks = std::move(value); }

    /**
     * <p> List of webhooks. </p>
     */
    inline ListWebhooksResult& WithWebhooks(const Aws::Vector<Webhook>& value) { SetWebhooks(value); return *this;}

    /**
     * <p> List of webhooks. </p>
     */
    inline ListWebhooksResult& WithWebhooks(Aws::Vector<Webhook>&& value) { SetWebhooks(std::move(value)); return *this;}

    /**
     * <p> List of webhooks. </p>
     */
    inline ListWebhooksResult& AddWebhooks(const Webhook& value) { m_webhooks.push_back(value); return *this; }

    /**
     * <p> List of webhooks. </p>
     */
    inline ListWebhooksResult& AddWebhooks(Webhook&& value) { m_webhooks.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Webhook> m_webhooks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
