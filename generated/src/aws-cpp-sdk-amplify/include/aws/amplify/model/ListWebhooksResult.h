/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> The result structure for the list webhooks request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooksResult">AWS
   * API Reference</a></p>
   */
  class ListWebhooksResult
  {
  public:
    AWS_AMPLIFY_API ListWebhooksResult();
    AWS_AMPLIFY_API ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of webhooks. </p>
     */
    inline const Aws::Vector<Webhook>& GetWebhooks() const{ return m_webhooks; }

    /**
     * <p> A list of webhooks. </p>
     */
    inline void SetWebhooks(const Aws::Vector<Webhook>& value) { m_webhooks = value; }

    /**
     * <p> A list of webhooks. </p>
     */
    inline void SetWebhooks(Aws::Vector<Webhook>&& value) { m_webhooks = std::move(value); }

    /**
     * <p> A list of webhooks. </p>
     */
    inline ListWebhooksResult& WithWebhooks(const Aws::Vector<Webhook>& value) { SetWebhooks(value); return *this;}

    /**
     * <p> A list of webhooks. </p>
     */
    inline ListWebhooksResult& WithWebhooks(Aws::Vector<Webhook>&& value) { SetWebhooks(std::move(value)); return *this;}

    /**
     * <p> A list of webhooks. </p>
     */
    inline ListWebhooksResult& AddWebhooks(const Webhook& value) { m_webhooks.push_back(value); return *this; }

    /**
     * <p> A list of webhooks. </p>
     */
    inline ListWebhooksResult& AddWebhooks(Webhook&& value) { m_webhooks.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
     */
    inline ListWebhooksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Webhook> m_webhooks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
