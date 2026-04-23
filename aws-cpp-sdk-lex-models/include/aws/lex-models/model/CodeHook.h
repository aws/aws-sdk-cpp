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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Specifies a Lambda function that verifies requests to a bot or fulfills the
   * user's request to a bot..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CodeHook">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API CodeHook
  {
  public:
    CodeHook();
    CodeHook(Aws::Utils::Json::JsonView jsonValue);
    CodeHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline CodeHook& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline CodeHook& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline CodeHook& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline const Aws::String& GetMessageVersion() const{ return m_messageVersion; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline bool MessageVersionHasBeenSet() const { return m_messageVersionHasBeenSet; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline void SetMessageVersion(const Aws::String& value) { m_messageVersionHasBeenSet = true; m_messageVersion = value; }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline void SetMessageVersion(Aws::String&& value) { m_messageVersionHasBeenSet = true; m_messageVersion = std::move(value); }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline void SetMessageVersion(const char* value) { m_messageVersionHasBeenSet = true; m_messageVersion.assign(value); }

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline CodeHook& WithMessageVersion(const Aws::String& value) { SetMessageVersion(value); return *this;}

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline CodeHook& WithMessageVersion(Aws::String&& value) { SetMessageVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline CodeHook& WithMessageVersion(const char* value) { SetMessageVersion(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet;

    Aws::String m_messageVersion;
    bool m_messageVersionHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
