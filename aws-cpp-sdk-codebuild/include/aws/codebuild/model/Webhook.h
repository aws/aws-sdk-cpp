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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
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

  /**
   * <p>Information about a webhook in GitHub that connects repository events to a
   * build project in AWS CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Webhook">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API Webhook
  {
  public:
    Webhook();
    Webhook(const Aws::Utils::Json::JsonValue& jsonValue);
    Webhook& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL to the webhook.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the webhook.</p>
     */
    inline Webhook& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline const Aws::String& GetPayloadUrl() const{ return m_payloadUrl; }

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline void SetPayloadUrl(const Aws::String& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = value; }

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline void SetPayloadUrl(Aws::String&& value) { m_payloadUrlHasBeenSet = true; m_payloadUrl = std::move(value); }

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline void SetPayloadUrl(const char* value) { m_payloadUrlHasBeenSet = true; m_payloadUrl.assign(value); }

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline Webhook& WithPayloadUrl(const Aws::String& value) { SetPayloadUrl(value); return *this;}

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline Webhook& WithPayloadUrl(Aws::String&& value) { SetPayloadUrl(std::move(value)); return *this;}

    /**
     * <p>This is the server endpoint that will receive the webhook payload.</p>
     */
    inline Webhook& WithPayloadUrl(const char* value) { SetPayloadUrl(value); return *this;}


    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline const Aws::String& GetSecret() const{ return m_secret; }

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline void SetSecret(const Aws::String& value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline void SetSecret(Aws::String&& value) { m_secretHasBeenSet = true; m_secret = std::move(value); }

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline void SetSecret(const char* value) { m_secretHasBeenSet = true; m_secret.assign(value); }

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline Webhook& WithSecret(const Aws::String& value) { SetSecret(value); return *this;}

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline Webhook& WithSecret(Aws::String&& value) { SetSecret(std::move(value)); return *this;}

    /**
     * <p>Use this secret while creating a webhook in GitHub for Enterprise. The secret
     * allows webhook requests sent by GitHub for Enterprise to be authenticated by AWS
     * CodeBuild.</p>
     */
    inline Webhook& WithSecret(const char* value) { SetSecret(value); return *this;}

  private:

    Aws::String m_url;
    bool m_urlHasBeenSet;

    Aws::String m_payloadUrl;
    bool m_payloadUrlHasBeenSet;

    Aws::String m_secret;
    bool m_secretHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
