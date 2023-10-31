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
   * <p>The result structure for the get webhook request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetWebhookResult">AWS
   * API Reference</a></p>
   */
  class GetWebhookResult
  {
  public:
    AWS_AMPLIFY_API GetWebhookResult();
    AWS_AMPLIFY_API GetWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the structure of a webhook. </p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p>Describes the structure of a webhook. </p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p>Describes the structure of a webhook. </p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p>Describes the structure of a webhook. </p>
     */
    inline GetWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p>Describes the structure of a webhook. </p>
     */
    inline GetWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWebhookResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWebhookResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWebhookResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Webhook m_webhook;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
