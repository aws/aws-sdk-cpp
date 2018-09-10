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
