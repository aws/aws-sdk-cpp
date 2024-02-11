/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Webhook.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure for the delete webhook request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhookResult">AWS
   * API Reference</a></p>
   */
  class DeleteWebhookResult
  {
  public:
    AWS_AMPLIFY_API DeleteWebhookResult();
    AWS_AMPLIFY_API DeleteWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API DeleteWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p>Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p>Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p>Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline DeleteWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p>Describes a webhook that connects repository events to an Amplify app. </p>
     */
    inline DeleteWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteWebhookResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteWebhookResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteWebhookResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Webhook m_webhook;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
