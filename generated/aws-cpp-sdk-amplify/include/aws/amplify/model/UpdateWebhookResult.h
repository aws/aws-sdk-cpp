﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
   * <p> The result structure for the update webhook request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateWebhookResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateWebhookResult
  {
  public:
    UpdateWebhookResult();
    UpdateWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p> Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p> Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p> Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline UpdateWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p> Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline UpdateWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    Webhook m_webhook;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
