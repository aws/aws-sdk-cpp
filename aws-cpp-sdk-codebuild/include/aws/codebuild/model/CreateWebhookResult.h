﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/Webhook.h>
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
  class AWS_CODEBUILD_API CreateWebhookResult
  {
  public:
    CreateWebhookResult();
    CreateWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline CreateWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p>Information about a webhook that connects repository events to a build
     * project in AWS CodeBuild.</p>
     */
    inline CreateWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    Webhook m_webhook;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
