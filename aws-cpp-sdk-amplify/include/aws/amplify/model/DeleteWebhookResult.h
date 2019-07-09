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
   * <p> Result structure for the delete webhook request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteWebhookResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API DeleteWebhookResult
  {
  public:
    DeleteWebhookResult();
    DeleteWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Webhook structure. </p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p> Webhook structure. </p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p> Webhook structure. </p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p> Webhook structure. </p>
     */
    inline DeleteWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p> Webhook structure. </p>
     */
    inline DeleteWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    Webhook m_webhook;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
