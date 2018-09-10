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
  class AWS_CODEPIPELINE_API PutWebhookResult
  {
  public:
    PutWebhookResult();
    PutWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
