/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CodeHook
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook();
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API CodeHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline CodeHook& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline CodeHook& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline CodeHook& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the request-response that you want Amazon Lex to use to invoke
     * your Lambda function. For more information, see <a>using-lambda</a>.</p>
     */
    inline const Aws::String& GetMessageVersion() const{ return m_messageVersion; }
    inline bool MessageVersionHasBeenSet() const { return m_messageVersionHasBeenSet; }
    inline void SetMessageVersion(const Aws::String& value) { m_messageVersionHasBeenSet = true; m_messageVersion = value; }
    inline void SetMessageVersion(Aws::String&& value) { m_messageVersionHasBeenSet = true; m_messageVersion = std::move(value); }
    inline void SetMessageVersion(const char* value) { m_messageVersionHasBeenSet = true; m_messageVersion.assign(value); }
    inline CodeHook& WithMessageVersion(const Aws::String& value) { SetMessageVersion(value); return *this;}
    inline CodeHook& WithMessageVersion(Aws::String&& value) { SetMessageVersion(std::move(value)); return *this;}
    inline CodeHook& WithMessageVersion(const char* value) { SetMessageVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_messageVersion;
    bool m_messageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
