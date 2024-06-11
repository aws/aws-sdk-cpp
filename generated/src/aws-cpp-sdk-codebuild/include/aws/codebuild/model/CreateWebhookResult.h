﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Webhook.h>
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
namespace CodeBuild
{
namespace Model
{
  class CreateWebhookResult
  {
  public:
    AWS_CODEBUILD_API CreateWebhookResult();
    AWS_CODEBUILD_API CreateWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API CreateWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in CodeBuild.</p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }
    inline CreateWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}
    inline CreateWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebhookResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebhookResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebhookResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Webhook m_webhook;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
