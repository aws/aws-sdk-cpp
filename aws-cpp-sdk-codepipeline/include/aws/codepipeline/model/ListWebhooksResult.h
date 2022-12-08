/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ListWebhookItem.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListWebhooksResult
  {
  public:
    AWS_CODEPIPELINE_API ListWebhooksResult();
    AWS_CODEPIPELINE_API ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline const Aws::Vector<ListWebhookItem>& GetWebhooks() const{ return m_webhooks; }

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline void SetWebhooks(const Aws::Vector<ListWebhookItem>& value) { m_webhooks = value; }

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline void SetWebhooks(Aws::Vector<ListWebhookItem>&& value) { m_webhooks = std::move(value); }

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline ListWebhooksResult& WithWebhooks(const Aws::Vector<ListWebhookItem>& value) { SetWebhooks(value); return *this;}

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline ListWebhooksResult& WithWebhooks(Aws::Vector<ListWebhookItem>&& value) { SetWebhooks(std::move(value)); return *this;}

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline ListWebhooksResult& AddWebhooks(const ListWebhookItem& value) { m_webhooks.push_back(value); return *this; }

    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline ListWebhooksResult& AddWebhooks(ListWebhookItem&& value) { m_webhooks.push_back(std::move(value)); return *this; }


    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline ListWebhooksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline ListWebhooksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline ListWebhooksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListWebhookItem> m_webhooks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
