/**
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
  class AWS_CODEBUILD_API UpdateWebhookResult
  {
  public:
    UpdateWebhookResult();
    UpdateWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about a repository's webhook that is associated with a project
     * in AWS CodeBuild. </p>
     */
    inline const Webhook& GetWebhook() const{ return m_webhook; }

    /**
     * <p> Information about a repository's webhook that is associated with a project
     * in AWS CodeBuild. </p>
     */
    inline void SetWebhook(const Webhook& value) { m_webhook = value; }

    /**
     * <p> Information about a repository's webhook that is associated with a project
     * in AWS CodeBuild. </p>
     */
    inline void SetWebhook(Webhook&& value) { m_webhook = std::move(value); }

    /**
     * <p> Information about a repository's webhook that is associated with a project
     * in AWS CodeBuild. </p>
     */
    inline UpdateWebhookResult& WithWebhook(const Webhook& value) { SetWebhook(value); return *this;}

    /**
     * <p> Information about a repository's webhook that is associated with a project
     * in AWS CodeBuild. </p>
     */
    inline UpdateWebhookResult& WithWebhook(Webhook&& value) { SetWebhook(std::move(value)); return *this;}

  private:

    Webhook m_webhook;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
