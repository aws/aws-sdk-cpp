/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
  class PutWebhookResult
  {
  public:
    AWS_CODEPIPELINE_API PutWebhookResult();
    AWS_CODEPIPELINE_API PutWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline const ListWebhookItem& GetWebhook() const{ return m_webhook; }

    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline void SetWebhook(const ListWebhookItem& value) { m_webhook = value; }

    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline void SetWebhook(ListWebhookItem&& value) { m_webhook = std::move(value); }

    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline PutWebhookResult& WithWebhook(const ListWebhookItem& value) { SetWebhook(value); return *this;}

    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline PutWebhookResult& WithWebhook(ListWebhookItem&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    ListWebhookItem m_webhook;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
